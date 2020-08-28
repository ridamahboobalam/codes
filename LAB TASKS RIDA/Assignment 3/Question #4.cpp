#include <iostream>
using namespace std;

int main()
{
	int range1 = 0, range2 = 0, N = 0, sum = 0;

	cout << "Enter range 1: " << endl;
	cin >> range1;

	cout << "Enter range 2: " << endl;
	cin >> range2;

	cout << "Enter N: " << endl;
	cin >> N;

	cout << "The multiple of " << N << " between " << range1 << " and " << range2 << " are ";

	for (int i = range1; i <= range2; i++)
	{
		if (i % N == 0)
		{
			if (sum != 0)
				cout << " , ";
			cout << i;
			sum = sum + i;
		}
	}
	cout << "." << endl;
	cout << "The sum of the range is " << sum << endl;

	system("PAUSE");
	return 0;
}