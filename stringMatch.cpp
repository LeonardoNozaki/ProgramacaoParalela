#include <bits/stdc++.h>
using namespace std;

int main () {
  string haystack, needle, auxRead;

  getline(cin, needle);
	getline(cin, haystack);
  while(getline(cin, auxRead)) {
		haystack = haystack + ' ' + auxRead;
	};

  int lenHaystack = haystack.length();
	int lenNeedle = needle.length();
  
  cout<<needle<<" "<<haystack<<endl;
  cout<<lenNeedle<<" "<<lenHaystack<<endl;
  return 0;
}
