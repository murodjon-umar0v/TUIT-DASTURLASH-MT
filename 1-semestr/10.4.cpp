#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int p = 1;
	for(int i=0; i<s.length(); i++)
		if(s[i] == ' ')
			p ++;
	
	cout << p;
	return 0;
}

