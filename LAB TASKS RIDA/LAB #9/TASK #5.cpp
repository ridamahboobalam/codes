#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	bool prime = 0;
	cout << "Enter a Number :  ";
	cin >> number;
	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			prime = 1;
			break;
		}
	}
	if (prime == 0)
	{
		cout << number << " is a prime number. " << endl;
	}
	else
	{
		cout << number << " is not a prime number. " << endl;
	}
	system("PAUSE");
	return 0;
}