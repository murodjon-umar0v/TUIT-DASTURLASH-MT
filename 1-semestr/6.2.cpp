#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n]; for(int i=0; i<n; i++) for(int o=0; o<n; o++) cin >> a[i][o];
	vector<int> b;
	for(int i=0; i<n; i++){
		for(int q=i; q<n; q++){
			b.push_back(a[i][q]);
		}
	}
	cout << "B massiv: ";
	for(int i=0; i<b.size(); i++){
		cout << b[i] << ' ';
	}
	cout << "\n";
	
	int ll = n*(n+1)/2;
	int c[ll][1];
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 1; j++){
			c[i][j] = 0;
			for (int k = 0; k < ll; k++) {
				c[i][j] += a[i][k] * b[k];
			}
			cout << c[i][j] << " ";
		}
		printf("\n");
	}
	
	return 0;
}

