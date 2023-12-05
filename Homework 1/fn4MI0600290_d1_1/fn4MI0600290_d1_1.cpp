/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Ventsislavova Stanoyska
* @idnumber 4MI0600290
* @task 1
*
*/

#include <iostream>
void getInput(int& n, int& k)
{
	std::cin >> n >> k;
	if (n < 1 || k < 0)
	{
		std::cout << "Incorrect input.";
		return;
	}
}
int getNumberOfDivisors(int num)
{
	int countOfDivisors = 0;

	if (num == 0 || num == 1)
	{
		return 1;
	}

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			countOfDivisors++;
		}
	}
	return countOfDivisors;
}

int countOfCommonDivisors(int number, int countOfDivisorsOfFirstNum, int n, int k)
{
	int counter = 0;

	for (int i = number; i <= n; i++)
	{
		int countOfDivisorsOfSecondNum = getNumberOfDivisors(i);
		int result = 0;
		if ((number * i) % k == 0)
		{
			result = (number * i) / k;
		}
		else
		{
			continue;
		}
		if (countOfDivisorsOfFirstNum * countOfDivisorsOfSecondNum == result)
		{
			// For easier testing
			// std::cout << "PAIR: " << number << " " << i << std::endl;
			counter++;
		}
	}
	return counter;
}

int getCountOfPairs(int n, int k)
{
	int countOfTotalPairs = 0;
	for (int i = 1; i <= n; i++)
	{
		int countOfDivisorsOfFirst = getNumberOfDivisors(i);
		int countOfCurrentPairsWithCommonDivisors = countOfCommonDivisors(i, countOfDivisorsOfFirst, n, k);
		countOfTotalPairs += countOfCurrentPairsWithCommonDivisors;
	}
	return countOfTotalPairs;
}

int main()
{
	int n, k;
	getInput(n, k);
	std::cout << getCountOfPairs(n, k);
}
