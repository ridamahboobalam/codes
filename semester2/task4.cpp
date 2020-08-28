#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
#pragma warning (disable : 4996)
int main()
{
	ifstream myfile;
	const int size = 50, total_words = 100;
	char x[size] = { 0 }, y[total_words][size] = { 0 };
	int count = 0;

	myfile.open("c:\\temp\\sampleData.txt", ios::in);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> x;
			bool found = false;
			for (int i = 0; i < count; i++)
			{
				if (strcmp(x, y[i]) == 0)
				{
					found = true;
					break;
				}

			}
			if (found == false)
				strcpy(y[count++], x);
		}
	}
	myfile.close();
	cout << "Unique words: " << endl;
	for (int i = 0; i < count; i++)
		cout << y[i] << endl;
		system("PAUSE");
	return 0;
}