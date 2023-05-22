#include <bits/stdc++.h>

using namespace std;

class burchak4{
	public:
		int a, b;
		void printsp(){
			cout << "s="<<a*b << "        p=" << 2*(a+b) << "\n";
		}
};

int main(){
	srand(time(0));
	int t=5;
	
	burchak4 info;
	
	while(t--){
		info.a = rand() % 100;
		info.b = rand() % 100;
		
		cout << "a=" << info.a << " " << "b=" << info.b << "\n";
		info.printsp();
		
		cout << "\n\n";
	}

	return 0;
}

