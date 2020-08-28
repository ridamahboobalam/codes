#include <iostream>
using namespace std;

int main()
{
	int num = 0, rem = 0, dig = 0, n = 0;
	cout << "Enter number :";
	cin >> num;
	n = num;
	while (num != 0)
	{
		rem = num % 10;
		num = num / 10;
		dig = (dig * 10) + rem;	
	}
	cout << "the reverse number is :" << dig << endl;
	if (n == dig)
		cout << " The entered number is a palindrome." << endl;
	else
		cout << " The entered number is not a palindrome." << endl;
	system("PAUSE");
	return 0;
}