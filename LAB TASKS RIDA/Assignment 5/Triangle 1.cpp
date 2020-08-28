#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}