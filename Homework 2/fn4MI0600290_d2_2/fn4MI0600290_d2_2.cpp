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

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

void countTemplateOccurences(const char*& textPtr, const char*& templPtr)
{
	while (*templPtr)
	{
		if ((*textPtr == *templPtr) || (*templPtr == '@' && (*textPtr >= 'a' && *textPtr <= 'z')) || (*templPtr == '*'))
		{
			textPtr++;
			templPtr++;
		}
		else if (*templPtr == '%' && isDigit(*textPtr))
		{
			//std::cout << *textPtr << " " << *templPtr;
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
		if (*text == '*' || *text == '%' || *text == '@')
		{
			std::cout << "Invalid input" << std::endl;
			return -1;
		}

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
	char text[100] = "";
	char templ[100] = "";
	std::cin >> text >> templ;

	std::cout << getTemlpOccurencesInText(text, templ);
}
