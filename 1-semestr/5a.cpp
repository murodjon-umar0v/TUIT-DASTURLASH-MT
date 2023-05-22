#include <iostream>
using namespace std;

void my_swap(int a, int b){
	a=a+b; b=a-b; a=a-b;
	cout << a << " " << b << "\n";
}

int main(){
	int a=1, b=4, a1=78, b1=23;
	my_swap(a, b); my_swap(a1, b1);
	return 0;
}
