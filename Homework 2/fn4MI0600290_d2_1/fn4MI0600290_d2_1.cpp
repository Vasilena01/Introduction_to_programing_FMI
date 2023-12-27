/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Stanoyska
* @idnumber 4MI0600290
* @task 1
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

void getEncodedChar(char ch, char& resultChar)
{
	int position = 3;
	ch >>= 1;

	// Checking current bit in ch
	while (position <= 7)
	{
		int mask = 1;
		mask <<= position;

		// check if the bit of current position is equal to 1 or 0
		if ((ch & mask) == mask)
		{
			resultChar |= (mask << 1);
		}
		else
		{
			resultChar |= mask;
		}

		position++;

		if (position == 7)
		{
			break;
		}
		else {
			resultChar >>= 1;
		}
	}
}

void splitIntoTwoChars(char ch, char& firstHalfResultCh, char& secondHalfResultCh)
{
	int mask = -1;

	// Splitting char into two numbers based on the first and second 4 bites
	char firstHalfEncoded = ch & (mask << 4); // as int 96 - 01100001 - 01100000
	char secondHalfEncoded = (ch & ~(mask << 4)) << 4; // as int 16 - 01100001 - 00010000

	getEncodedChar(firstHalfEncoded, firstHalfResultCh);
	getEncodedChar(secondHalfEncoded, secondHalfResultCh);
}

char* getEncodedStr(char* str)
{
	if (!str)
	{
		return nullptr;
	}

	int strLen = getStrLen(str);
	int encodedStrLen = strLen * 2;

	char* encoded = new char[encodedStrLen + 1];
	encoded[encodedStrLen] = '\0';
	
	int i = 0;

	while (*str && i < encodedStrLen && *encoded)
	{
		char firstHalfResultCh = 0, secondHalfResultCh = 0;
		splitIntoTwoChars(*str, firstHalfResultCh, secondHalfResultCh);
		encoded[i] = firstHalfResultCh;
		encoded[++i] = secondHalfResultCh;
		i++;
		str++;
	}
	return encoded;
}

int main()
{
	const int MAX_SIZE = 64;
	char str[MAX_SIZE] = "";
	std::cin >> str;

	char* encoded = getEncodedStr(str);
	std::cout << encoded;

	delete[] encoded;
}
