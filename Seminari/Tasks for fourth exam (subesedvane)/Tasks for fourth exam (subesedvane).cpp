#include <iostream>
/*Strings*/
/*Remove nums from string and get their product
bool checkIfIsNumber(char ch)
{
    return ch >= '0' && ch <= '9' ? true : false;
}

int getNumber(const char* str, int& index)
{
    int number = 0;
    while (checkIfIsNumber(str[index]))
    {
        number *= 10;
        number += str[index] - '0';
        index++;
    }
    return number;
}

void removeNumsFromString(char* str, int& product)
{
    if (!str)
    {
        return;
    }
    
    // index = endIndex
    int startIndex, index;
    startIndex = index = 0;

    while (str[index] != '\0')
    {
        if (checkIfIsNumber(str[index]))
        {
            product *= getNumber(str, index);
        }
        str[startIndex] = str[index];
        startIndex++;

        if (str[index] == '\0')
        {
            break;
        }
        index++;
    }
    str[startIndex] = '\0';
}*/

/*Sorting Algorithms*/
void printArr(const int* arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

/*Bubble Sort*/
void bubbleSort(int* arr, size_t size)
{
    if (!arr)
    {
        return;
    }

    int lastSwappedIndex = size - 1;

    for (int j = 0; j < size - 1; j++)
    {
        int currentSwappedIndex = 0;
        for (int i = 0; i < lastSwappedIndex; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                currentSwappedIndex = i;
            }
        }

        if (currentSwappedIndex == 0)
        {
            break;
        }

        lastSwappedIndex = currentSwappedIndex;
    }
    printArr(arr, size);
}

/*Selection sort
void selectionSort(int* arr, size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minElementIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minElementIndex])
            {
                minElementIndex = j;
            }
        }

        if (minElementIndex != i)
        {
            swap(arr[i], arr[minElementIndex]);
        }
    }
    printArr(arr, size);
}*/

/*Insertion Sort
int* insertionSort(int* arr, size_t size)
{
    for (int i = 1; i < size; i++)
    {
        int currentElement = arr[i];
        int currentIndex = i - 1;
        while (currentIndex != 0 && arr[currentIndex] > currentElement)
        {
            arr[currentIndex + 1] = arr[currentIndex];
            currentIndex--;
        }

        arr[currentIndex + 1] = currentElement;
    }
    return arr;
}*/

/*Recursion - Zadachi ot praktikum 14*/
/* Zad 1 - Get sum of numbers from 1-n 
int getSumFromOneToN(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num + getSumFromOneToN(num - 1);
}*/

/*Zad 2 - Checks if a number is in another number
bool isNinK(int n, int k)
{
    if (k == 0)
    {
        return 0;
    }
    else if (n == k % 10)
    {
        return 1;
    }
    else {
        return isNinK(n, k / 10);
    }
}*/

/*Zad 3 - Get sum of num digits 
int getSumOfNumDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + getSumOfNumDigits(num / 10);
}*/

/*Zad 4 - Check if a sequence of nums is growing

bool isGrowingSequence(int* arr, size_t size)
{
    if (size == 0)
    {
        return 1;
    }
    else if (arr[size - 1] < arr[size - 2])
    {
        return 0;
    }
    else
    {
        return isGrowingSequence(arr, size - 1);
    }
}*/

/*Zad 5 - Is num prime
bool isPrimeRec(int num, int divisor)
{
    double sqrtN = sqrt(num);
    if (num < 2)
    {
        return false;
    }
   
    if (divisor <= sqrtN)
    {
        if (num % divisor == 0)
        {
            return false;
        }
        return isPrimeRec(num, divisor + 1);
    }

    return true;
}

bool isPrime(int num)
{
    int divisor = 2;
    return isPrimeRec(num, divisor);
}*/

/*Find first missing num in arr
int getFirstMissingNum(int* arr, size_t size)
{
    arr = insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (!(arr[i] == arr[i + 1]) && !(arr[i] == arr[i + 1] - 1))
        {
            return arr[i] + 1;
        }
    }

    return 0;
}*/

int main()
{
    /*Strings*/
    /*Remove nums from string and get their product
    char str[] = "ABC654sdfg2";
    int product = 1;
    removeNumsFromString(str, product);
    std::cout << product << " " << str;*/

    /*Sorting Algorithms*/
    constexpr int size = 7;
    int arr[size] = { 39, 4, 6, 1, 2, 66, 33 };
    bubbleSort(arr, size);
    //selectionSort(arr, size);
    //insertionSort(arr, size);
    //std::cout << getFirstMissingNum(arr, size);
    
    /*Recursion - Zadachi ot praktikum 14*/
    //std::cout << getSumFromOneToN(3);
    //std::cout << isNinK(0, 15234);
    //std::cout << getSumOfNumDigits(12345);
    /*Zad 4
    constexpr int size = 4;
    int arr[size] = { 1, 5, 3, 4 };
    std::cout << isGrowingSequence(arr, size);*/
    //std::cout << isPrime(5);

}