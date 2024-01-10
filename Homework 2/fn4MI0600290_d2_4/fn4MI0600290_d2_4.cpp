/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Stanoyska
* @idnumber 4MI0600290
* @task 4
*
*/

#include <iostream>

void createMatrix(int** matrix, int rowsCount, int* cols)
{
	for (int i = 0; i < rowsCount; i++) {
		int colsCount;
		//std::cout << "Enter the number of elements in row " << i + 1 << ": ";
		std::cin >> colsCount;

		cols[i] = colsCount;
		matrix[i] = new int[colsCount];

		//std::cout << "Enter the elements of the row " << i + 1 << ": ";
		for (int j = 0; j < colsCount; j++) {
			std::cin >> matrix[i][j];
		}
	}
}

void freeMatrix(int** matrix, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int longestIncreasingSequenceRecursive(int** matrix, int i, int j, int rows, int* cols) {
	// Base case: if the indices go out of bounds, return 0
	if (i < 0 || i >= rows || j < 0 || j >= cols[i]) {
		return 0;
	}

	int currentLength = 1;

	// Recursive calls for the neighboring elements
	int up = (i > 0 && matrix[i][j] < matrix[i - 1][j]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i - 1, j, rows, cols) : 0;

	int down = (i < rows - 1 && matrix[i][j] < matrix[i + 1][j]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i + 1, j, rows, cols) : 0;

	int left = (j > 0 && matrix[i][j] < matrix[i][j - 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i, j - 1, rows, cols) : 0;

	int right = (j < cols[i] - 1 && matrix[i][j] < matrix[i][j + 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i, j + 1, rows, cols) : 0;

	int upLeft = (i > 0 && j > 0 && matrix[i][j] < matrix[i - 1][j - 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i - 1, j - 1, rows, cols) : 0;

	int upRight = (i > 0 && j < cols[i] - 1 && matrix[i][j] < matrix[i - 1][j + 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i - 1, j + 1, rows, cols) : 0;

	int downLeft = (i < rows - 1 && j > 0 && matrix[i][j] < matrix[i + 1][j - 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i + 1, j - 1, rows, cols) : 0;

	int downRight = (i < rows - 1 && j < cols[i] - 1 && matrix[i][j] < matrix[i + 1][j + 1]) ?
		1 + longestIncreasingSequenceRecursive(matrix, i + 1, j + 1, rows, cols) : 0;

	return max(max(max(max(max(max(max(max(currentLength, up), down), left), right), upLeft), upRight), downLeft), downRight);
}

int findLongestIncreasingSequence(int** matrix, int rows, int* cols) {
	int maxLength = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols[i]; j++) {
			maxLength = max(maxLength, longestIncreasingSequenceRecursive(matrix, i, j, rows, cols));
		}
	}

	return maxLength;
}

int main() {
	int rowsCount;
	//std::cout << "Enter the number of rows: ";
	std::cin >> rowsCount;

	int** matrix = new int* [rowsCount];
	int* cols = new int[rowsCount];

	createMatrix(matrix, rowsCount, cols);

	int result = findLongestIncreasingSequence(matrix, rowsCount, cols);

	//std::cout << "Result: " << result << std::endl;
	std::cout << result;

	freeMatrix(matrix, rowsCount);
	delete[] cols;
}