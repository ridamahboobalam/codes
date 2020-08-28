#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int k = 0; k < 39 - 2 * i; k++)
		{
			cout << " ";
		}
		for (int l = 0; l <= i; l++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}