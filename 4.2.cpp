#include<bits/stdc++.h>
using namespace std;

string converter(double num, int k_prec)
{
	string binary = "";
	int Integral = num;
	double fractional = num - Integral;
	while (Integral)
	{
		int rem = Integral % 2;
		binary.push_back(rem +'0');

		Integral /= 2;
	}
	reverse(binary.begin(),binary.end());
	binary.push_back('.');


	while (k_prec--)
	{
		fractional *= 2;
		int fract_bit = fractional;

		if (fract_bit == 1)
		{
			fractional -= fract_bit;
			binary.push_back(1 + '0');
		}
		else
			binary.push_back(0 + '0');
	}

	return binary;
}

int main()
{

	double n = 6.4;
	int q = 2;
	int k = 4;
	string s = converter(n, k);
	printf("%.1f soni %d sanoq sistemasida, verguldan keyingi %d xona aniqlikda: ", n, q, k); cout << s;
	return 0;
}

