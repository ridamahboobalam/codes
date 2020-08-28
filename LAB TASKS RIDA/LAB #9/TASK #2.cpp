#include <iostream>
using namespace std;

int main()
{
	int number = 0, factorial = 0, x = 1;
	while (x <= 3)
	{ 
		factorial = 1;
		cout << "Enter a Number_" << x << " :  ";
		cin >> number;
		for (int i = 1; i <= number;i++)
		{ 
			factorial = i * factorial;
		}
		cout << number << "! = " << factorial << endl;
		x++;
	}
	system("PAUSE");
	return 0;
}