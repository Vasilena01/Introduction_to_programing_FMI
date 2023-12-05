// Task 3 with test cases

#include <iostream>
void getInput(char marbles[], int& marblesCount, int& shotsCount)
{
	// Test case 1
	//marblesCount = 15;
	//shotsCount = 4;

	// Test case 2
	/*marblesCount = 10;
	shotsCount = 5;
	return;*/

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
	//std::cout << "Final count: " << marblesCount << std::endl;
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
	//for (int i = marblesCount; i < 256 + 127; i++) {
	//  marbles[i] = '\0';
	//}
	/*std::cout << "Insert (" << marbleToInsert << ", " << shotIndex << "): " << marbles << std::endl;
	std::cout << "Count: " << marblesCount << std::endl;*/
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
			//std::cout << "Sequence found (startIndex, count): " << sequenceStartIndex << ", " << sequenceCount << std::endl;
			reorderTheMarbles(marbles, sequenceStartIndex, sequenceCount, marblesCount);
			shotIndex = sequenceStartIndex;
			marbleToInsert = marbles[shotIndex];
			marblesCount -= sequenceCount;

			/*std::cout << getFinalResult(marbles, marblesCount) << std::endl;
			std::cout << "Count: " << marblesCount << std::endl;*/

			if (shotIndex > 0 && marbleToInsert != marbles[shotIndex - 1])
			{
				//std::cout << "No more sequences" << std::endl;
				break;
			}
		}
		else {
			//std::cout << "Sequence not found (count): " << sequenceCount << std::endl;
			break;
		}
	}
}

void shootMarble(char marbles[], int& marblesCount, int shotsCount, int& shotIndex, char& marbleToInsert)
{
	// Test case 1
	//int shotIndices[127] = {10, 6, 1, 3};
	//char shotsMarbles[127] = {'c', 'b', 'a', 'b'};

	// Test case 2
	/*int shotIndices[127] = { 1, 10, 10, 4, 14 };
	char shotsMarbles[127] = { 'd', 'e', 'f', 'b', 'p' };
	std::cout << "Input: " << marbles << std::endl;*/

	for (int i = 0; i < shotsCount; i++)
	{
		/*shotIndex = shotIndices[i];
		marbleToInsert = shotsMarbles[i];*/
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
	// Test case 1
	  //char marbles[SIZE] = {'b', 'b', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'c', 'c', 'c', 'a', 'a', 'b'};

	// Test case 2
	//char marbles[SIZE] = { 'a', 'a', 'a', 'b', 'b', 'a', 'a', 'a', 'c', 'c' };
	getInput(marbles, marblesCount, shotsCount);
	shootMarble(marbles, marblesCount, shotsCount, shotIndex, marbleToInsert);
	getFinalResult(marbles, marblesCount);
}
