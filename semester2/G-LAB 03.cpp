#include <iostream>
#include <fstream>
using namespace std;

void SortChar(char array,int size)
{
	int a = 0;
	if (array <= 65 && array >= 96)
	{
		for (int i = 0; i < size; i++)
		{
			cout << array[i];
			a++;
		}
	}
	if (array <= 97 & array >= 122)
	{
		for (int i = a; i < size; i++)
		{  
			cout << array[i];
		}
	}
	return array;
}

int main()
{
	
	ifstream fin;
	fin.open("input.txt");

	char x[100];
	int i = 0;
	fin.getline(x, 100, '\n');
	{
		for (i = 0; i < 100; i++)
		{
			cout << x << " ";
		}

	}
	fin.close();
	int z = SortChar(char x, int size);
	
	system("PAUSE");
	return 0;
}