#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ld long double
#define ll long long

int main(){
	ld a = 4.71;
	ld y = (sin(2*a) + sin(5*a) - sin(3*a)) / (cos(a) + 1 - 2 * (sin(2*a)*sin(2*a)));
	cout << y;
	return 0;
}
