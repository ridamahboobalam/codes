#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void processFile();
void Output(string c);
int main()
{
	string name;
	int search = 0;
	processFile();
	system("PAUSE");
	return 0;
}


void processFile()
{
	string x;
	ifstream file;
	file.open("data.txt");
	while (!file.eof())
	{
		file >> x;
		Output(x);
		
	}
	file.close();
}
 
void Output(string c)
{
	char firstchar = c[0];
	if (firstchar < '0' || firstchar > '9')
		return;
	
	for (int i = 1; i < c.length(); i++)
	{
		if (firstchar != c[i])
			return;
	}
	ofstream file;
	file.open("output.txt", ios::app);
	file << c << " ";
	file.close();
}
