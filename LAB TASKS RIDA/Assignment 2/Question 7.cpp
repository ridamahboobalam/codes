#include <iostream>
using namespace std;

int main()
{
	int X1, Y1 = 0, X2, Y2 = 0, X3, Y3 = 0, X4, Y4 = 0, L1, L2, L3, L4;
	cout << "Enter point 1 :" << endl;
	cin >> X1 >> Y1;
	cout << "Enter point 2 :" << endl;
	cin >> X2 >> Y2;
	cout << "Enter point 3 :" << endl;
	cin >> X3 >> Y3;
	cout << "Enter point 4 :" << endl;
	cin >> X4 >> Y4;
	L1 = (X2 - X1) *(X2 - X1) + (Y2 - Y1) *(Y2 - Y1);
	L2 = (X3 - X2) *(X3 - X2) + (Y3 - Y2) *(Y3 - Y2);
	L3 = (X4 - X3) *(X4 - X3) + (Y4 - Y3) *(Y4 - Y3);
	L4 = (X1 - X4) *(X1 - X4) + (Y1 - Y4) *(Y1 - Y4);
	if ((L1 == L2) && (L2 == L3) && (L3 == L4))
	{
		cout << "Square" << endl;
	}
	else if ((L1 == L3) && (L2 == L4))
	{
		cout << "Rectangle" << endl;
	}
	else
	{
		cout << "Quadrilateral" << endl;
	}
		system("PAUSE");
}