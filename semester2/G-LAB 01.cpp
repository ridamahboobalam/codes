#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ReadFileSize(char abc[])
{
	int count = 0;
	ifstream fin;
	string str;
	fin.open(abc, ios::in);
	ofstream out("c:\\temp\\output.txt", ios::out);
	out << "the number of word in file \""  ;
	while (getline(fin, str))
	{
		int words = 1;
		bool previsspace = false;
		for (int i = 0; str[i] != 0; i++)
		{
			if (str[i] == ' ' && i != 0)
			{
				if (previsspace == false)
					words++;
				previsspace = true;
			}
			else
				previsspace = false;
		}
		count += words;
		out << str;
	}
	out << " \" have" << count<< "words";
	fin.close();
	out.close();
	return count;
}
int main()
{
	int res = 0;
	char abc[] = { "c:\\temp\\userData.txt" };
	res = ReadFileSize(abc);
	system("PAUSE");
	return 0;
}