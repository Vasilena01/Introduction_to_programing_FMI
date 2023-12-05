/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Ventsislavova Stanoyska
* @idnumber 4MI0600290
* @task 3
*
*/

#include <iostream>
void getInput(char marbles[], int& marblesCount, int& shotsCount)
{
	std::cin >> marblesCount;

	if (marblesCount <= 0 || marblesCount >= 256)
	{
		return;
	}

	for (int i = 0; i < marblesCount; i++)
	{
		std::cin >> marbles[i];
		if (marbles[i] < 97 || marbles[i] > 122)
		{
			return;
		}
	}

	std::cin >> shotsCount;

	if (shotsCount < 0 || shotsCount > 127)
	{
		return;
	}
}

void getFinalResult(char marbles[], int marblesCount)
{
	if (marblesCount < 1)
	{
		std::cout << -1;
		return;
	}

	for (int i = 0; i < marblesCount; i++)
	{
		std::cout << marbles[i];
	}
}

void insertMarble(char marbles[], int& marblesCount, int shotIndex, char marbleToInsert)
{
	char current = marbles[shotIndex + 1];
	marbles[shotIndex + 1] = marbleToInsert;
	marblesCount++;

	for (int i = shotIndex + 2; i < marblesCount; i++)
	{
		char next = marbles[i];
		marbles[i] = current;
		current = next;
	}
}

void searchForIdenticalMarblesRight(char marbles[], int shotIndex, char marble, int& sequenceCount, int marblesCount)
{
	for (int i = shotIndex + 2; i < marblesCount; i++)
	{
		if (marbles[i] == marble)
		{
			sequenceCount++;
		}
		else
		{
			break;
		}
	}
}

void searchForIdenticalMarblesLeft(char marbles[], int& startIndex, int shotIndex, char marble, int& sequenceCount)
{
	for (int i = shotIndex; i >= 0; i--)
	{
		if (marbles[i] == marble)
		{
			sequenceCount++;
			startIndex = i;
		}
		else
		{
			break;
		}
	}
}

void reorderTheMarbles(char marbles[], int startIndex, int sequenceCount, int marblesCount)
{
	for (int i = startIndex; i < marblesCount; i++)
	{
		marbles[i] = marbles[i + sequenceCount];
	}
}

void removeIdenticalMarbles(char marbles[], int& marblesCount, int& shotIndex, char marbleToInsert)
{
	int sequenceStartIndex = 0;
	int sequenceCount = 0;

	while (marblesCount > 0)
	{
		sequenceStartIndex = shotIndex + 1;
		sequenceCount = 1;
		searchForIdenticalMarblesRight(marbles, shotIndex, marbleToInsert, sequenceCount, marblesCount);
		searchForIdenticalMarblesLeft(marbles, sequenceStartIndex, shotIndex, marbleToInsert, sequenceCount);

		if (sequenceCount >= 3)
		{
			reorderTheMarbles(marbles, sequenceStartIndex, sequenceCount, marblesCount);
			shotIndex = sequenceStartIndex;
			marbleToInsert = marbles[shotIndex];
			marblesCount -= sequenceCount;

			if (shotIndex > 0 && marbleToInsert != marbles[shotIndex - 1])
			{
				break;
			}
		}
		else {
			break;
		}
	}
}

void shootMarble(char marbles[], int& marblesCount, int shotsCount, int& shotIndex, char& marbleToInsert)
{

	for (int i = 0; i < shotsCount; i++)
	{
		std::cin >> shotIndex >> marbleToInsert;

		if (shotIndex >= marblesCount)
		{
			continue;
		}

		insertMarble(marbles, marblesCount, shotIndex, marbleToInsert);
		removeIdenticalMarbles(marbles, marblesCount, shotIndex, marbleToInsert);
	}
}



int main()
{
	constexpr int SIZE = 1000;
	int marblesCount, shotsCount, shotIndex;
	char marbles[SIZE];
	char marbleToInsert;

	getInput(marbles, marblesCount, shotsCount);
	shootMarble(marbles, marblesCount, shotsCount, shotIndex, marbleToInsert);
	getFinalResult(marbles, marblesCount);
}