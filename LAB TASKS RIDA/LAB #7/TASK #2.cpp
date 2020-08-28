#include <iostream>
using namespace std;

int main()
{
	char choice = 0;
	int start, end, t1 = 0, t2 = 1, nextterm = 0, limit = 0, i = 0;
	cout << "A: Print Fibonacci sequence starting from first term and ending at user given term." << endl;
	cout << "B: Print Fibonacci sequence starting from and ending at user given terms." << endl;
	cout << "C: Print all Fibonacci numbers from 0 up to a user given limit." << endl;
	cout << "Please enter your choice: ";
	cin >> choice;
	if (choice == 'A')
	{
		cout << "Enter ending term:  ";
		cin >> end;
		cout << "Fabonacci sequence:  ";
		for (int i = 0; i < end; i++)
		{
			if (i <= 1)
			{
				nextterm = i;
			}
			else
			{
				nextterm = t1 + t2;
				t1 = t2;
				t2 = nextterm;
			}
			cout << nextterm << ", ";
		}
		cout << endl;
	}
	else if (choice == 'B')
	{
		cout << "Enter starting term: ";
		cin >> start;
		cout << "Enter ending term: ";
		cin >> end;
		cout << "Fabonacci sequence: ";

		for (int i = 0; i < end; i++)
		{
			if (i <= 1)
			{
				nextterm = i;
			}
			else
			{
				nextterm = t1 + t2;
				t1 = t2;
				t2 = nextterm;
			}
			if (i >= start - 1)
				cout << nextterm << ", ";
		}
		cout << endl;
	}
	else if (choice == 'C')
	{
		cout << "Enter limit:  ";
		cin >> limit;
		nextterm = t1 + t2;
		cout << "Fibonacci sequence:  " << t1 << ", " << t2 << ", ";
		while (nextterm <= limit)
		{
			cout << nextterm << ", ";
			t1 = t2;
			t2 = nextterm;
			nextterm = t1 + t2;
		
		}
	}
	system("PAUSE");
	return 0;
}
