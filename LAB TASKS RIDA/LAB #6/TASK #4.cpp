#include <iostream>
using namespace std;

int main()
{
	int table = 0, a = 0, z = 0;

	cout << "Enter table of: ";
	cin >> table;

	cout << "Start from: ";
	cin >> a;

	cout << "Ends at: ";
	cin >> z;

	for (int i = a; i <= z; i++)
	{
		cout << table << " * " << i << " = " << table * i << endl;
	}

	system("PAUSE");
	return 0;
}