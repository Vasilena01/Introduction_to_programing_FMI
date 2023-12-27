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
int getTemplLen(const char* templ)
{
	if (!templ)
	{
		return -1;
	}

	int count = 0;
	while (*templ)
	{
		count++;
		templ++;
	}

	return count;
}

bool isPrefix(char textChar, char templChar)
{
	if (templChar == textChar || templChar == '*' ||
		(templChar == '%' && (textChar >= '0' && textChar <= '99')) ||
		(templChar == '@' && ((textChar >= 'a' && textChar <= 'z') || (textChar >= 'A' && textChar <= 'Z'))))
	{
		return true;
	}
	return false;
}

void countTemplateOccurences(char*& text, char* templ, int& count)
{
	if (!text || !templ)
	{
		return;
	}

	while (*templ && isPrefix(*text, *templ))
	{
		//std::cout << *text << " " << *templ << std::endl;
		count++;
		text++;
		templ++;
	}
}

int getTemlpOccurencesInText(char* text, char* templ)
{
	if (!text || !templ)
	{
		return -1;
	}

	int countOccurences = 0;

	while (*text)
	{
		if (*text == '*' || *text == '%' || *text == '@')
		{
			std::cout << "Invalid text input." << std::endl;
			return -1;
		}

		if (isPrefix(*text, *templ))
		{
			countTemplateOccurences(text, templ, countOccurences);
			continue;
		}

		text++;
	}

	int templLen = getTemplLen(templ);
	return countOccurences / templLen;
}

int main()
{
	char text[] = "vasilena0101 245stvasilena0101";
	char templ[] = "va*ilena%%01";

	int count = getTemlpOccurencesInText(text, templ);
	
	std::cout << count;
}
