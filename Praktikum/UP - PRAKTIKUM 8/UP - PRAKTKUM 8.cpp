#include <iostream>

/*Zad 1
int getBitOfPositionN(int m, int n)
{
	int mask = 1;
	mask <<= n;
	return (m & mask) >> n;
}*/

/*Zad 2
int getNumFromPosition(int num, int position, int countDigits)
{
	int mask = 1;
	num >>= position - 1;
	mask <<= countDigits;
	return num & (mask - 1);
}*/

/*Zad 3*/

/*Zad 4
void swapTwoNumbers(int& num1, int& num2)
{
	num1 = num1 ^ num2;
	num2 = num2 ^ num1;
	num1 = num1 ^ num2;
}*/

/*Zad 5 - First solution
int swapDigitWithGivenIndex(int num, int position, int index)
{
	int mask = 1;
	if (index == 1)
	{
		mask = 0;
	}

	mask <<= position;
	return num ^ mask;
}*/

/*Zad 5 - Second solution
void swapDigitWithGivenIndex(int& num, int position, int index)
{

	int mask = 1;
	mask << position;

	if (index)
	{
		num | mask;
	}
	else
	{
		~mask;
		num& mask;
	}
}*/

/*Zad 6
bool isfirstNumPermutationOfSecond(int num1, int num2)
{
	int count = 0;
	int mask = num1 ^ num2; // if digits are == returns 0 as digit in mask, if not returns 1 as digit in mask
	// Counting the number of occurences of the digit 1 in mask
	while (mask != 0)
	{
		if (mask % 2 != 0)
		{
			count++;
		}

		mask /= 2;
	}

	// If one occures even times in mask, then num1 is permutation of num2
	if (count % 2 == 0)
	{
		return true;
	}
	else {
		return false;
	}
}*/

/*Zad 8
int getPowerOfTwo(int size)
{
	return 1 << size;
}

void printSubsets(const int* arr, size_t size, int index)
{
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		if (index % 2 != 0)
		{
			std::cout << arr[i];
		}

		index /= 2;
	}
	std::cout << " }";

}

void countSubsets(const int* arr, size_t size)
{
	int pt = getPowerOfTwo(size);
	for (int i = 0; i < pt; i++)
	{
		printSubsets(arr, size, i);
	}
}*/

int main()
{
	/*Zad 1
	int m, n;
	std::cin >> m >> n;
	std::cout << getBitOfPositionN(m, n);*/

	/*Zad 2
	int num, position, countDigits;
	std::cin >> num >> position >> countDigits;
	std::cout << getNumFromPosition(num, position, countDigits);*/

	/*Zad 3*/

	/*Zad 4
	int num1, num2;
	std::cin >> num1 >> num2;
	swapTwoNumbers(num1, num2);
	std::cout << num1 << " " << num2;*/

	/*Zad 5
	int num, position, index;
	std::cin >> num >> position >> index;
	std::cout << swapDigitWithGivenIndex(num, position, index);
	/*swapDigitWithGivenIndex;
	std::cout << num;*/

	/*Zad 6
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << isfirstNumPermutationOfSecond(num1, num2);*/

	/*Zad 8
	constexpr size_t SIZE = 3;
 	int arr[SIZE] = { 1, 2, 3 };
	
	countSubsets(arr, SIZE);*/
}
