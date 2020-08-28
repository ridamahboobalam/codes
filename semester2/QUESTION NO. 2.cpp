#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void GetUserInput(string& name);
void processFile(string filename);
void Output(string w);
int main()
{
	string name;
	GetUserInput(name);
	processFile(name);
	system("PAUSE");
	return 0;
}

void GetUserInput(string& name)
{
	cout << "Please Enter File Name: ";
	cin >> name;
}

void processFile(string filename)
{
	int wordcount = 0;

	string x, y;
	ifstream file;
	file.open(filename, ios::in);
	while (!file.eof())
	{
		file >> x;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == ' ' || x[i] == ',' || x[i] == ';' || x[i] == '.')
			{
				Output(y);
				wordcount++;
				y = "";
			}
			else
				y += x[i];
		}
		if (y.length())
		{
			Output(y);
			wordcount++;
		}
	}
	file.close();
	Output("Totalword count :");
	Output(itoa(wordcount));

}

void Output(string c)
{
	ofstream file;
	file.open("output.txt",ios::app);
	file << c;
	file.close();
}
