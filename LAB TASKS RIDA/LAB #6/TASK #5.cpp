#include <iostream>
using namespace std;

int main()
{
	int num = 0; bool prime = 1;

	cout << "Enter a number : " ;
	cin >> num;

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			prime = false;
		}
	}
	if (prime == true)
	{
		cout << num << " is a prime. " << endl;
	}
	else
	{
		cout << num << " is not a prime. " << endl;
	}
	system("PAUSE");
	return 0;
}