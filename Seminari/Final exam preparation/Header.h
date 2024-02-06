#pragma once
#include <iostream>

/* Primerni zadachi 1 */
/*Zad 1*/
bool isLetter(char ch)
{
	return ch >= 'A' && ch <= 'z';
}

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

void Revert(char* str)
{
	if (!str)
	{
		return;
	}

	while (*str)
	{
		if (!isLetter(*str))
		{
			std::cout << "Invalid input";
			return;
		}

		if (isUpper(*str))
		{
			*str = (*str - 'A') + 'a';
		}
		else
		{
			*str = (*str - 'a') + 'A';
		}
		str++;
	} 
}

/*Zad 2*/
const int MAX_DATE_SIZE = 10;
int getStrLen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

bool isValidSymbol(char ch)
{
	if (ch == '.' || ch >= '0' && ch <= '9')
	{
		return true;
	}
	return false;
}

bool areValidDaysMonthYear(int day, int month, int year)
{
	if (month == 8 || month == 12 && day == 31)
	{
		return true;
	}

	if (month > 12 || day > 31 || 
		(month % 2 == 0 && day > 30) ||
		(year % 4 != 0 && month == 2 && day >= 29))
	{
		return false;
	}

	return true;
}

bool CheckDate(char* date)
{
	if (!date)
	{
		return false;
	}

	int strLen = getStrLen(date);
	int index = 0;
	int day = 0;
	int month = 0;
	int year = 0;

	if (strLen != MAX_DATE_SIZE)
	{
		return false;
	}

	// Checking the first third of the string (the days)
	while (index < strLen / 3 && date[index] != '.')
	{
		if (!isValidSymbol(date[index]))
		{
			return false;
		}

		day *= 10;
		day += date[index] - '0';
		index++;
	}
	//std::cout << day << std::endl;

	if (date[index] == '.' && month == 0)
	{
		index++;
		while (index < strLen - 5)
		{
			if (!isValidSymbol(date[index]))
			{
				return false;
			}

			month *= 10;
			month += date[index] - '0';
			index++;
		}
		//std::cout << month << std::endl;
	}
	
	if (date[index] == '.' && year == 0)
	{
		index++;
		while (index < strLen)
		{
			if (!isValidSymbol(date[index]))
			{
				return false;
			}

			year *= 10;
			year += date[index] - '0';
			index++;
		}
		//std::cout << year << std::endl;
	}
	else
	{
		return false;
	}

	if (!areValidDaysMonthYear(day, month, year))
	{
		return false;
	}
	return true;
}

/*Zad 3*/
int getNumberLen(long num)
{
	int len = 0;
	while (num)
	{
		len++;
		num /= 10;
	}

	return len;
}

int countZerosAtBack(long num)
{
	int count = 0;
	while (num)
	{
		if (num % 10 == 0)
		{
			count++;
		}
		num /= 10;
	}

	return count;
}

long getReverseNum(long num)
{
	long reversedNum = 0;
	while (num)
	{
		reversedNum *= 10;
		reversedNum += num % 10;
		num /= 10;
	}

	return reversedNum;
}

int DigitPos(long num, int k)
{
	int len = getNumberLen(num);
	int zerosCount = countZerosAtBack(num);
	int reversedNum = getReverseNum(num);
	int result = -1;

	if (k > len)
	{
		return result;
	}

	for (int i = 0; i < k + zerosCount; i++)
	{
		if (i >= k)
		{
			return 0;
		}
		else {
			result = reversedNum % 10;
		}
		reversedNum /= 10;
	}
	return result;
}

/*Zad 4*/
int getStrLen(const char* str)
{
	if (!str)
	{
		return 0;
	}

	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}

	return count;
}

bool isPrefix(const char* symbols, const char* word)
{
	while (*symbols && *word)
	{
		std::cout << *symbols << " " << *word;
		if (*symbols != *word)
		{
			return false;
		}

		symbols++;
		word++;
	}
	return *word == '\0'; // check in case the symbols length is < of word's
}

bool doExist(const char* symbols, const char* word)
{
	if (!symbols || !word)
	{
		return false;
	}

	int symbolsLen = getStrLen(symbols);
	int wordLen = getStrLen(word);

	while (wordLen <= symbolsLen)
	{
		if (isPrefix(symbols, word))
		{
			return true;
		}

		symbols++;
		symbolsLen--;
	}
	return false;
}

/*Zadachi ot minali godini*/
/* IZPIT 1 */
/*Zad 1*/
void printArr(const int* nums, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << nums[i] << " ";
	}
}
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int power(int num)
{
	return num * num;
}
void bubbleSort(int* arr, size_t size)
{
	int lastSwappedIndex = size - 1;

	for (int j = 0; j < size; j++)
	{
		int currentSwapedIndex = 0;
		for (int i = 0; i < lastSwappedIndex; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				currentSwapedIndex = i;
			}
		}

		if (currentSwapedIndex == 0)
		{
			return;
		}
		lastSwappedIndex = currentSwapedIndex;
	}
}
void selectionSort(int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[minIndex] > arr[j])
			{
				minIndex = j;
			}
		}
		
		if (minIndex != i)
		{
			swap(arr[i], arr[minIndex]);
		}
	}
}
void insertionSort(int* arr, size_t size)
{
	for (int i = 1; i < size; i++)
	{
		int currentIndex = i - 1;
		int currentElement = arr[i];
		while (currentIndex >= 0 && arr[currentIndex] >= currentElement)
		{
			arr[currentIndex + 1] = arr[currentIndex];
			currentIndex--;
		}
		arr[currentIndex + 1] = currentElement;
	}
}
void squareArr(int* nums, size_t size)
{
	if (!nums)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		nums[i] = power(nums[i]);
	}

	bubbleSort(nums, size);
	//selectionSort(nums, size);
	//insertionSort(nums, size);
}

/*Zad 2 - Nz shto ne raboti...*/
const long MAX_NUM = 1000000000;
int getNumLen(long num)
{
	int len = 0;
	while (num)
	{
		num /= 10;
		len++;
	}
	return len;
}
int getRestOfTwoNumbers(long num1, int num2)
{
	int result = num1 / num2;
	return num1 - (num2 * result);
}
int getDigitAtPosition(long num, unsigned int position, int len)
{
	int digit = -1;
	while (len)
	{
		if (len == position)
		{
			digit = getRestOfTwoNumbers(num, 10);
		}
		len--;
		num /= 10;
	}
	return digit;
}
void fillArrWithDigits(int* arr, long num, int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = getRestOfTwoNumbers(num, 10);
		num /= 10;
	}
}
long convertArrToNum(const int* arr, int len)
{
	long result = 0;
	for (int i = 0; i < len; i++)
	{
		result *= 10;
		result += arr[i];
	}
	return result;
}
long swapDigits(long num, unsigned int m, unsigned int l, int len)
{
	int firstDigit = getDigitAtPosition(num, m, len);
	int secondDigit = getDigitAtPosition(num, l, len);

	std::cout << firstDigit << " " << secondDigit << std::endl;
	int* numArr = new int[len];
	fillArrWithDigits(numArr, num, len);
	swap(numArr[m], numArr[l]);
	long swapedNum = convertArrToNum(numArr, len);
	std::cout << swapedNum;

	/*while (len)
	{
		std::cout << num << " " << len << std::endl;
		if (len == m)
		{
			num /= 10;
			num *= 10;
			num += secondDigit;
			len--;
			continue;
		} 
		
		if (len == l)
		{
			num /= 10;
			num *= 10;
			num += firstDigit;
			len--;
			continue;
		}
			
		num /= 10;
		len--;
	}*/
	delete[] numArr;
	return swapedNum;
	//return num;
}
int checkNum(long num, unsigned int m, unsigned int l)
{
	int numLen = getNumLen(num);

	if (m > numLen || l > numLen || num > MAX_NUM)
	{
		return -1;
	}

	num = swapDigits(num, m, l, numLen);
	if (getRestOfTwoNumbers(num, 4) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/* IZPIT 2 */
/*Zad 1*/
unsigned int findGCDOfTwo(unsigned int a, unsigned int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
unsigned int getGCD(const unsigned int* nums, size_t size)
{
	if (!nums)
	{
		return 0;
	}
	
	int result = nums[0];
	for (int i = 1; i < size; i++)
	{
		result = findGCDOfTwo(result, nums[i]);
	}

	return result;
}

/*Zad 2*/
bool isReversedPrefix(const char* symbols, const char* word, int index)
{
	while (index >= 0 && *word)
	{
		if (symbols[index] != *word)
		{
			return false;
		}

		index--;
		word++;
	}
	return *word == '\0';
}
bool doExistReversed(const char* symbols, const char* word)
{
	if (!symbols || !word)
	{
		return false;
	}

	int symbolsLen = getStrLen(symbols);
	int wordLen = getStrLen(word);
	int symbolsIndex = symbolsLen - 1;

	while (wordLen <= symbolsLen)
	{
		if (isReversedPrefix(symbols, word, symbolsIndex))
		{
			return true;
		}

		symbolsLen--;
		symbolsIndex--;
	}
	return false;
}

/* IZPIT 3*/
/*Zad 1*/
int countSymbolOccurences(char current, const char* symbols)
{
	int count = 0;
	while (*symbols)
	{
		if (current == *symbols)
		{
			count++;
		}
		symbols++;
	}
	return count;
}
int alanyzeArr(const char* symbols)
{
	if (!symbols)
	{
		return 0;
	}

	int currentCount = 0;
	int totalCount = 0;
	int index = 0;
	
	while (symbols[index])
	{
		currentCount = countSymbolOccurences(symbols[index], symbols);
		index++;

		if (currentCount == 1)
		{
			totalCount++;
		}
	}

	return totalCount;
}

/*Zad 2 - maj pochti raboti xd*/
bool checkIsDivisibleWithoutDigit(long number)
{
	if (getRestOfTwoNumbers(number, 3) == 0)
	{
		return true;
	}
	return false;
}
long reverseNum(long num)
{
	int result = 0;
	while (num)
	{
		result *= 10;
		result += getRestOfTwoNumbers(num, 10);
		num /= 10;
	}
	return result;
}
int getCurrentDigitPosition(long number, int digit)
{
	int count = 0;

	while (number)
	{
		if (getRestOfTwoNumbers(number, 10) == digit)
		{
			break;
		}
		count++;
		number /= 10;
	}
	return count;
}
int getMinDivisibleDigitPosition(long num, int currPosition, int minPosition)
{
	if (currPosition < minPosition)
	{
		minPosition = currPosition;
	}
	return minPosition;
}
int removeDigitFromNum(long number, int digit)
{
	long restNum = 0;
	int digitOccurences = 0;
	int zerosCount = countZerosAtBack(number);

	while (number)
	{
		if (getRestOfTwoNumbers(number, 10) == digit && digitOccurences == 0)
		{
			number /= 10;
			digitOccurences = 1;
			continue;
		}
		restNum *= 10;
		restNum += getRestOfTwoNumbers(number, 10);
		number /= 10;
	}

	restNum = reverseNum(restNum);
	for (int i = 0; i < zerosCount; i++)
	{
		restNum *= 10;
	}
	std::cout << restNum << std::endl;
	return restNum;
}
int checkN(long N)
{
	if (N > MAX_NUM)
	{
		return -1;
	}

	int numLen = getNumLen(N);
	int currentDigitPosition = 0;
	int minDivisibleDigitPosition = numLen;
	int currentDivisibleDigit = 0;
	
	for (int i = 0; i <= 9; i++)
	{
		long transformedNum = removeDigitFromNum(N, i);

		if (transformedNum != N && checkIsDivisibleWithoutDigit(transformedNum))
		{
			currentDivisibleDigit = i;
			currentDigitPosition = numLen - getCurrentDigitPosition(N, currentDivisibleDigit);

			minDivisibleDigitPosition = getMinDivisibleDigitPosition(transformedNum, currentDigitPosition, minDivisibleDigitPosition);
		}
	}
	return minDivisibleDigitPosition;
}

/*Zad 3*/
bool isValidInput(const char* word, int N)
{
	if (!(N >= 2 && N <= 49))
	{
		return false;
	}

	while (*word)
	{
		if (!((*word - '0' >= 32) && (*word - '0' <= 126)))
		{
			return false;
		}
		word++;
	}
	return true;
}
char* encodeWord(char* word, int N)
{
	if (!word || !isValidInput(word, N))
	{
		return nullptr;
	}

	int index = 0;
	int wordLen = getStrLen(word);
	char* resultWord = new char[wordLen + 1];
	resultWord[wordLen] = '\0';

	// !Kogato promenqme string ZADULJITELNO GO OBHOJDAME S INDEX, zashtoto nakraq ostava samo \0-lata kato go returnem
	while (*word && resultWord[index])
	{
		resultWord[index] = *word + N;
		word++;
		index++;
	}

	return resultWord;
}

/* PRIMERNI ZADACHI OT MOODLE */
/*Zad 1*/
int* concatTwoArrays(const int* nums1, const int* nums2, size_t size1, size_t size2)
{
	if (!nums1 || !nums2)
	{
		return nullptr;
	}

	int* result = new int[size1 + size2];

	int index1 = 0;
	int index2 = 0;
	int resultIndex = 0;
	while (index1 < size1 && index2 < size2)
	{
		if (nums1[index1] < nums2[index2])
		{
			result[resultIndex++] = nums1[index1++];
		}

		if (nums2[index2] < nums1[index1])
		{
			result[resultIndex++] = nums2[index2++];
 		}
	}
	
	while (index1 < size1)
	{
		result[resultIndex++] = nums1[index1++];
	}

	while (index2 < size2)
	{
		result[resultIndex++] = nums2[index2++];
	}

	return result;
}

/*Zad 2*/
const int SIZE = 4;
int getSumOfElementsAboveMainDiagonal(int matrix[][SIZE], size_t rows_cols)
{
	if (!matrix)
	{
		return 0;
	}

	int sum = 0;
	/*
	1  2  3  4
	5  6  7  8
	9  10 11 12
	13 14 15 16*/

	for (int i = 0; i < rows_cols; i++)
	{
		for (int j = i + 1; j < rows_cols; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

/*Zad 3*/
void printMatrix(int** matrix, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void freeMatrix(int** mtx, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] mtx[i];
	}
	delete[] mtx;
}
int** createMatrix(size_t rows_cols)
{
	int** matrix = new int*[rows_cols];
	for (int i = 0; i < rows_cols; i++)
	{
		matrix[i] = new int[rows_cols];
	}
	return matrix;
}
int** getTransposeMatrix(int matrix[][SIZE], size_t rows_cols)
{
	int** resultMatrix = createMatrix(rows_cols);

	for (int i = 0; i < rows_cols; i++)
	{
		for (int j = 0; j < rows_cols; j++)
		{
			resultMatrix[i][j] = matrix[j][i];
		}
	}
	return resultMatrix;
}

/* ZADACHI OT PRAKTIKUMI */
/*Zad 1*/
int getWordsCount(const char* text, char symbol)
{
	int count = 0;
	int startIndex = 0;
	int endIndex = 1;
	while (text[endIndex])
	{
		if (text[endIndex] == symbol)
		{
			count++;
			startIndex = endIndex + 1;
		}
		endIndex++;
	}
	return count + 1;
}
int getLettersOfWordCount(const char* text, char symbol, int startIndex)
{
	int count = 0;
	while (text[startIndex] != symbol && text[startIndex] != '\0')
	{
		count++;
		startIndex++;
	}
	return count;
}
char** createResultMatrix(const char* text, char symbol, size_t rows)
{
	char** result = new char* [rows];
	int cols = 0;
	int totalLettersCount = 0;
	for (int i = 0; i < rows; i++)
	{
		cols = getLettersOfWordCount(text, symbol, i + totalLettersCount);
		totalLettersCount += cols;
		result[i] = new char[cols + 1];
		result[i][0] = cols;
	}
	return result;
}
void printResultMatrix(char** matrix, size_t rows)
{
	for (int i = 0; i < rows; i++)
	{
		int cols = matrix[i][0];
		for (int j = 1; j <= cols; j++)
		{
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
}
void freeResultMatrix(char** matrix, size_t rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
void fillResultMatrix(char** result, const char* text, size_t rows)
{
	int totalLetters = 0;
	for (int i = 0; i < rows; i++)
	{
		int cols = result[i][0];
		for (int j = 1; j <= cols; j++)
		{
			result[i][j] = text[totalLetters];
			totalLetters++;
		}
		totalLetters += 1;
	}
}
void getMatrixFromSeperatedWords(const char* text, char symbol)
{
	int rows = getWordsCount(text, symbol);
	char** result = createResultMatrix(text, symbol, rows);
	fillResultMatrix(result, text, rows);
	printResultMatrix(result, rows);
	freeResultMatrix(result, rows);
}

/*Zad 2 - Recursion - ne raboti xd*/
void addNumberToPositionRec(int* nums, int number, size_t size)
{
	if (size == 0 || number >= nums[size - 1])
	{
		nums[size] = number;
		return;
	}
	
	int index = size - 2;
	while (index >= 0 && nums[index] > number)
	{
		nums[index + 1] = nums[index];
		index--;
	}
	
	nums[index + 1] = number;

	addNumberToPositionRec(nums, number, size--);
}

/*Zad 3*/
void insertionSortNums(int* nums, int borderIndex, size_t size)
{
	// Sorting the even numbers
	for (int i = 1; i <= borderIndex; i++)
	{
		int currentIndex = i - 1;
		int currentElement = nums[i];

		while (currentIndex >= 0 && nums[currentIndex] > currentElement)
		{
			nums[currentIndex + 1] = nums[currentIndex];
			currentIndex--;
		}
		nums[currentIndex + 1] = currentElement;
	}
}
void selectionSortNums(int* nums, int borderIndex, size_t size)
{
	// Sorting the odd numbers backwards 2 4 6 1 3 5
	for (int i = borderIndex + 1; i < size; i++)
	{
		int maxIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (nums[j] > nums[maxIndex])
			{
				maxIndex = j;
			}
		}

		if (maxIndex != i)
		{
			swap(nums[i], nums[maxIndex]);
		}
	}
}
void sortOddEven(int* nums, size_t size)
{
	if (!nums)
	{
		return;
	}

	int borderIndex = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if ((nums[j] % 2 != 0 && nums[j + 1] % 2 == 0 ))
			{
				swap(nums[j], nums[j + 1]);
				borderIndex = j;
			}
		}
	}

	insertionSortNums(nums, borderIndex, size);
	selectionSortNums(nums, borderIndex, size);
}

/*Zad 4*/
int sortHeights(int* heights, size_t size)
{
	int lastSwappedIndex = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (heights[i] % 2 == 0 && heights[j] % 2 != 0)
			{
				lastSwappedIndex = j;
				swap(heights[i], heights[j]);
			}
		}
	}
	return lastSwappedIndex + 1;
}
void insertionSortHeights(int* heights, size_t size, int border)
{
	for (int i = 1; i < size; i++)
	{
		int currentIndex = i - 1;
		int currentElement = heights[i];

		while (currentIndex >= border && heights[currentIndex] > currentElement)
		{
			heights[currentIndex + 1] = heights[currentIndex];
			currentIndex--;
		}

		heights[currentIndex + 1] = currentElement;
	}
}
void printCoupleHeights(int* heights, int border, size_t size)
{
	for (int i = 0, j = border; i < border && j < size; i++, j++)
	{
		std::cout << heights[j] << " " << heights[i] << std::endl;
	}
}
void getOddEvenHeights(int* heights, size_t size)
{
	if (!heights)
	{
		return;
	}

	int border = sortHeights(heights, size);
	// Sorting the first half (even heights) of the array
	insertionSortHeights(heights, border, 0);
	// Sorting the second half (odd heights) of the array
	insertionSortHeights(heights, size, border);
	printCoupleHeights(heights, border, size);
}

/*Zad 5*/
int getLowerCount(const char* str, int* countLetters)
{
	int count = 0;
	int index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			countLetters[str[index] - 'a']++;
			count++;
		}
		index++;
	}
	return count;
}
void fillArrWithLower(char* result, int resultIndex, char letter, int count)
{
	if (!result)
	{
		return;
	}

	for (int i = 0; i < count; i++)
	{
		result[resultIndex + i] = letter;
	}
}
char* sortLower(const char* word)
{
	if (!word)
	{
		return nullptr;
	}

	const int alphabet_size = 26;
	const char firstLetter = 'a';
	int countLetters[alphabet_size]{ 0 };

	int countLower = getLowerCount(word, countLetters);

	int resultIndex = 0;
	char* result = new char[countLower + 1];
	result[countLower] = '\0';


	for (int i = 0; i < alphabet_size; i++)
	{
		fillArrWithLower(result, resultIndex, firstLetter + i, countLetters[i]);
		resultIndex += countLetters[i];
	}
	return result;
}

/*Zad 6*/
void getSubsets(const int* nums, int mask, size_t size)
{
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		if (mask % 2 != 0)
		{
			std::cout << nums[i] << " ";
		}
		mask /= 2;
	}
	std::cout << " }" << std::endl;
}
void printSubsets(const int* nums, size_t size)
{
	int subsetsCount = (1 << size);
	for (int i = 0; i < subsetsCount; i++)
	{
		getSubsets(nums, i, size);
	}
}