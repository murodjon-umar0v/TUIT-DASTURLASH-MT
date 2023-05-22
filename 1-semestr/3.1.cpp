#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ex 2.71828
#define pi 3.14159265359

int main(){
	float k, m, y;
	scanf("%f %f", &k, &m);
	if(fabs(k) > fabs(m)){
		y = sin(5*k + 3*m);
	}else{
		y = cos(5*k + 3*m);
	}
	
	printf("%.3f", y);
	return 0;
}
