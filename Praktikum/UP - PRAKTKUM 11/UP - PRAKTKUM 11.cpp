#include <iostream>
void getArrInput(int* nums, size_t size)
{
	if (!nums)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		std::cin >> nums[i];
	}
}

void printArr(const int* nums, size_t size)
{
	if (!nums)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << nums[i];
	}
}

/*Zad 1
void printNumsBackwards(const int* nums, size_t size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		std::cout << nums[i] << " ";
	}
}*/

/*Zad 2
void getCountOfDivisors(const int* arr, size_t size, int k, int& count)
{
	if (!arr)
	{
		return;
	}
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % k == 0)
		{
			count++;
		}
	}
}

int* fillArrWithDivisors(const int* arr1, const int* arr2, size_t size1, size_t size2, int k, int& countOfDivisors)
{
	if (!arr1 || !arr2)
	{
		return nullptr;
	}

	getCountOfDivisors(arr1, size1, k, countOfDivisors);
	getCountOfDivisors(arr2, size2, k, countOfDivisors);
	int* resultArr = new int[countOfDivisors];

	int index = 0;

	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] % k == 0)
		{
			resultArr[index] = arr1[i];
			index++;
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (arr2[i] % k == 0)
		{
			resultArr[index] = arr2[i];
			index++;
		}
	}

	return resultArr;
}*/

int main()
{
	/*Zad 1
	int n;
	std::cin >> n;
	int* nums = new int[n];
	getArrInput(nums, n);
	printNumsBackwards(nums, n);
	delete[] nums;*/

	/*Zad 2
	int k;
	int size1;
	int size2;
	int countDivisors = 0;
	std::cin >> k >> size1 >> size2;

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	getArrInput(arr1, size1);
	getArrInput(arr2, size2);

	int* result = fillArrWithDivisors(arr1, arr2, size1, size2, k, countDivisors);
	printArr(result, countDivisors);

	delete[] arr1;
	delete[] arr2;
	delete[] result;*/
}
