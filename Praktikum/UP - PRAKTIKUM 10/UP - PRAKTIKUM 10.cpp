#include <iostream>
int getStrLen(const char* text)
{
	int length = 0;
	while (*text)
	{
		text++;
		length++;
	}
	return length;
}

/*Zad 1
void addSymbolInStr(const char* text, char* result, char symbol, int i)
{
	if (!text || !result)
	{
		return;
	}

	int strLength = getStrLen(text);
	for (int j = 0, iter = 0; j < strLength + 1; j++)
	{ 
		if (j == i)
		{
			result[j] = symbol;
			continue;
		}

		result[j] = text[iter];
		iter++;
	}
}*/

/*Zad 2
void orderString(const char* text, char* result)
{
	if (!text || !result)
	{
		return;
	}

	int strLength = getStrLen(text);
	for (int i = 0; i < strLength; i++)
	{
		int symbol = text[i];
		int index = text[i + 1] - '0';

		result[index] = symbol;
	}
}*/

/*Zad 3
int countCharOccurences(const char* str, int length, char element)
{
	int counter = 0;
	for(int i = 0; i < length; i++)
	{
		if (str[i] == element)
		{
			counter++;

		}
	}

	return counter;
}

void getStrWithNumberOfOccurences(const char* str, char* result)
{
	if (!str || !result)
	{
		return;
	}

	int strLength = getStrLen(str);
	char elementsInStr[] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};

	for (int i = 0; i < strLength; i++)
	{
		char element = str[i];
		int count = countCharOccurences(str, strLength, element);

		// Fill the elementsInStr array with current element if it wasn't been count yet
		if (elementsInStr[element - '0'] <= '1')
		{
			elementsInStr[element - '0'] = count + '0';
		}
		else {
			continue;
		}

		if (count != 0)
		{
			*result = count + '0';
			result++;
			*result = 'x';
			result++;
			*result = element;
			result++;
			*result = ',';
			result++;
		}
	}
}*/

/*Zad 4
void removeSymbolFromStr(const char* text, char* result, char symbol)
{
	if (!text || !result)
	{
		return;
	}

	int length = getStrLen(text);
	for (int i = 0, iter = 0; i < length; i++)
	{
		if (text[i] == symbol)
		{
			continue;
		}

		result[iter] = text[i];
		iter++;
	}
}*/

/*Zad 5
bool isElementInStr(const char* str, char element, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] == element)
		{
			return true;
		}
	}
	return false;
}

void fillResultWithDiffereneces(const char* strToCheck, const char* str, char* result, size_t strToCheckLen, size_t strLen)
{
	for (int i = 0; i < strLen; i++)
	{
		bool doesStrContain = isElementInStr(strToCheck, str[i], strToCheckLen);

		if (!doesStrContain)
		{
			result[i] = str[i];
		}
	}
}

void findStringDifferences(const char* firstStr, const char* secondStr, char* result)
{
	if (!firstStr || !secondStr || !result)
	{
		return;
	}

	int firstStrLen = getStrLen(firstStr);
	int secondStrLen = getStrLen(secondStr);

	fillResultWithDiffereneces(secondStr, firstStr, result, secondStrLen, firstStrLen);
	fillResultWithDiffereneces(firstStr, secondStr, result, secondStrLen, firstStrLen);
}*/

/*Zad 6
void makeLetterToUpper(char* str)
{
	if (!str)
	{
		return;
	}

	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
		str++;
	}
	
	bool turnNextCharToUpper = false;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			turnNextCharToUpper = true;
		}

		if (*str >= 'a' && *str <= 'z' && turnNextCharToUpper)
		{
			*str = *str - ('a' - 'A');
			turnNextCharToUpper = false;
		}
		str++;
	}
}*/

int main()
{
	/*Zad 1
	char text[] = "Hello y, friend";
	char result[100] = "";
	char symbol = 'm';
	int i = 6;
	addSymbolInStr(text, result, symbol, i);
	std::cout << result;*/

	/*Zad 2
	char text[] = "a0b234c1d3";
	char result[100] = "";
	orderString(text, result);
	std::cout << result;*/

	/*Zad 3
	char str[] = "4231148";
	char result[100] = "";
	getStrWithNumberOfOccurences(str, result);
	std::cout << result;*/

	/*Zad 4
	char text[] = "Hello my, friend!";
	char result[100] = "";
	char symbol = 'e';
	removeSymbolFromStr(text, result, symbol);
	std::cout << result;*/

	/*Zad 5
	constexpr int SIZE = 20;
	char firstStr[] = "abcde";
	char secondStr[] = "acdef";
	char result[SIZE] = "";
	findStringDifferences(firstStr, secondStr, result);

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << result[i];
	}*/

	/*Zad 6
	//constexpr int SIZE = 20;
	char str[] = "hello,  my friend!";
	//char result[SIZE] = "";
	makeLetterToUpper(str);
	std::cout << str;*/
}
