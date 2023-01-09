#include <bits/stdc++.h>

using namespace std;
const int n=5;
class grade{
	friend void debtor(grade grades[]);
	private:
		string name, surname; int grade;
	public:
		void setFullname(string s1, string s2){
			name = s1; surname = s2;
		}
		void setGrade(int k){
			grade = k;
		}
};

void debtor(grade grades[]){
	cout << "Imtihondan yiqilganlar: \n";
	for(int i=0; i<n; i++){
		if(grades[i].grade <= 2){
			cout << grades[i].name << " " << grades[i].surname << "\n";
		}
	}
}

int main(){
	grade grades[n];
	string name, surname; int grade, t=n, i=0;
	while(t--){
		cout << "Ism, familiya va bahoni kiriting "; cin >> name >> surname >> grade;
		grades[i].setFullname(name, surname); grades[i].setGrade(grade);
		i++;
	}
	debtor(grades);

	return 0;
}

