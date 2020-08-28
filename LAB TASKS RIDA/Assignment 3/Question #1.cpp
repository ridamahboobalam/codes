#include <iostream>
using namespace std;

int main()
{
	int num = 0, factorial = 1;

	cout << "Enter a Number :";
	cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		factorial = factorial * i;
	}
	if (num == 0)
		cout << "Factorial of " << num << " = " << 1 << endl;
	else
		cout << "Factorial of " << num << " = " << factorial << endl;
	system("PAUSE");
	return 0;
}
