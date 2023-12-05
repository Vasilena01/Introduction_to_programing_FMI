#include <iostream>
const int SIZE = 20;

/*Zad 1
int getMinElementFromMatrix(const int matrix[][SIZE], size_t firstSize, size_t secondSize)
{
	int minElement = matrix[0][0];
	for (int i = 0; i < secondSize; i++)
	{
		
		for (int j = 0; j < secondSize; j++)
		{
			if (minElement >= matrix[i][j])
			{
				minElement = matrix[i][j];
			}
		}
	}
	return minElement;
}*/

/*Zad 2
void getMainDiagonal(const int matrix[][SIZE], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << matrix[i][i];
	}

	std::cout << std::endl;
}

void getSecondaryDiagonal(const int matrix[][SIZE], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << matrix[i][size - i - 1];
	}
}*/

/*Zad 3
void getElementsDiagonaly(const int matrix[][SIZE], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % 2 != 0)
			{
				std::cout << matrix[i][size - j - 1];
			}
			else
			{
				std::cout << matrix[i][j];
			}
		}
		std::cout << std::endl;
	}
}*/

/*Zad 4
bool isMatrixTriangle(const int matrix[][SIZE], size_t size)
{
	bool isTriangle = false;

	for (int i = 1; i < size; i++)
	{
		int zerosCount = 0;

		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] == 0)
			{
				zerosCount++;
			}
		}

		if (zerosCount == i)
		{
			isTriangle = true;
		}
		else
		{
			isTriangle = false;
		}
	}
	return isTriangle;
}*/

/*Zad 5*/
void getTransposeMatrix(const int matrix[][SIZE], size_t size)
{

}

int main()
{
	/*Zad 1
	const int SIZE_FIRST = 3;
	int size = 3;

	int matrix[SIZE_FIRST][SIZE] = {{3, 5, 1}, {6, 2, 4}, {0, 9, 8}};
	std::cout << getMinElementFromMatrix(matrix, SIZE_FIRST, size);*/

	/*Zad 2
	int size = 3;
	int matrix[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	getMainDiagonal(matrix, size);
	getSecondaryDiagonal(matrix, size);*/

	/*Zad 3
	int size = 3;
	int matrix[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	getElementsDiagonaly(matrix, size);*/

	/*Zad 4
	int size = 3;
	int matrix[SIZE][SIZE] = {{5, 1, 5}, {0, 5, 9}, {0, 0, 7}};
	std::cout << isMatrixTriangle(matrix, size);*/

	/*Zad 5*/
	int size = 3;
	int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	getTransposeMatrix(matrix, size);
}
