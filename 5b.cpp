#include <iostream>
using namespace std;

void my_f(int a){
	int s=1;
	while(a>0){
		s*=a%10;
		a/=10;
	}
	cout << s << "\n";
}

int main(){
	int a=87123, b=426851, c=82168531;
	my_f(a); my_f(b); my_f(c);
}
