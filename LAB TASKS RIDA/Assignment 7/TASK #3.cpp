#include <iostream>
using namespace std;

int main()
{
	int arry[6] = { 55, 21, 3, 47, 89, 63 }, i, number, index;
	cout << "Original Array : " << endl;
	for (i = 0; i < 6; i++)
	{
		cout << arry[i] << "  ";
	}
	cout << endl;
	cout << " No to add : ";
	cin >> number;
	cout << "Index :  ";
	cin >> index;
	if (index < 6)
	{
		arry[index] = 0;
		cout << "Array after making room " << endl;
		for (i = 0; i < 6; i++)
		{
			cout << arry[i] << "  ";
		}
		cout << endl;
		arry[index] = number;
		cout << "Array after inserting new number at index " << index << endl;
		for (i = 0; i < 6; i++)
		{
			cout << arry[i] << "  ";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
