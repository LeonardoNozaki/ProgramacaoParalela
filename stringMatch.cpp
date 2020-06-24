#include <bits/stdc++.h>
using namespace std;

int main () {
  string haystack, needle, auxRead;

  getline(cin, needle);
	getline(cin, haystack);
  while(getline(cin, auxRead)) {
		haystack = haystack + '\n' + auxRead;
	};
  
  int lenHaystack = haystack.length();
	int lenNeedle = needle.length();
  int i = 0;
  queue<int> q;

  for(i = 0; i < lenHaystack; i++) {
    haystack[i] = tolower(haystack[i]);
  }
  for(i = 0; i < lenNeedle; i++) {
    needle[i] = tolower(needle[i]);
  }

  cout<<needle<<" "<<haystack<<endl;
  cout<<lenNeedle<<" "<<lenHaystack<<endl;

  for(i = 0; i < lenHaystack; i++) { 
	  int j = 0;
		while (j < lenNeedle && haystack[i + j] == needle[j]) {
			j++;
		}
		if (j == lenNeedle) {
			q.push(i);
		}
	}

  cout<<q.size()<<endl;
  return 0;
}
