#include <iostream>
using namespace std;

int main()
{
	const int size = 7;
	int t = 0;
	int arry[size] = { 1, 2, 3, 4, 5, 6, 7 }, nchoice, i;
	cout << "1 - Shift left " << endl;
	cout << "2 - Shift right " << endl;
	cout << "3 - Rotate left " << endl;
	cout << "4 - Rotate right " << endl;
	cin >> nchoice;
	switch (nchoice)
	{
	case 1:
		for (i = 0; i < size - 1; i++)
		{
			arry[i] = arry[i + 1];
		}
		arry[6] = 0;
		break;
	case 2:
		for (i = size-1; i > 0; i--)
		{
			arry[i] = arry[i - 1];
		}
		arry[0] = 0;
		break;
	case 3:

		t = arry[0];
		for (i = 0; i < size - 1; i++)
		{
			arry[i] = arry[i + 1];
		}
		arry[6] = t;
		break;
	case 4:
		t = arry[6];
		for (i = size - 1; i > 0; i--)
		{
			arry[i] = arry[i - 1];
		}
		arry[0] = t;
		break;
	}
	for (i = 0; i < size; i++)
	{
		cout << arry[i];
	}
	cout << endl;
	system("PAUSE");
	return 0;
}