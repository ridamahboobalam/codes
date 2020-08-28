#include <iostream>
using namespace std;

int main()
{
	int num, d1, d2, d3, d4, d5, d6, sum;
	cout << "Enter a six-digit integer :" << endl;
	cin >> num;
	d1 = (num / 100000) % 10;
	d2 = (num / 10000) % 10;
	d3 = (num / 1000) % 10;
	d4 = (num / 100) % 10;
	d5 = (num / 10) % 10;
	d6 = num % 10;
	sum = d1 + d2 + d3 + d4 + d5 + d6;
	cout <<"Sum of digit " << num <<" = " << d1 + d2 + d3 + d4 + d5 + d6 << endl;
	system