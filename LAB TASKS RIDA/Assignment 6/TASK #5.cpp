#include <iostream>
using namespace std;

int main()
{
	char c_string[100] = { 0 }, sub_string[100] = { 0 };
	int i = 0, j = 0;
	cout << "Enter a c_string : ";
	cin >> c_string;
	cout << "Enter sub_string : ";
	cin >> sub_string;
	bool bFound = false;
	while (c_string[i] != 0)
	{

		while (sub_string[j] != 0)
		{
			if (c_string[i + j] == sub_string[j])
				j++;
			else
				break;
		}
		if (sub_string[j] == 0)
		{
			bFound = true;
			break;
		}
		i++;
		j = 0;
	}
	if (bFound)
		cout << "The sub_string is found in the string you entered ." << endl;
	else
		cout << "The sub_string is not found in the string you entered ." << endl;
	system("PAUSE");
}