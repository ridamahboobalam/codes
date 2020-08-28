#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
#pragma warning (disable : 4996)
int main()
{
	ifstream myfile;
	ofstream myfile1;
	const int size = 50, total_words = 100;
	char x[size] = { 0 }, y[total_words][size] = { 0 };
	int count = 0, frequency[total_words] = { 1 };

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
					frequency[i]++;
				}

			}
			if (found == false)
			{
				frequency[count] = 1;
				strcpy(y[count++], x);
			}
		}
	}
	myfile.close();
	myfile1.open("c:\\temp\\frequencyData.txt", ios::out);

	for (int i = 0; i < count; i++)
		myfile1 << y[i] << ": " << frequency[i] << endl;
	myfile1.close();
	system("PAUSE");
	return 0;
}