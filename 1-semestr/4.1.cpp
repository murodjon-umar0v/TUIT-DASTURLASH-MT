#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, k = -10000; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		k = max(k, a[i]);	
	}
	int s=0;
	for(int i=0; i<n; i++)
		if(a[i] == k) s++;
	cout << k << " sonidan " << s << "ta";
	return 0;
}
