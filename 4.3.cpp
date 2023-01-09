#include <iostream>
using namespace std;

int main(){
	int s=0;
	for(int i=20; i<=40; i++){
		if(i%3==0){
			s += (i*i);
		}
	}
	
	cout << s;
}
