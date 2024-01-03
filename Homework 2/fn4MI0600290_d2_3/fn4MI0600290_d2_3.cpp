/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Stanoyska
* @idnumber 4MI0600290
* @task 3
*
*/

#include <iostream>
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

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

char* sortString(char* str)
{
	int strLen = getStrLen(str);

	for (int i = 0; i < strLen; i++)
	{
		for (int j = 0; j < strLen - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{
				swap(str[j], str[j + 1]);
			}
		}
	}
	return str;
}

char* nextPermutation(char* str)
{
	int strLen = getStrLen(str), smallerChIndex, biggerChIndex;

	// setting smallerChIndex to be the index of the first smaller than the previous one char - aaabbcqrzzzzzzzzzzzzz -> 'r'
	for (smallerChIndex = strLen - 2; smallerChIndex >= 0; smallerChIndex--)
	{
		if (str[smallerChIndex] < str[smallerChIndex + 1])
		{
			break;
		}
	}

	if (smallerChIndex < 0)
	{
		return nullptr;
	}

	// setting biggerChIndex to be the index of the first bigger than the "smallerChIndex" char - aaabbcqrzzzzzzzzzzzzz -> 'z'
	for (biggerChIndex = strLen - 1; biggerChIndex > smallerChIndex; biggerChIndex--)
	{
		if (str[biggerChIndex] > str[smallerChIndex])
		{
			break;
		}
	}

	// swaping the chars at position smallerChIndex & biggerChIndex and all elements between them
	swap(str[smallerChIndex], str[biggerChIndex]);

	int start = smallerChIndex + 1;
	int end = strLen - 1;
	while (start < end)
	{
		swap(str[start], str[end]);
		start++;
		end--;
	}

	return str;
}

void printMinPermutations(char* str, int count)
{
	if (!str)
	{
		return;
	}

	char* sortedString = sortString(str);
	std::cout << sortedString << std::endl;

	for (int i = 0; i < count - 1; i++)
	{
		std::cout << nextPermutation(sortedString) << std::endl;

		if (!*sortedString)
		{
			break;
		}
	}
}

int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = "";
	int permutationsCount;
	std::cin >> str >> permutationsCount;

	printMinPermutations(str, permutationsCount);
}
