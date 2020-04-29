#include <iostream>
#include <ctime>
using namespace std;

const int rows = 10;
const int elements = 10;
int numships = 5;

int matrix[rows][elements];

void Clear()
{
	for (int i = 0; i < rows; i++)
	{
		for (int n = 0; n < elements; n++)
		{
			matrix[i][n] = 0;
		}
	}
}

void Show()
{
	for (int i = 0; i < rows; i++)
	{
		for (int n = 0; n < elements; n++)
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
		int y = rand() % elements;
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
	PlaceShips();
	Show();
	return 0;
}