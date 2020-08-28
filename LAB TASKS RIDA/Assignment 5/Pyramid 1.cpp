#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j > i; j--)
		{
			cout << " "; 
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}