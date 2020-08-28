#include <iostream>
using namespace std;

int main()
{
	int number = 0, factorial = 1;
	cout << "Enter a number :  ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial = i*factorial;
	}
	cout << number << "! = " << factorial << endl;
	system("PAUSE");
	return 0;
}