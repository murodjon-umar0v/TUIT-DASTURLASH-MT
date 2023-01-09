#include <bits/stdc++.h>
using namespace std;
int main(){
	string num; int x=0; vector<int> v;
	ifstream myf("input11.2.txt");
	if(myf.is_open()){
		while(getline(myf, num)){
			stringstream gg(num);
			gg >> x;
			v.push_back(x);
		}
		myf.close();
	}
	cout << "Massiv(fayl)dagi sonlar: \n";
	for(auto x : v) cout << x << " ";
	cout << "\n\n";
	ofstream file;
	file.open("output11.2.txt");
	sort(v.begin(), v.end());
	file << v[0]+v[1];
	cout << "output fayliga yozilgan son: " << v[0] + v[1];
	file.close();

	return 0;
}

