#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ld long double
#define ll long long
#define ex 2.71828
#define pi 3.14159265359

int main(){
	ld x = 5.243, y = 0.235, z = 0.0000345, c;
	c = pow(2, pow(y, x)) + pow(pow(3, x), y) - (y * atan(double(z - (pi / 6))))
	/(fabs(x) + (1 / (y*y+1)));
	
	cout << c;
	return 0;
}
