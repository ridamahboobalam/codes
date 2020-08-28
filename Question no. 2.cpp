#include <iostream>
using namespace std;

int main()
{
	int number1 = 0, number2 = 0, number3 = 0;
	cout << "Enter the first number " << endl;
	cin >> number1;
	cout << "Enter the second number " << endl;
	cin >> number2;
	cout << "Enter the third number " << endl;
	cin >> number3;
	if ((number1 > number2 && number1 < number3) || (number1 < number2 && number1 > number3))
	{
		cout << "2nd minimum of three number is " << number1 << endl;
	}
	else if ((number2 > number1 && number2 < number3) || (number2 < number1 && number2 > number3))
	{
		cout << "2nd minimum of three number is " << number2 << endl;
	}
	else
	{
		cout << "2nd minimum of three number is " << number3 << endl;
	}
	system("PAUSE");
	return 0;
}