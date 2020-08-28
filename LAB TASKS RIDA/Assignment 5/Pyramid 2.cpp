#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = 20; k > i * 2 - 1; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}