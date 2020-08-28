#include <iostream>
using namespace std;

int main()
{
	char c1, c2;
	cout << "Enter a Character" << endl;
	cin >> c1;
	if (c1 >= 'A' && c1 <= 'Z')
	{
		cout << c1 << " is a Capital letter." << endl;
		c2 = c1 + 32;
		cout << "Capital " << c1 << " changed to Small " << c2 << endl;
	}

	else if (c1 >= 'a' && c1 <= 'z')
	{
		cout << c1 << " is a Small letter." << endl;
		c2 = c1 - 32;
		cout << "Small " << c1 << " changed to Capital " << c2 << endl;
	}

	else
	{
		cout << c1 << " is not a letter." << endl;
		cout << "Nothing changed" << endl;
	}
	system("PAUSE");
	return 0;
}