#include <iostream>
using namespace std;
int main()
{
	const int size = 20;
	int array[size] = { 0 }, largest, second_largest;
	cout << "Enter your numbers (-99 to terminate): ";
	while (array[size] != -99)
	{
		cin >> array[size];
	}
	if (array[0] > array[1])
	{
		largest = array[0];
		second_largest = array[1];
	}
	else
	{
		largest = array[1];
		second_largest = array[0];
	}
	for (int i = 2; i < 20; i++)
	{
		if (array[i] > largest)
		{
			second_largest = largest;
			largest = array[i];
		}
		else if (array[i] > second_largest)
		{
			second_largest = array[i];
		}
	}
	cout << "2nd largest number is : " << second_largest << endl;

	system("PAUSE");
	return 0;
}