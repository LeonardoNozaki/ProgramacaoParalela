#include <bits/stdc++.h>
#include <omp.h>
#include <chrono>
using namespace std;

int main () {
  string haystack, needle, auxRead;
  int numThreads;

  cout<<"Digite o texto de busca: ";
  getline(cin, needle);
  cout<<"Digite o nome do arquivo que contem o texto de entrada: ";
  getline(cin, auxRead);
  cout<<"Digite o número de threads que deseja utilizar nesta execução: ";
  cin>>numThreads;
  omp_set_num_threads(numThreads);

  ifstream file(auxRead);
  if (file.is_open()) {
    while (!file.eof()) {
      getline (file, auxRead);
      haystack = haystack + '\n' + auxRead;
    }
    file.close();
  } else {
    cout<<endl<<"O arquivo com nome: "<<auxRead<<", nao foi encontrado neste diretorio"<<endl;
    return 0;
  }
  
  int lenHaystack = haystack.length();
  int lenNeedle = needle.length();
  int i = 0;
  queue<int> q;

  auto inicio = chrono::high_resolution_clock::now();

  #pragma omp parallel for
  for(i = 0; i < lenHaystack; i++) { 
    int j = 0;
    while ( i + j < lenHaystack && j < lenNeedle && (tolower(haystack[i + j]) == tolower(needle[j])) ) {
      j++;
    }
    if (j == lenNeedle) {
      #pragma omp critical
      q.push(i);
    }
  }

  auto resultado = chrono::high_resolution_clock::now() - inicio;
  int microseconds = chrono::duration_cast<std::chrono::microseconds>(resultado).count();

  cout<<endl<<"Resultados:"<<endl;
  cout<<"Comprimento do texto de entrada: "<<lenHaystack<<endl;
  cout<<"Comprimento do texto de busca: "<<lenNeedle<<endl;
  cout<<"Duração do for-loop: "<<microseconds<<"us"<<endl;
  cout<<"Quantidade de string match: "<<q.size()<<endl;
  return 0;
}
