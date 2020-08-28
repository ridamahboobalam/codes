#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < 19 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}