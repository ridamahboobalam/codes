#include <iostream>
using namespace std;

int main()
{
	int choice = 0, start = 0, end = 0, nextterm = 0, t1 = 0, t2 = 1, sum = 0;
	cout << "Which option do you choose?" << endl;
	cout << "1 - Print even sequence." << endl;
	cout << "2 - Print odd sequence." << endl;
	cout << "3 - Print Fibonacci." << endl;
	cout << "4 - Print sum of squares." << endl;
	cout << "5 - Print sum of cubes." << endl;
	cout << "6 - Press any other digit to exit." << endl;
	cout << "Enter your choice(1 to 5) :  ";
	cin >> choice;

	if (choice == 1)
	{
		cout << " Enter start :  ";
		cin >> start;
		cout << " Enter End :  ";
		cin >> end;
		for (int i = start; i <= end; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << " , ";
			}
		}
		cout << endl;
	}

	if (choice == 2)
	{
		cout << " Enter start :  ";
		cin >> start;
		cout << " Enter End :  ";
		cin >> end;
		for (int i = start; i <= end; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << " , ";
			}
		}
		cout << endl;
	}

	if (choice == 3)
	{
		cout << "Fabonacci series : 0, 1";
		while ((t1 + t2) < 100)
		{
			nextterm = t1 + t2;
			cout << ", " << nextterm;
			t1 = t2;
			t2 = nextterm;
		}
		cout << " . " << endl;
	}

	if (choice == 4)
	{
		cout << "Enter Start :  ";
		cin >> start;
		cout << " Enter End :  ";
		cin >> end;
		for (int i = start; i <= end; i++)
		{
			sum += i * i;
		}
		cout << sum << endl;
	}

	if (choice == 5)
	{
		cout << "Enter Start :  ";
		cin >> start;
		cout << " Enter End :  ";
		cin >> end;
		for (int i = start; i <= end; i++)
		{
			sum += i * i * i;
		}
		cout << sum << endl;
	}

	if (choice < 0 && choice > 5)
	{
		exit(0);
	}

	system("PAUSE");
	return 0;
}