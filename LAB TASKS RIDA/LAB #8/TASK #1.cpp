#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Enter the value of n:  ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << 2 * i << ", " << -2 * i - 1 << ", ";
	}
	system("PAUSE");
	return 0;
}
