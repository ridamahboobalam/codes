#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream myfile;
	const int size = 50;
	char x[size] = { 0 };
	char f[size] = { 0 };
	int nfound = 0;

	cout << "Enter word: ";
	cin >> x;

	myfile.open("c:\\temp\\sampleData.txt", ios::in);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> f;
			if (strcmp(f, x) == 0)
			{
				nfound++;
			}
		}
		myfile.close();
	}
	if (nfound)
		cout << "This word is appeared " << nfound << " times in text file." << endl;
	else
		cout << "Not found in file" << endl;
	system("PAUSE");
	return 0;
}