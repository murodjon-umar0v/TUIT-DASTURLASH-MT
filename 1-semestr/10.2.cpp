#include <bits/stdc++.h>

using namespace std;

int main(){
	char a[1000]; string s="", s2="";	
	
	cin.get(a, 1000);
	string a1=a;
	for(int i=0; i<a1.size(); i++){
		if(a1[i] == 'a' || a1[i] == 'e' || a1[i] == 'i' || a1[i] == 'o' || a1[i] == 'u'){
			s += a[i];
		}else{
			s2 += a[i];
		}
	}
	
	cout << s2 << "\n" << s;

	return 0;
}

