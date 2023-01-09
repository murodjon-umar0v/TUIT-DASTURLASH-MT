#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ld long double
#define ll long long
#define ex 2.71828
#define pi 3.14159265359

int main(){
	float n;
	scanf("%f", &n);
	float sum = 70000;
	printf("To'lashi kerak: %.1f so'm", sum - (sum / 22 * n));
	return 0;
}
