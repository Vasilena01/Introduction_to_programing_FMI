#include <iostream>

/*Numeric system converter
void printResult(const char* result, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << result[i];
	}
}

int fromSymbolToIndex(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + 10) - 'A';
	}
	else
	{
		return -1;
	}
}

char fromIndexToSymbol(int index)
{
	if (index >= 0 && index <= 9)
	{
		return index + '0';
	}
	else if (index >= 10)
	{
		return (index - 10) + 'A';
	}
	else
	{
		return 0;
	}
}

int fromKToDecimal(const char* fromK, size_t size, int k)
{
	int result = 0;
	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= k)
	{
		result += fromSymbolToIndex(fromK[i]) * mult;
	}
	return result;
}

void fromDecimalToK(char* result, int decimal, size_t size, int k)
{
	for (int i = size - 1; i >= 0; i--)
	{
		result[i] = fromIndexToSymbol(decimal % k);
		decimal /= k;
	}
}
*/

/* BITWISE OPERATIONS */
/*Zad 1
int powerOfTwo(int size)
{
	return 1 << size;
}

void printSubset(const char* arr, size_t size, int mask)
{
	std::cout << " { ";

	for (int i = 0; i < size; i++)
	{
		if (mask % 2 != 0)
		{
			std::cout << arr[i];
		}

		mask /= 2;
	}
	std::cout << " } ";
}

void generateSubsets(const char* arr, size_t size)
{
	unsigned pt = powerOfTwo(size);
	for (int i = 0; i < pt; i++)
	{
		printSubset(arr, size, i);
	}
}*/

/*Zad 2 - Are masks from array submasks of given masks from second array
void init(bool* submasks, size_t size, int value)
{
	if (!submasks)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		submasks[i] = value;
	}
}

void printSubmasks(const bool* submasks, int& counter)
{
	if (!submasks)
	{
		return;
	}

	for (int i = 0; i < 1024; i++)
	{
		if (submasks[i] == true)
		{
			std::cout << i;
			counter++;
		}
	}
}

void isMaskSubmask(const int* masks, bool* submasks, int currentMask)
{
	if (!submasks || !masks)
	{
		return;
	}

	for (int i = 0; i <= currentMask; i++)
	{
		if ((currentMask | i) == currentMask)
		{
			submasks[i] = 1;
		}
	}
}

void getSubmasks(const int* masks, bool* submasks, size_t n)
{
	if (!submasks || !masks)
	{
		return;
	}

	for (int i = 0; i < n; i++)
	{
		isMaskSubmask(masks, submasks, masks[i]);
	}
}*/

/* MATRICES */
/*Solving SLU in a Matrix
void divideBy(double arr[], size_t cols, int currentElement)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] /= currentElement;
	}
}

void substract(double first[], double second[], double coef, size_t cols)
{
	for (int i = 0; i < cols; i++)
	{
		first[i] -= (second[i] * coef);
	}
}

void makeAllZeros(double matrix[][3], size_t rows, size_t cols, int currentRow)
{
	for (int i = 0; i < rows; i++)
	{
		if (i != currentRow)
		{
			substract(matrix[i], matrix[currentRow], matrix[i][currentRow], cols);
		}
	}
}

void gauss(double matrix[][3], size_t rows, double result[])
{
	size_t cols = rows + 1;

	for (int i = 0; i < rows; i++)
	{
		divideBy(matrix[i], cols, matrix[i][i]);
		makeAllZeros(matrix, rows, cols, i);
	}

	for (int i = 0; i < rows; i++)
	{
		result[i] = matrix[i][cols - 1];
	}
}*/

/* STRINGS */
/*Zad 1
bool isInteger(char ch)
{
	return ch >= '0' && ch <= '9';
}

int getNumber(const char* ch, int& get)
{
	int number = 0;
	while (isInteger(ch[get]))
	{
		number *= 10;
		number += ch[get] - '0';
		get++;
	}
	return number;
}

void removeIntFromString(char* ch, int& result)
{
	if (!ch)
	{
		return;
	}

	int put, get;
	put = get = 0;

	while (ch[get] != '\0')
	{
		if (isInteger(ch[get]))
		{
			result *= getNumber(ch, get);
		}
		
		ch[put] = ch[get];
		put++;

		if (ch[get] == '\0')
		{
			break;
		}

		get++;
	}
	
	ch[put] = '\0';
}*/

int main()
{
	/* NUMERIC SYSTEMS CONVERTER
	constexpr int SIZE = 8;
	int sizeK = 3;
	char fromK[] = { '0', '0', '5' };
	int toDecimal = fromKToDecimal(fromK, sizeK, 10);

	char toK[SIZE];
	fromDecimalToK(toK, toDecimal, sizeK, 2);

	printResult(toK, sizeK);*/

	/* BITWISE OPERATIONS */
	/*Zad 1 - Generate subsets from array with chars
	constexpr size_t SIZE = 4;
	char arr[] = "vasi";
	generateSubsets(arr, SIZE);*/

	/*Zad 2 - Are masks from array submasks of given masks from second array
	constexpr int MAX_SIZE = 1024;
	int n = 2;
	int counter = 0;
	int masks[] = { 6, 3 };
	bool subMasks[MAX_SIZE];

	init(subMasks, MAX_SIZE, 0);
	getSubmasks(masks, subMasks, n);
	printSubmasks(subMasks, counter);
	std::cout << counter;*/

	/* MATRICES */
	/*Solving SLU in a Matrix
	constexpr size_t rows = 2;
	constexpr size_t cols = 3;
	double matrix[2][3] = { {2, 6, 40}, {4, 1, 14} }; // 2x + 6y = 40 & 4x + y = 14
	double result[rows];
	gauss(matrix, rows, result);

	for (int i = 0; i < rows; i++)
	{
		std::cout << result[i];
	}*/

	/* STRINGS */
	/*Zad 1 - Get product of numbers in string and return the string without the numbers
	int result = 1;
	char ch[] = "Abc23ffds3ff5";
	removeIntFromString(ch, result);
	std::cout << result << " " << ch;*/

	/* POINTERS THEORY 
	int arr[] = { 1, 2, 3 };
	int* ptr = arr;
	std::cout << ptr[1] << *(ptr + 1); // 2, 2

	int a = 5;
	int* ptr2 = &a;

	std::cout << *ptr2; // 5*/
}


