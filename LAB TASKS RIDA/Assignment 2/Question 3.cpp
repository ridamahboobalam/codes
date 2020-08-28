#include <iostream>
using namespace std;

int main()
{
	char c1 = 0;
	cout << "Enter a character" << endl;
	cin >> c1;
	if (c1 == 'a' || c1 == 'A' ||
		c1 == 'E' || c1 == 'e' ||
		c1 == 'I' || c1 == 'i' ||
		c1 == 'O' || c1 == 'o' ||
		c1 == 'U' || c1 == 'u')
	{
		cout << "Character is a VOWEL" << endl;
	}
	else if ((c1 > 'A' && c1 <= 'Z') || (c1 > 'a' && c1 <= 'z'))
	{
		cout << "Character is a CONSONANT" << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	system("PAUSE");
	return 0;
}