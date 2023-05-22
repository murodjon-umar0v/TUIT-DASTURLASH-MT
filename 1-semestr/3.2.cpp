#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ex 2.71828
#define pi 3.14159265359

int main(){
	//3 3 3 5
	float a1, a2, a3, a4, bm, cm, d, k;
	scanf("%f %f %f %f", &a1, &a2, &a3, &a4);
	bm = max(a1, max(a2, max(a3, a4))); //5
	cm = min(a1, min(a2, min(a3, a4))); //3
	d = a1 + a2 + a3 + a4; //14
	if((d-bm)/3==cm)
		k=bm;
	else
		k=cm;
	
	if(a1 == k) cout << 1;
	if(a2 == k) cout << 2;
	if(a3 == k) cout << 3;
	if(a4 == k) cout << 4;

	return 0;
}
