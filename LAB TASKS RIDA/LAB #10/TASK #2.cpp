#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size], min;
	cout << "Enter an integer : ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "Minimum Value : " << min << endl;
	system("PAUSE");
	return 0;
}