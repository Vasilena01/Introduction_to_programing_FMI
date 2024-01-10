#include <iostream>

int main()
{
	int element;
	const int rowsCount = 3;
	const int colsCount = 3;
	int** matrix = new int* [rowsCount];
	std::cin >> element;

	matrix[0] = new int[colsCount] { 1, 2, 3};
	matrix[1] = new int[colsCount] { 4, 5, 6 };
	matrix[2] = new int[colsCount] { 7, 8, 9 };
}

