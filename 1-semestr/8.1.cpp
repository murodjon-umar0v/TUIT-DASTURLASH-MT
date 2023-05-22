#include <bits/stdc++.h>

using namespace std;

class Mashina{
	public:
		string name;
		string comp;
		int year;
};

class Motosikl{
	public:
		string name;
		string type;
		int cost;
};

int main(){
	Mashina obj1;
	obj1.name = "Nexia3\t"; obj1.comp = "Chevrolet\t"; obj1.year = 2017;
	cout << obj1.name << obj1.comp << obj1.year;
					cout << "\n\n";
	Motosikl mot;
	mot.name = "Squirrel (Scott)"; mot.type = "touring"; mot.cost = 7500;
	cout << mot.name << "\t" << mot.type << "\t" << mot.cost << "$";
}

