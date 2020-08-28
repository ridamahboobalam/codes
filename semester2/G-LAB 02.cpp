#include <iostream>
#include <fstream>
#include<string>
using namespace std;

const char* FindSpcChr(string& line, const char* message)
{
	if ((line[0] >= 'a' && line[0] <= 'z') || (line[0] >= 'A' && line[0] <= 'Z') || (line[0] >= '0' && line[0] <= '9'))
		return message;
	else
		return line.c_str();
}
int main()
{
	ifstream myfile;
	string str, replStr;
	myfile.open("c:\\temp\\sampleData.txt", ios::in);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			std::getline(myfile, str);
			const char* ret = FindSpcChr(str, "line not dound");
			cout << ret << endl;
		}
	}
	myfile.close();
	system("PAUSE");
	return 0;
}