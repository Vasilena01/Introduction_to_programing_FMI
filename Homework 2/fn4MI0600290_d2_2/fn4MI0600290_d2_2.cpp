/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Stanoyska
* @idnumber 4MI0600290
* @task 2
*
*/

#include <iostream>

/*FIRST SOLUTION without third test case*/
bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool isLetter(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isValidInput(char* input)
{
	if (!input)
	{
		return false;
	}

	while (*input)
	{
		if (!isDigit(*input) && !isLetter(*input) && !(*input == ' '))
		{
			return false;
		}
		input++;
	}
	return true;
}
void countTemplateOccurences(const char*& textPtr, const char*& templPtr)
{
	while (*templPtr)
	{
		if ((*textPtr == *templPtr) || (*templPtr == '@' && isLetter(*textPtr)) || (*templPtr == '*'))
		{
			textPtr++;
			templPtr++;
		}
		else if (*templPtr == '%' && isDigit(*textPtr))
		{
			if (isDigit(*(textPtr + 1)))
			{
				textPtr++;
			}

			textPtr++;
			templPtr++;
		}
		else
		{
			break;
		}
	}
}

int getTemlpOccurencesInText(char* text, char* templ)
{
	if (!text || !templ)
	{
		return -1;
	}

	int countOccurences = 0;
	int textIndex = 0;

	while (*text && *templ)
	{
		const char* textPtr = text;
		const char* templPtr = templ;

		countTemplateOccurences(textPtr, templPtr);

		if (!*templPtr)
		{
			countOccurences++;
		}
		text++;
	}

	return countOccurences;
}

int main()
{
	const int MAX_SIZE = 100;
	char text[MAX_SIZE] = "";
	char templ[MAX_SIZE] = "";

	std::cin.getline(text, MAX_SIZE);
	std::cin.getline(templ, MAX_SIZE);

	if (!isValidInput(text))
	{
		std::cout << "Invalid input";
		return -1;
	}

	std::cout << getTemlpOccurencesInText(text, templ);
}

/* SECOND SOLUTION - with third test case, but idk why is not working for the first...xd
bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool isLetter(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isValidInput(char* input)
{
	if (!input)
	{
		return false;
	}

	while (*input)
	{
		if (!isDigit(*input) && !isLetter(*input) && !(*input == ' '))
		{
			return false;
		}
		input++;
	}
	return true;
}

int countPercents(char* templPtr)
{
	int count = 0;
	while (*templPtr)
	{
		if (*templPtr == '%')
		{
			count++;
		}
		templPtr++;
	}
	return count;
}

void fillWithZeros(int*& arr, int size)
{
	if (!arr)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

int getTextLen(const char* text) {
	int count = 0;
	while (*text)
	{
		count++;
		text++;
	}
	return count;
}

void countTemplateOccurences(const char*& textPtr, const char*& templPtr, int*& timesCounted)
{
	int percentCount = 0;
	int textLen = getTextLen(textPtr);
	while (*templPtr)
	{
		if ((*textPtr == *templPtr) || (*templPtr == '@' && isLetter(*textPtr)) || (*templPtr == '*'))
		{
			textPtr++;
			templPtr++;
		}
		else if (*templPtr == '%' && isDigit(*textPtr))
		{
			percentCount++;

			if (isDigit(*(textPtr + 1)) && timesCounted[percentCount - 1] == 0)
			{
				timesCounted[percentCount]++;
				templPtr++;
			}
			else
			{
				textPtr--;
			}

			textPtr++;
			templPtr++;
		}
		else
		{
			break;
		}
	}
}

int getTemlpOccurencesInText(char* text, char* templ)
{
	if (!text || !templ)
	{
		return -1;
	}

	int countOccurences = 0;

	int percentCount = countPercents(templ);
	int* timesCounted = new int[percentCount + 1];
	fillWithZeros(timesCounted, percentCount);

	while (*text && *templ)
	{
		const char* textPtr = text;
		const char* templPtr = templ;

		countTemplateOccurences(textPtr, templPtr, timesCounted);

		if (!*templPtr)
		{
			countOccurences++;
		}
		text++;
	}

	delete[] timesCounted;
	return countOccurences;
}

int main()
{
	const int MAX_SIZE = 100;
	char text[MAX_SIZE] = "";
	char templ[MAX_SIZE] = "";

	std::cin.getline(text, MAX_SIZE);
	std::cin.getline(templ, MAX_SIZE);

	if (!isValidInput(text))
	{
		std::cout << "Invalid input";
		return -1;
	}

	std::cout << getTemlpOccurencesInText(text, templ);
}*/

