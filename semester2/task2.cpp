#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream myfile;
	const int size = 10;
	char x_1[size] = { 0 }, x_2[size] = { 0 };
	char f_1[size] = { 0 }, f_2[size] = { 0 };
    int count = 0;
	bool found = 0;
	cout << "Enter username: ";
	cin >> x_1;
	cout << "Enter password: ";
	cin >> x_2;
	myfile.open("c:\\temp\\userData.txt", ios::in);
	if (myfile.is_open())
	{
		myfile >> f_1;
		myfile >> f_2;
		myfile.close();
	}
	if (strcmp(x_1, f_1) == 0 && strcmp(x_2, f_2) == 0)
		cout << "Login Successful"<<endl;
	else
		cout << "Inavlid user name or password" << endl;
	system("PAUSE");
	return 0;
}