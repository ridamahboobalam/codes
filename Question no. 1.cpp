#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4, n5, n6, x;
	cout << "Enter six-digit number :" << endl;
	cin >> x;
	n1 = x / 100000;
	if (n1 == 0)
		cout << "Zero";
	else if (n1 == 1)
		cout << "One";
	else if (n1 == 2)
		cout << "Two";
	else if (n1 == 3)
		cout << "Three";
	else if (n1 == 4)
		cout << "Four";
	else if (n1 == 5)
		cout << "Five";
	else if (n1 == 6)
		cout << "Six";
	else if (n1 == 7)
		cout << "Seven";
	else if (n1 == 8)
		cout << "Eight";
	else if (n1 == 9)
		cout << "Nine";
	cout << endl;
	n2 = (x / 10000) % 10;
	if (n2 == 0)
		cout << "Zero";
	else if (n2 == 1)
		cout << "One";
	else if (n2 == 2)
		cout << "Two";
	else if (n2 == 3)
		cout << "Three";
	else if (n2 == 4)
		cout << "Four";
	else if (n2 == 5)
		cout << "Five";
	else if (n2 == 6)
		cout << "Six";
	else if (n2 == 7)
		cout << "Seven";
	else if (n2 == 8)
		cout << "Eight";
	else if (n2 == 9)
		cout << "Nine";
	cout << endl;
	n3 = (x / 1000) % 10;
	if (n3 == 0)
		cout << "Zero";
	else if (n3 == 1)
		cout << "One";
	else if (n3 == 2)
		cout << "Two";
	else if (n3 == 3)
		cout << "Three";
	else if (n3 == 4)
		cout << "Four";
	else if (n3 == 5)
		cout << "Five";
	else if (n3 == 6)
		cout << "Six";
	else if (n3 == 7)
		cout << "Seven";
	else if (n3 == 8)
		cout << "Eight";
	else if (n3 == 9)
		cout << "Nine";
	cout << endl;
	n4 = (x / 100) % 10;
	if (n4 == 0)
		cout << "Zero";
	else if (n4 == 1)
		cout << "One";
	else if (n4 == 2)
		cout << "Two";
	else if (n4 == 3)
		cout << "Three";
	else if (n4 == 4)
		cout << "Four";
	else if (n4 == 5)
		cout << "Five";
	else if (n4 == 6)
		cout << "Six";
	else if (n4 == 7)
		cout << "Seven";
	else if (n4 == 8)
		cout << "Eight";
	else if (n4 == 9)
		cout << "Nine";
	cout << endl;
	n5 = (x / 10) % 10;
	if (n5 == 0)
		cout << "Zero";
	else if (n5 == 1)
		cout << "One";
	else if (n5 == 2)
		cout << "Two";
	else if (n5 == 3)
		cout << "Three";
	else if (n5 == 4)
		cout << "Four";
	else if (n5 == 5)
		cout << "Five";
	else if (n5 == 6)
		cout << "Six";
	else if (n5 == 7)
		cout << "Seven";
	else if (n5 == 8)
		cout << "Eight";
	else if (n5 == 9)
		cout << "Nine";
	cout << endl;
	n6 = x % 10;
	if (n6 == 0)
		cout << "Zero";
	else if (n6 == 1)
		cout << "One";
	else if (n6 == 2)
		cout << "Two";
	else if (n6 == 3)
		cout << "Three";
	else if (n6 == 4)
		cout << "Four";
	else if (n6 == 5)
		cout << "Five";
	else if (n6 == 6)
		cout << "Six";
	else if (n6 == 7)
		cout << "Seven";
	else if (n6 == 8)
		cout << "Eight";
	else if (n6 == 9)
		cout << "Nine";
	cout << endl;
	cout << n1 << " + " << n2 << " + " << n3 <<" + " << n4 <<" + " << n5 <<" + " << n6 << " = " << n1 + n2 + n3 + n4 + n5 +n6 << endl;
	system("PAUSE");
	return 0;
}