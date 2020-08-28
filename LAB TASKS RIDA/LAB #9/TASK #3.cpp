#include <iostream>
using namespace std;

int main()
{
	int number = 0, factorial = 0, x = 1, sum = 0;
	while (x <= 5)
	{ 
		factorial = 1;
		cout << "Enter a Number_" << x << " :  ";
		cin >> number;
		for (int i = 1; i <= number;i++)
		{ 
			factorial = i * factorial;
		}
		sum = sum + factorial;
		x++;
	}
	cout << " Sum : " << sum << endl;
	system("PAUSE");
	return 0;
}