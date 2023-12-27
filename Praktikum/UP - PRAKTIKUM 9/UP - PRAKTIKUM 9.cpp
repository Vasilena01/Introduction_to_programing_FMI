#include <iostream>
const int SIZE = 20;

void printMatrix(const int matrix[][SIZE], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

void printNonSquareMatrix(const int result[][SIZE], size_t sizeRows, size_t sizeCols)
{
	for (int i = 0; i < sizeRows; i++)
	{
		for (int j = 0; j < sizeCols; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

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

		// ??? check proverkata
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

/*Zad 5
void getTransposeMatrix(const int matrix[][SIZE], int transposeMatrix[][SIZE], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			transposeMatrix[i][j] = matrix[j][i];
		}
	}
}*/

/*Zad 6
bool isMatrixMagicSquare(const int matrix[][SIZE], size_t size)
{
	int sumMainDiagonal = 0;
	int sumSecondaryDiagonal = 0;
	bool isSumOfRowsColsEqual = false;
	bool isSumOfDiagonalsEqual = false;

	for (int i = 0; i < size; i++)
	{
		int sumRows = 0;
		int sumCols = 0;

		for (int j = 0; j < size; j++)
		{
			sumRows += matrix[i][j];
			sumCols += matrix[j][i];
		}

		isSumOfRowsColsEqual = sumRows == sumCols ? true : false;

		sumMainDiagonal += matrix[i][i];
		sumSecondaryDiagonal += matrix[i][size - i - 1];

		isSumOfDiagonalsEqual = sumMainDiagonal == sumSecondaryDiagonal ? true : false;
	}

	if (isSumOfRowsColsEqual && isSumOfDiagonalsEqual)
	{
		return true;
	}
	else
	{
		return false;
	}
}*/

/*Zad 7
void getSumAndProductMulOfMatrices(const int firstMatrix[][SIZE], const int secondMatrix[][SIZE], int resultSum[][SIZE], int resultProduct[][SIZE],
	size_t sizeRows, size_t sizeCols, int num)
{
	// Geting the sum of first & second matrices
	for (int i = 0; i < sizeRows; i++)
	{
		for (int j = 0; j < sizeCols; j++)
		{
			resultSum[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
		}
	}

	// Getting the product by multiplying firstMatrix with a num
	for (int i = 0; i < sizeRows; i++)
	{
		for (int j = 0; j < sizeCols; j++)
		{
			resultProduct[i][j] = 3 * firstMatrix[i][j];
		}
	}
}*/

/*Zad 8
int getSumOfProductsRowsCols(const int firstMatrix[SIZE][SIZE], const int secondMatrix[SIZE][SIZE], int i, int j, int sizeColsRows)
{
	int sum = 0;
	for (int c = 0; c < sizeColsRows; c++)
	{
		sum += firstMatrix[i][c] * secondMatrix[c][j];
	}

	return sum;
}

void getProductOfTwoMatrices(const int firstMatrix[SIZE][SIZE], const int secondMatrix[SIZE][SIZE], int resultMatrix[SIZE][SIZE],
	size_t sizeRowsFirst, size_t sizeColsRows, size_t sizeColsSecond)
{
	for (int i = 0; i < sizeRowsFirst; i++)
	{
		for (int j = 0; j < sizeColsSecond; j++)
		{
			resultMatrix[i][j] = getSumOfProductsRowsCols(firstMatrix, secondMatrix, i, j, sizeColsRows);
		}
	}
}*/

/*Zad 9*/
void printTopRow(const int matrix[SIZE][SIZE], int currentRow, int cols)
{
	for (int c = 0; c < cols - currentRow; c++)
	{
		std::cout << matrix[currentRow][c];
	}
}

void printRightCol(const int matrix[SIZE][SIZE], int currentRow, int rows)
{
	for (int r = currentRow - 1; r < rows; r++)
	{
		std::cout << matrix[rows - r][rows - currentRow];
	}
}

void printBottomRow(const int matrix[SIZE][SIZE], int currentRow, int cols, int rows)
{
	for (int c = currentRow - 1; c <= cols; c++)
	{
		std::cout << matrix[rows - currentRow][cols - c];
	}
}

void printLeftCol(const int matrix[SIZE][SIZE], int currentRow, int cols, int rows)
{
	for (int r = currentRow - 1; r <= rows; r++)
	{
		std::cout << matrix[r][currentRow];
	}
}

void printElementsSpirally(const int matrix[SIZE][SIZE], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; i++)
	{
		printTopRow(matrix, i, cols);
		printRightCol(matrix, i, rows);
		printBottomRow(matrix, i, cols, rows);
		printLeftCol(matrix, i, cols, rows);
	}
}

/*Zad 10
void turnMatrixToTheRight(int matrix[][SIZE], int toTheRightMatrix[][SIZE], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			toTheRightMatrix[i][colls - j - 1] = matrix[j][i];
		}
	}
}*/

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

	/*Zad 5
	int size = 3;
	int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int transposeMatrix[SIZE][SIZE] = {};
	getTransposeMatrix(matrix, transposeMatrix, size);
	printMatrix(transposeMatrix, size);*/

	/*Zad 6
	int size = 4;
	int matrix[SIZE][SIZE] = { {16, 3, 2, 13}, {5, 10, 11, 8}, {9, 6, 7, 12}, {4, 15, 14, 1} };
	std::cout << isMatrixMagicSquare(matrix, size);*/

	/*Zad 7 - Sum of two matrices + multiply by scalar
	int sizeRows = 2;
	int sizeCols = 3;
	int num = 3;
	int firstMatrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}};
	int secondMatrix[SIZE][SIZE] = { {5, 6, 7}, {8, 9, 10} };
	int resultSum[SIZE][SIZE] = {};
	int resultProduct[SIZE][SIZE] = {};

	getSumAndProductMulOfMatrices(firstMatrix, secondMatrix, resultSum, resultProduct, sizeRows, sizeCols, num);
	printNonSquareMatrix(resultSum, sizeRows, sizeCols);
	printNonSquareMatrix(resultProduct, sizeRows, sizeCols);*/

	/*Zad 8 - Multiplying two matrices
	int sizeRowsFirst = 5;
	int sizeColsRows = 2;
	int sizeColsSecond = 3;

	int firstMatrix[SIZE][SIZE] = { {1, 2}, {8, 9}, {10, 0}, {1, 0}, {2, 2} };
	int secondMatrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 2} };
	int resultMatrix[SIZE][SIZE] = {};

	getProductOfTwoMatrices(firstMatrix, secondMatrix, resultMatrix, sizeRowsFirst, sizeColsRows, sizeColsSecond);
	printNonSquareMatrix(resultMatrix, sizeRowsFirst, sizeColsSecond);*/

	/*Zad 9*/
	int sizeRows = 3;
	int sizeCols = 3;
	int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	printElementsSpirally(matrix, sizeRows, sizeCols);

	/*Zad 10
	int sizeRows = 3;
	int sizeCols = 3;
	int matrix[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int toTheRightMatrix[SIZE][SIZE] = {};
	turnMatrixToTheRight(matrix, toTheRightMatrix, sizeRows, sizeCols);
	printNonSquareMatrix(toTheRightMatrix, sizeRows, sizeCols);*/
}
