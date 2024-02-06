#include <iostream>
#include "Header.h"

int main()
{
    /* Primerni zadachi 1 */
    /*Zad 1 - replace all small/upper letters with their opposite
    char str[] = "VasIII";
    Revert(str);
    std::cout << str;*/

    /*Zad 2 - is correct date
    char date[] = "29.02.2023";
    std::cout << CheckDate(date);*/

    /*Zad 3 - Get the k digit  from a num
    long num = 100230;
    int k = 6;
    std::cout << DigitPos(num, k);*/

    /*Zad 4 - Checks if a word is in the given string
    char symbols[] = "What a beautiful day is today";
    char word[] = "day";
    std::cout << doExist(symbols, word);*/

    /*Zadachi ot minali godini*/

    /*Izpit 1*/
    /*Zad 1 - get the same sorted array, but with the squares of the elements
    int nums[] = { -4, -3, -2, -1 };
    size_t size = 4;
    squareArr(nums, size);
    printArr(nums, size);*/

    /*Zad 2 - checks if a number with 2 given swaped digits also divides 4
    long number = 4876320;
    unsigned int m = 2;
    unsigned int l = 6;
    std::cout << checkNum(number, m, l);*/

    /*Izpit 2*/
    /*Zad 1 - get GCD of nums in arr
    unsigned int gcdNums[] = { 12, 18, 3};
    size_t size = 6;
    std::cout << getGCD(gcdNums, size);*/

    /*Zad 2 - checks if a word is in text, but from right to left
    char symbols[] = "what a beautiful yad";
    char word[] = "day";
    std::cout << doExistReversed(symbols, word);*/

    /*Izpit 3*/
    /*Zad 1  - returns the count of unique symbols in array
    char symbols[] = "Vaasi e sladka";
    std::cout << alanyzeArr(symbols);*/

    /*Zad 2 - returns if a number is divisible by 3 when a random digit from it it's removed
    long N = 987654301;
    std::cout << checkN(N);*/

    /*Zad 3 - returns the same string, but with every symbol, increased by N 
    char word[] = "Vasi";
    int N = 3;

    char* encodedWord = encodeWord(word, N);
    std::cout << encodedWord;
    delete[] encodedWord;*/

    /* PRIMERNI ZADACHI OT MOODLE */
    /*Zad 1 - concat two sorted arrays into one sorted array
    int size1 = 3;
    int size2 = 4;
    int nums1[] = { 1, 3, 5 };
    int nums2[] = { 2, 4, 4, 8 };
    int* result = concatTwoArrays(nums1, nums2, size1, size2);
    for (int i = 0; i < (size1 + size2); i++)
    {
        std::cout << result[i];
    }
    delete[] result;*/

    /*Zad 2
    const int ROWS_COLS_SIZE = 4;
    int matrix[ROWS_COLS_SIZE][ROWS_COLS_SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    std::cout << getSumOfElementsAboveMainDiagonal(matrix, ROWS_COLS_SIZE);*/

    /*Zad 3
    const int ROWS_COLS_SIZE = 4;
    int matrix[ROWS_COLS_SIZE][ROWS_COLS_SIZE] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    int** result = getTransposeMatrix(matrix, ROWS_COLS_SIZE);
    printMatrix(result, ROWS_COLS_SIZE);
    freeMatrix(result, ROWS_COLS_SIZE);*/

    /* ZADACHI OT PRAKTIKUMI */
    /*Zad 1 - gets a string and a symbol - returns a matrix with all words from text seperated by this symbol
    char text[] = "Hello:my:name:is";
    char symbol = ':';
    getMatrixFromSeperatedWords(text, symbol);*/

    /*Zad 2 - make a recursive function which adds a number on its position in a sorted array
    const int size = 10;
    int nums[size] = { 1, 2, 4, 5 };
    int number = 3;
    addNumberToPositionRec(nums, number, size);
    for (int i = 0; i < 5; i++)
    {
        std::cout << nums[i];
    }*/

    /*Zad 3 - sort array - the left part (the even numbers from min - max), the right part the odd numbers from max - min
    const int size = 6;
    int nums[] = { 1, 2, 3, 6, 5, 4 };
    sortOddEven(nums, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << nums[i] << std::endl;
    }*/

    /*Zad 4 - print odd - even heights in couples from lower to upper height
    const int size = 14;
    int nums[] = { 201, 186, 180, 186, 183, 185, 170, 161, 194, 197, 164, 175, 161, 186 };
    getOddEvenHeights(nums, 14);*/

    /*Zad 5 - make sorted array with only lower letters 
    char* word = sortLower("zAzAbbzazQc");
    std::cout << word;
    delete[] word;*/

    /*Zad 6 - Print subsets of array
    int size = 4;
    int nums[] = { 1, 2, 3, 4 };
    printSubsets(nums, size);*/

    
}