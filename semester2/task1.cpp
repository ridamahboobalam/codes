#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream write;
	const int size = 10;
	char x_1[size] = { 0 }, x_2[size] = { 0 };
    int count = 0;
	bool found = 0;
	cout << "Enter username and password: ";
	cin >> x_1;
	cin >> x_2;
	for (int i = 0; i < size; i++)
	{
		if (x_2[i] != 0)
			count++;
	}
	if (count < 6)
	{
		cout << "Invalid Password" << endl;
		system("PAUSE");
		exit(0);
	}
	for (int i = 0; i < count; i++)
	{
		if (x_2[i] >= 48 && x_2[i] <= 57)
			found = 1;
	}
	if (found == 0)
	{
		cout << "Invalid Password" << endl;
		system("PAUSE");
		exit(0);
	}
	write.open("userData.txt", ios::out);
	write << x_1 << endl;
	write << x_2 << endl;
	write.close();
	system("PAUSE");
	return 0;
}