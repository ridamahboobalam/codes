#include <iostream>
using namespace std;

int main()
{
	int num = 0, n = 0;
	cout << "How many numbers you want to check? " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cout << "Enter number " << i << endl;
		cin >> n;
		if (n % 2 == 0)
		{
			cout << "Number " << n << " is even. " << endl;
		}
		else
		{
			cout << "Number " << n << " is odd. " << endl;
		}
	}
	
	system("PAUSE");
	return 0;
}