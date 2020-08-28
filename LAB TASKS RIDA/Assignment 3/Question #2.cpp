#include <iostream>
using namespace std;

int main()
{
	int i = 0, num = 0, largest = 0, smallest = 0;
	while (num != -1)
	{
		cout << "Enter a number (enter -1 to exit): ";
		cin >> num;
		if (num == -1)
			break;

		if (num > largest)
			largest = num;

		if (num < smallest || smallest == 0)
			smallest = num;
		i++;
	}
	cout << "You have entered " << i << " numbers." << endl;

	cout << "The largest number is " << largest << endl;

	cout << "The smallest number is " << smallest << endl;

	system("PAUSE");
	return 0;
}