#include <iostream>
using namespace std;

int main()
{
	int start = 0, end = 0, jump = 0;
	cout << "Start: ";
	cin >> start;
	cout << "End: ";
	cin >> end;
	cout << "Jump: ";
	cin >> jump;
	for (int i = start; i <= end; i += jump)
	{
		cout << i << ", ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}