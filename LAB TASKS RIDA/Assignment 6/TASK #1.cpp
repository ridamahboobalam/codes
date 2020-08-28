#include <iostream>
using namespace std;

int main()
{
	char name[100] = { 0 };
	int length = 0, i;
	cout << " Enter your name :  ";
	cin >> name;
	for ( i = 0; i < 100; i++)
	{
		if (name[i] == 0)
			break;
	}
	cout << " Your name consists of " << i << " characters." << endl;
	system("PAUSE");
	return 0;
}