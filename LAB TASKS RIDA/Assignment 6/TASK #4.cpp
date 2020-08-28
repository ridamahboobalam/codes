#include <iostream>
using namespace std;

int main()
{
	int len = 0, i;
	char c_string[100] = { 0 };
	cout << "Enter a c_string : ";
	cin >> c_string;
	while (c_string[len] != 0)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		if (c_string[i] != c_string[len - i - 1])
			break;
	}
	if (i < len / 2)
		cout << "The entered c_string is not palindrome  " << endl;
	else
		cout << "The entered c_string is a palindrome  " << endl;
	system("PAUSE");
	return 0;
}
