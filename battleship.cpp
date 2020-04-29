#include <iostream>
#include <ctime>
using namespace std;

int rows = 10;
int columns = 10;
int numships = 5;

int matrix[rows][columns];

void Clear()
{
	for (int i = 0; i < rows; i++)
	{
		for (int n = 0; n < columns; n++)
		{
			matrix[i][n] = 0;
		}
	}
}

void Show()
{
	for (int i = 0; i < rows; i++)
	{
		for (int n = 0; n < columns; n++)
		{
			cout << matrix[i][n] << " ";
		}
		cout << endl;
	}
}

void PlaceShips()
{
	int s = 0;
	while (s < numships)
	{
		int x = rand() % rows;
		int y = rand() % columns;
		if (matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 1;
		}
	}
}

int main()
{
	Clear();
	Show();
	return 0;
}