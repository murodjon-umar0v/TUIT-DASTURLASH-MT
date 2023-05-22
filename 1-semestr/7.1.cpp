#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <float> vec; int k;
	for(int i=0; i<5; i++){
		cin >> k; vec.push_back(k);
	}
	k=0;
	for(int i=0; i<5; i++){
		if(vec[i] < 0){
			swap(vec[i], vec[k++]);
		}
	}
	
	for(int i=0; i<5; i++){
		cout << vec[i] << " ";
	}
	return 0;
}

