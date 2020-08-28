#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0, n = 0, i = 0;
	cout << "Enter Number 1:  ";
	cin >> n1;
	cout << "Enter Number 2:  ";
	cin >> n2;
	if (n1 > n2)
	{
		n = n2;
	}
	else
	{
		n = n1;
	}
	for ( i = n; i != 1; i--)
	{
		if (n1 % i == 0 && n2 % i == 0)
			break;
	}
	cout << "The GCD of " << n1 << " and " << n2 << " is " << i << endl;
	system("PAUSE");
	return 0;
}