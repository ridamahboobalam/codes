#include <iostream>
using namespace std;

int main()
{
	int arry[6] = { 55, 21, 3, 47, 89, 63 }, number = 0, i;
	cout << " Original Array " << endl;
	for (i = 0; i < 6; i++)
	{
		cout << arry[i] << "  ";
	}
	cout << endl;
	cout << "Number to delete :  ";
	cin >> number;

	bool found = false;
	for (i = 0; i < 6; i++)
	{
		if (arry[i] == number)
			found = true;
		if (found)
			arry[i] = arry[i + 1];
	}
	if (found)
		arry[5] = 0;
	for (i = 0; i < 6; i++)
	{
		cout << arry[i] << " ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}