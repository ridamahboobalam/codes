#include <iostream>
using namespace std;
int main()
{
	int number_1 = 0, number_2 = 0;

	cout << "Enter Number 1:  ";
	cin >> number_1;
	cout << "Enter Number 2:  ";
	cin >> number_2;

	cout << "Before swap the values are:" << endl;
	cout << "Number 1: " << number_1 << endl;
	cout << "Number 2: " << number_2 << endl;

	number_1 = number_1*number_2;
	number_2 = number_1 / number_2;
	number_1 = number_1 / number_2;

	cout << "After swap the values are:" << endl;
	cout << "Number 1: " << number_1 << endl;
	cout << "Number 2: " << number_2 << endl;

	system("PAUSE");
	return 0;
}