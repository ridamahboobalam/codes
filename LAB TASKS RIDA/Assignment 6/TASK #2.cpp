#include <iostream>
using namespace std;

int main()
{
	char name_1[100] = { 0 }, name_2[100] = { 0 }, concatenated_string[200] = { 0 };
	int i;
	cout << "Enter first c-string : ";
	cin >> name_1;
	cout << "Enter second c-string : ";
	cin >> name_2;
	for (i = 0; i < 100; i++)
	{
		if (name_1[i] == 0)
			break;
		concatenated_string[i] = name_1[i];
	}
	for (int j = 0; j < 100; j++)
	{
		if (name_2[j] == 0)
			break;
		concatenated_string[i++] = name_2[j];
	}
	cout << " Concatenated String : "<<concatenated_string << endl;
	system("PAUSE");
	return 0;
}