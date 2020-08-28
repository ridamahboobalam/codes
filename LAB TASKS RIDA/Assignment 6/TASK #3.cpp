#include <iostream>
using namespace std;

int main()
{
	char c_string[100] = {0};
	int nChoice, nV = 0, nC = 0, i = 0, nS = 0;
	cout << "Enter c_string: ";
	cin >> c_string;
	cout << "1. Count the number of vowels and consonants " << endl;
	cout << "2 - Count how many small and capital letters are entered " << endl;
	cout << "3 - Count how many special characters are entered " << endl;
	cout << "4 - Quit the program " << endl;
	cin >> nChoice;
	switch (nChoice)
	{
	case 1:
		while (c_string[i] != 0)
		{
			if (c_string[i] == 'A' || c_string[i] == 'a' || c_string[i] == 'E' ||
				c_string[i] == 'e' || c_string[i] == 'I' || c_string[i] == 'i' ||
				c_string[i] == 'O' || c_string[i] == 'o' || c_string[i] == 'U' ||
				c_string[i] == 'u')
				nV++;
			else
				nC++;
			i++;
		}
		cout << nV << " vowels and " << nC << " consonants are found "<<endl;
		break;
	case 2:
		while (c_string[i] != 0)
		{
			if (c_string[i] >= 'A' && c_string[i] <= 'Z')
				nC++;
			else if (c_string[i] >= 'a' && c_string[i] <= 'z')
				nS++;
			i++;
		}
		cout << nC << " capital and " << nS << " small are found " << endl;
		break;
	case 3: 
		while (c_string[i] != 0)
		{
			if (!(c_string[i] >= 'A' && c_string[i] <= 'Z')
				&& !(c_string[i] >= 'a' && c_string[i] <= 'z'))
				nS++;
			i++;
		}
		cout << nS << " are special characters" << endl;

		break;
	case 4:
		exit(0);
		break;
	}
	system("PAUSE");
	return  0;
}