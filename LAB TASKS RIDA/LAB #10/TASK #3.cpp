#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size], max;
	cout << "Enter an integer : ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << "Maximum Value : " << max << endl;
	system("PAUSE");
	return 0;
}