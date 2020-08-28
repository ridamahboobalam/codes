#include <iostream>
using namespace std;

int **createDynamic2D(int row, int col);
void FillArrayRandomly(int** a, int row, int col);
void DisplayContent(int* data, int size);
void SortRowWise(int* data, int size);

int main()
{
	int row = 0, col = 0;
	row = 3;
	col = 5;
	int **ptr = createDynamic2D(row, col);
	FillArrayRandomly(ptr, row, col);
	cout << "Array contents(Randomly filled): "<<endl;
	for (int i = 0; i < row; i++)
		DisplayContent(ptr[i], col);
	cout << "After sorting: " << endl;
	for (int i = 0; i < row; i++)
		SortRowWise(ptr[i], col);
	system("PAUSE");
	return 0;
}
int** createDynamic2D(int row, int col)
{
	int** temp = new int* [row];
	for (int i = 0; i < row; i++)
	{
		temp[i] = new int[col];
	}
	return temp;
}
void FillArrayRandomly(int** a, int row, int col)
{
	int** ptr = createDynamic2D(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j] = rand()%50 + 50;
		}
	}
}
void SortRowWise(int * data, int size)
{
	int i, j, temp;
	int* arr = new int[size];
	for (i = 0; i < size; i++)
	{
		arr[i] = data[i];
	}
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	DisplayContent(arr, size);
}
void DisplayContent(int* data, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}