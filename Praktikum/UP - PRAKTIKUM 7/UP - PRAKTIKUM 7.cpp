#include <iostream>
/* Global functions */
int getIndexOfSymbol(char ch) {
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return 10 + (ch - 'A');
	else
		return -1;
}
char getSymbolFromIndex(int ind)
{
	if (ind >= 0 && ind <= 9)
		return ind + '0';

	if (ind >= 10)
		return (ind - 10) + 'A';

	return 0;
}
void printArr(const char arr[], size_t size)
{
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
	}
}


/*Zad 1
void addOneToNum(char arr[], size_t size, unsigned k)
{
	for (int i = size - 1; i >= 0; i--) {
		int index = getIndexOfSymbol(arr[i]);
		if (index == k - 1) {
			arr[i] = '0';
		}
		else {
			index++;
			arr[i] = getSymbolFromIndex(index);
			break;
		}
	}
}*/

/*Zad 2
void substractOneFromNum(char arr[], size_t size, int k)
{
	for (int i = size - 1; i >= 0; i--) {
		int index = getIndexOfSymbol(arr[i]);

		if (arr[i] == '0') {
			arr[i] = getSymbolFromIndex(k - 1);
		}
		else {
			index--;
			arr[i] = getSymbolFromIndex(index);
			break;
		}
	}
}*/

/*Zad 3
void addDigitsFromTwoArraysInK(const char firstArr[], const char secondArr[], char resultArr[], size_t size, int k)
{
	int rest = 0;
	for (int i = size - 1; i >= 0; i--) {
		int firstNumIndex = getIndexOfSymbol(firstArr[i]);
		int secondNumIndex = getIndexOfSymbol(secondArr[i]);
		int result = firstNumIndex + secondNumIndex;
		result += rest;
		rest = 0;

		if (result >= k) {
			rest += result / k;
			result -= k;
			resultArr[i] = getSymbolFromIndex(result);
		}
		else {
			resultArr[i] = getSymbolFromIndex(result);
		}
	}
}*/

/*Zad 4
void getUserInput(unsigned& number, unsigned& k) {
	std::cin >> number;

	do {
		std::cin >> k;
	} while (k > 16);
}
void fromDecimalToK(int number, char to[], rsize_t size, int k) {
	for (int i = size - 1; i >= 0; i--) {
		int symbol = getSymbolFromIndex(number % k);
		to[i] = symbol;
		number /= k;
	}
}
bool isPalindrome(const char numberToK[], size_t size) {
	bool isPalindrome = false;
	for(int i = 0; i < size; i++) {
		if (numberToK[i] == numberToK[size - i - 1]) {
			isPalindrome = true;
		}
		else {
			isPalindrome = false;
		}
	}
	return isPalindrome;
}*/

/*Zad 5
int fromKToDecimal(const char number[], size_t size, int k) {
	int result = 0;
	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= k) {
		result += getIndexOfSymbol(number[i]) * mult;
	}
	return result;
}
bool areNumsEqual(const char firstNumberInK[], const char secondNumberInN[], size_t size, size_t secondSize, int k, int n) {
	int firstNumberInDecimal = fromKToDecimal(firstNumberInK, size, k);
	int secondNumberInDecimal = fromKToDecimal(secondNumberInN, secondSize, n);
	return (firstNumberInDecimal == secondNumberInDecimal ? true : false);
}*/
int main()
{
	/*Zad 1
	constexpr int size = 3;
	char arr[size] = {'1', '0', 'F'};
	int k = 16;

	addOneToNum(arr, size, k);
	printArr(arr, size);*/

	/*Zad 2
	constexpr int size = 3;
	char arr[size] = { '1', '0', '0' };
	int k = 2;

	substractOneFromNum(arr, size, k);
	printArr(arr, size);*/

	/*Zad 3
	int k = 2;
	constexpr int size = 4;
	char firstArr[size] = { '0', '0', '1' };
	char secondArr[size] = { '0', '1', '1' };
	char resultArr[size];

	addDigitsFromTwoArraysInK(firstArr, secondArr, resultArr, size, k);
	printArr(resultArr, size);*/

	/*Zad 4
	constexpr int SIZE = 3;
	unsigned number, k;
	char numberToK[SIZE] = {};


	getUserInput(number, k);
	fromDecimalToK(number, numberToK, SIZE, k);
	std::cout << isPalindrome(numberToK, SIZE);*/

	/*Zad 5
	int k = 8, n = 16;
	constexpr int SIZE = 3;
	constexpr int SECOND_SIZE = 2;

	char firstNumberInK[SIZE] = { '3', '4', '5' };
	char secondNumberInN[SECOND_SIZE] = { 'E', '5'};

	std::cout << areNumsEqual(firstNumberInK, secondNumberInN, SIZE, SECOND_SIZE, k, n);*/
}

