#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0;
	char c1 = 0;
	cout << "enter n1" << endl;
	cin >> n1;
	cout << "enter n2" << endl;
	cin >> n2;
	cout << "enter c1" << endl;
	cin >> c1;
	if (c1 == '+')
	{ 
		cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	}
	else if (c1 == '-')
	{
		cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	}
	else if (c1 == '*')
	{
		cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	}
	else if (c1 == '/')
	{
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	}
	else if (c1 == '%')
	{
		cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
	}
	else
	{
		cout << "Wrong Input" << endl;
	}
	system("PAUSE");
	return 0;
}