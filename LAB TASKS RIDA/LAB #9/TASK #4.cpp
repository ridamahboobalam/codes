#include <iostream>
using namespace std;

int main()
{
	int number = 0, x = 1, factorial = 1, sum = 0;
	while (x <= 8)
	{
		factorial = 1;
		cout << "Enter a Number_" << x << " :  ";
		cin >> number;
		for (int i = 1; i <= number; i++)
		{
			factorial *= i;
		}
		sum += factorial;
		if (sum > 1000)
			break;
		x++;
	}
	cout << sum << endl;
	system("PAUSE");
	return 0;
}