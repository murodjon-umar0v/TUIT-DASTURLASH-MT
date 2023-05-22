#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int k=12, s1=1, javob=0; double q=0;
	int z[k] = {5, 2, 12, 89, 32, 12, 34, 90, 4, 48, 27, 49};
	int a1 = *max_element(z, z+k);
	int a2 = *min_element(z, z+k);
	
	vector<int> x;
	for(int i=0; i<k; i++) 
		if(z[i] != a1 && z[i] != a2){
			x.push_back(z[i]); s1 *= z[i]; q++;
	} 
	s1 = pow(s1, (1/q));
	for(int i=0; i<x.size(); i++){
		if(x[i] < s1){
			javob++;
		}
	}
	cout << javob;
	return 0;
}

