#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; int l[27]={0}; 
	getline(cin, s);
	char a[1000]={"\0"};
	for(int i=0; i<s.size(); i++){
		a[i] = s[i];
		l[int(a[i])-96]++;
	}
	int mn = 1, ind = 1;
	for(int i=0; i<s.size(); i++){
		if(mn < l[i]){
			ind = i; mn = l[i];
		}
	}
	
	for(int i=0; i<s.size(); i++){
		if(ind == int(s[i])-96){
			s[i] = ' ';
		}
	}
	cout << a << "\n" << s;
	return 0;
}

