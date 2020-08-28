#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void LoadSizesFromFile(int& row, int*& col);
char** Create2DJagged(int row, int* col);
void LoadDataFromFile(char**, int row, int* col);
void DisplayContent(char** a, int row, int* col);
void DisplayContentNotRepeat(char** a, int row, int* col);

int number_of_rows = 0;
int main()
{
	int row = 0, * col = NULL;
	LoadSizesFromFile(row, col);
	char** arr = Create2DJagged(row, col);
	LoadDataFromFile(arr, row, col);
	DisplayContent(arr, row, col);
	DisplayContentNotRepeat(arr, row, col);

	system("PAUSE");
	return 0;
}
void LoadSizesFromFile(int& row, int*& col)
{
	ifstream file;
	file.open("data.txt");
	if (file.is_open())
	{
		string sTemp;
		file >> row;
		std::getline(file, sTemp);
		if (row)
		{
			col = new int[row];
			int colsize = 0;
			int idx = 0;
			while (!file.eof() && row != idx)
			{
				string x;
				getline(file, x);

				col[idx] = (x.length() + 1) / 2;
				idx++;
				colsize = 0;

			}
		}
		file.close();
	}
}
void LoadDataFromFile(char** data, int row, int* col)
{
	ifstream file;
	file.open("data.txt");
	if (file.is_open())
	{
		int row1 = 0;
		string sTemp;
		file >> row1;
		std::getline(file, sTemp);
		if (row)
		{
			int colsize = 0;
			int idx = 0;
			while (!file.eof() && idx != row)
			{
				char x;
				file >> x;
				data[idx][colsize++] = x;
				if (colsize == col[idx])
				{
					idx++;
					colsize = 0;
				}
			}
		}
		file.close();
	}
}
char** Create2DJagged(int row, int* col)
{
	char** twoDArr{ new char* [row] };
	for (int i = 0; i < row; i++)
	{
		twoDArr[i] = new char[col[i]];
	}
	return twoDArr;
}
void DisplayContent(char** a, int row, int* col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
void DisplayContentNotRepeat(char** a, int row, int* col)
{
	cout << "Not Repeat" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			bool flag = false;
			for (int k = 0; k < j; k++)
			{
				if (a[i][j] == a[i][k])
					flag = true;
			}
			if (flag == false)
				cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
