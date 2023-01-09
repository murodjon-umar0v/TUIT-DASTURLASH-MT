#include <bits/stdc++.h>

using namespace std;

bool isin(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'k' or s[i] == 'K'){
			return 1;
		}
	}
	
	return 0;
}

int main (){
	string name;
	cin >> name;
	string fs = "Berilgan nomdagi matnli faylni yaratish va unga satr kiritish dasturini tuzing. Tarkibida kamida bitta 'k' belgisi bo‘lgan so‘zlarni ekranga chiqaring.";
	ofstream myfile;
	myfile.open (name + ".txt");

	istringstream ss(fs);
	string word;
	while(ss >> word) {
			if(isin(word)){
			myfile << word << "\n";
			cout << word << "\n";
		}
	}
	cout << "\n\nk harfi qatnashgan so'zlar " << name << ".txt fayliga yozildi"; 
	myfile.close();
	return 0;
}
