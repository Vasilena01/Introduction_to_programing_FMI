#include <iostream>

void printMatrix(int** matrix, int rows, int cols)
{
	if (!matrix)
	{
		return;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

void swap(int*& firstRow, int*& secondRow)
{
	int* temp = firstRow;
	firstRow = secondRow;
	secondRow = temp;
}

int** deleteMatrixRow(int** matrix, int row, int rowsCount, int colsCount)
{
	if (!matrix)
	{
		return nullptr;
	}

	for (int i = row - 1; i < rowsCount; i++)
	{
		swap(matrix[i], matrix[i + 1]);
	}
	
	return matrix;
}

int** deleteMatrixCol(int** matrix, int col, int rowsCount, int colsCount)
{
	if (!matrix)
	{
		return nullptr;
	}

	for (int i = 0; i < rowsCount; i++)
	{

	}
}

int main()
{
	
	int i = 2;
	const int rowsCount = 3;
	const int colsCount = 3;
	int** matrix = new int* [rowsCount];

	matrix[0] = new int[colsCount] { 1, 2, 3};
	matrix[1] = new int[colsCount] { 4, 5, 6 };
	matrix[2] = new int[colsCount] { 7, 8, 9 };

	//int** resultMatrix = deleteMatrixRow(matrix, i, rowsCount, colsCount);
	int** resultMatrix = deleteMatrixCol(matrix, i, rowsCount, colsCount);
	printMatrix(resultMatrix, rowsCount - 1, colsCount);
}
