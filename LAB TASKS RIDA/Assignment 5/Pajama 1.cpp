#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 23; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			cout << "*";
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << " ";
		}
		for (int l = 0; l < 20 - i; l++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system ("PAUSE");
	return 0;
}