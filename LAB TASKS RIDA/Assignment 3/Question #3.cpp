#include <iostream>
using namespace std;

int main()
{
	int num = 0, even = 0, odd = 0;
	do
	{
		cout << "Enter a number (enter 0 to exit) : " << endl;
		cin >> num;
		if (num != 0)
		{
			even += num % 2 == 0;
			odd += num % 2 != 0;
		}
	} while (num);
	cout << "You have entered " << even << " even and " << odd << " odd. " << endl;
	system("PAUSE");
	return 0;
}
