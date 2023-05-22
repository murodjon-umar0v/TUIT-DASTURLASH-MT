#include <bits/stdc++.h>

using namespace std;

void removeForInc(int arr[], int n)
{
	int l = 1;
	for (int i = 1; i < n; i++) {
		if (arr[l - 1] <= arr[i]) {
			arr[l] = arr[i];
			l++;
		}
	}
	for (int i = 0; i < l; i++)
		cout << arr[i] << " ";
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	removeForInc(a, n);
	return 0;
}

