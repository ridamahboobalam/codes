#include <iostream>
using namespace std;
int main()
{
	int number = 0, x = 0;
	cout << "Enter Number:  ";
	cin >> number;
	x = number % 7;
	if (x == 1)
	{
		cout << "The corresponding day for " << number << " is monday." << endl;
	}
	else if (x == 2)
	{
		cout << "The corresponding day for " << number << " is tuesday." << endl;
	}
	else if (x == 3)
	{
		cout << "The corresponding day for " << number << " is wednesday." << endl;
	}
	else if (x == 4)
	{
		cout << "The corresponding day for " << number << " is thursday." << endl;
	}
	else if (x == 5)
	{
		cout << "The corresponding day for " << number << " is friday." << endl;
	}
	else if (x == 6)
	{
		cout << "The corresponding day for " << number << " is saturday." << endl;
	}
	else if (x == 0)
	{
		cout << "The corresponding day for " << number << " is sunday." << endl;
	}
	system("PAUSE");
	return 0;
}