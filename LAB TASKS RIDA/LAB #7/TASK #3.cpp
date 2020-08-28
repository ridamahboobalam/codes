#include <iostream>
using namespace std;

int main()
{
	int num = 0, n, rem, sum = 0;
	cout << "Enter a number:  ";
	cin >> num;
	n = num;
	while (num > 0)
	{
		rem = num % 10;
		sum = sum + (rem*rem*rem);
		num = num / 10;
	}
	if (n == sum)
	{
		cout << n << " is an Armstrong number." << endl;
	}
	else
	{
		cout << n << " is not an Armstrong number." << endl;
	}
	system("PAUSE");
	return 0;
}