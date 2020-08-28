#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ReadFile();
void regrow(int v);
void SortRowWise();

int* in = NULL;
int in_size = 0;
int* counters = NULL;

int main()
{
	ReadFile();
	SortRowWise();


}
void ReadFile()
{
	ifstream fin;
	fin.open("input.txt");
	
	int x;
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin >> x;
			bool bfound = false;
			for (int i = 0; i < in_size; i++)
			{
				if (x == in[i])
				{
					counters[i]++;
					bfound = true;
					break;
				}
			}
			if (bfound == false && x != -99)
			{
				regrow(x);
			}
		}
	}
	fin.close();
}
void regrow(int v)
{
	int* new_array = new int[in_size + 1];
	int* new_counters = new int[in_size + 1];

	for (int i = 0; i < in_size; i++)
	{
		new_array[i] = in[i];
		new_counters[i] = counters[i];

	}
	new_array[in_size] = v;
	new_counters[in_size] = 1;
	if (in != NULL)
		delete[] in;
	if (counters != NULL)
		delete[] counters;
	in = new_array;
	counters = new_counters;
	in_size++;
}
void SortRowWise()
{
	int i, j, temp;

	for (i = 0; i < in_size; i++)
	{
		for (j = i + 1; j < in_size; j++)
		{
			if (in[i] > in[j])
			{
				temp = in[i];
				in[i] = in[j];
				in[j] = temp;

				temp = counters[i];
				counters[i] = counters[j];
				counters[j] = temp;
			}
		}
	}
	ofstream file;
	file.open("output.txt");
	if (file.is_open())
	{
		for (int i = 0; i < in_size; i++)
		{
			file << in[i] << "  " << counters[i]<<endl;
		}
		cout << endl;
	}
	file.close();
}
