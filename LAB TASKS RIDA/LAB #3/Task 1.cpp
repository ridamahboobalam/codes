#include <iostream>
using namespace std;

int main()
{
	char c1;
	cout << "Enter a Number " << endl;
	cin >> c1;
	if (c1 >= 65 && c1 <= 90)
	{
		cout << "CAPITAL" << endl;
	}
	else if (c1 >= 'a' && c1 <='z')
	{
		cout << "SMALL" << endl;
	}
	else
	{
		cout << "WRONG INPUT" << endl;
	}
	system("PAUSE");
    return 0;
}