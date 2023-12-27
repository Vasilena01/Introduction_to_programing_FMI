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
void createMatrix(int** matrix, int N, int* cols)
{
	for (int i = 0; i < N; i++) {
		int M;
		std::cout << "Enter the number of elements in row " << i + 1 << " (M): ";
		std::cin >> M;

		cols[i] = M;
		matrix[i] = new int[M];

		std::cout << "Enter the elements of row " << i + 1 << ": ";
		for (int j = 0; j < M; j++) {
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

	return std::max({ currentLength, up, down, left, right, upLeft, upRight, downLeft, downRight });
}

int findLongestIncreasingSequence(int** matrix, int rows, int* cols) {
	int maxLength = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols[i]; j++) {
			maxLength = std::max(maxLength, longestIncreasingSequenceRecursive(matrix, i, j, rows, cols));
		}
	}

	return maxLength;
}

int main() {
	int N;
	std::cout << "Enter the number of rows in the matrix (N): ";
	std::cin >> N;

	int** matrix = new int* [N];
	int* cols = new int[N];

	createMatrix(matrix, N, cols);

	int result = findLongestIncreasingSequence(matrix, N, cols);

	std::cout << "The length of the longest increasing sequence of adjacent elements: " << result << std::endl;

	freeMatrix(matrix, N);
	delete[] cols;
}

/*int** createMatrix(int rows, int*& colls)
{
	int** mtx = new int* [rows];
	colls = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		int coll;
		std::cin >> coll;

		colls[i] = coll;
		mtx[i] = new int[coll];

		for (int j = 0; j < coll; j++)
		{
			std::cin >> mtx[i][j];
		}
	}

	return mtx;
}

void freeMatrix(int** mtx, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] mtx[i];
	}

	delete[] mtx;
}

void printMatrix(int** mtx, int rows, int* colls)
{
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < colls[i]; j++)
		{
			std::cout << mtx[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int checkLongestIncreasingSequenceRecursive(int** mtx, int currentRow, int currentColl, int rows, int* colls)
{
	// If the indices go out of bounds, return 0
	if (currentRow < 0 || currentRow > rows || currentColl < 0 || currentColl > colls[currentRow])
	{
		return 0;
	}

	int currentLength = 1;
	// Making recursion checks for all neighbors of the current element
	int up = (currentRow > 0 && mtx[currentRow][currentColl] < mtx[currentRow - 1][currentColl]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow - 1, currentColl, rows, colls) : 0;
	
	int down = (currentRow < rows - 1 && mtx[currentRow][currentColl] < mtx[currentRow + 1][currentColl]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow + 1, currentColl, rows, colls) : 0;

	int left = (currentColl > 0 && mtx[currentRow][currentColl] < mtx[currentRow][currentColl - 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow, currentColl - 1, rows, colls) : 0;

	int right = (currentColl < colls[currentRow] - 1 && mtx[currentRow][currentColl] < mtx[currentRow][currentColl + 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow, currentColl + 1, rows, colls) : 0;

	int upLeft = (currentRow > 0 && currentColl > 0 && mtx[currentRow][currentColl] < mtx[currentRow - 1][currentColl - 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow - 1, currentColl - 1, rows, colls) : 0;

	int upRight = (currentRow > 0 && currentColl < colls[currentRow] - 1 && mtx[currentRow][currentColl] < mtx[currentRow - 1][currentColl + 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow - 1, currentColl + 1, rows, colls) : 0;
	
	int downLeft = (currentRow < rows && currentColl > 0 && mtx[currentRow][currentColl] < mtx[currentRow + 1][currentColl - 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow + 1, currentColl - 1, rows, colls) : 0;

	int downRight = (currentRow < rows && currentColl < colls[currentColl] - 1 && mtx[currentRow][currentColl] < mtx[currentRow + 1][currentColl + 1]) ?
		1 + checkLongestIncreasingSequenceRecursive(mtx, currentRow + 1, currentColl + 1, rows, colls) : 0;

	return std::max({ currentLength, up, down, left, right, upLeft, upRight, downLeft, downRight });
}

int findLongestIncreasingSequence(int** mtx, int rows, int* colls)
{
	int maxLength = 0;

	// Iterating through each element in the matrix and finding the length of the longest sequence
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls[i]; j++)
		{
			maxLength = max(maxLength, checkLongestIncreasingSequenceRecursive(mtx, i, j, rows, colls));
			//std::cout << maxLength;
		}
	}

	return maxLength;
}

int main()
{
	int rows;
	std::cin >> rows;

	int* colls = nullptr;
	int** mtx = createMatrix(rows, colls);

	int result = findLongestIncreasingSequence(mtx, rows, colls);
	std::cout << result;

	//printMatrix(mtx, rows, colls);
	freeMatrix(mtx, rows);
	delete[] colls;
}*/