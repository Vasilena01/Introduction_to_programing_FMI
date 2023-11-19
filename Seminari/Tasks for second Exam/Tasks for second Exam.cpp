#include <iostream>

/*Zad 1 - Return max digit from a given array
void getArrayInput(int arr[], size_t size)
{
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
int getMaxDigitFromArr(const int arr[], size_t size)
{
	int maxDigit = 0;
	for (int i = 0; i < size; i++) {
		if (maxDigit < arr[i]) {
			maxDigit = arr[i];
		}
	}
	return maxDigit;
}
int main()
{
	constexpr int size = 10;
	int arr[size];
	getArrayInput(arr, size);
	std::cout << getMaxDigitFromArr(arr, size);
}*/

/*Zad 2 - Convert seconds to HH:MM
void convertSecondsToHoursMinutes(unsigned seconds, unsigned& hours, unsigned& minutes) {
	while (seconds != 0) {
		hours += seconds / 3600;
		minutes += (seconds % 3600) / 60;
		seconds /= 3600;
	}
}
int main()
{
	unsigned seconds;
	unsigned hours = 0;
	unsigned minutes = 0;

	do {
		std::cin >> seconds;
	} while (seconds > 86000);

	convertSecondsToHoursMinutes(seconds, hours, minutes);

	hours < 10 ? std::cout << '0' << hours << ':' : std::cout << hours << ':';
	minutes < 10 ? std::cout << '0' << minutes : std::cout << minutes;
}*/

/*Zad 3 - Return sum of elements with nonprime index
double getSumOfElementsWithNonPrimeIndex(const double arr[], size_t size)
{
	double sum = 0;
	if (size == 1) {
		return arr[0];
	}

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0) {
			sum += arr[i];
		}
	}
	return sum;
}
int main()
{
	constexpr int sizeFirstArr = 1;
	constexpr int sizeSecondtArr = 3;
	constexpr int sizeRandomArr = 5;

	double arrWithOneElement[sizeFirstArr] = { 2.5 };
	double arrWithThreeElemets[sizeSecondtArr] = { 1.56, 2.46, 3.89 };
	double randomArr[sizeRandomArr] = { 1, 3.56, 6.45, 7, 8.67 };


	std::cout << getSumOfElementsWithNonPrimeIndex(arrWithOneElement,sizeFirstArr) << std::endl;
	std::cout << getSumOfElementsWithNonPrimeIndex(arrWithThreeElemets, sizeSecondtArr) << std::endl;
	std::cout << getSumOfElementsWithNonPrimeIndex(randomArr, sizeRandomArr);
}*/

/*Zad 4 Get the arithmetic mean of all digits in a given number
int getArithmeticMeanOfAllDigits(int num)
{
	int mean = 0;
	int countOfDigits = 0;

	if (num < 10) {
		return num;
	}

	while (num != 0) {
		mean += num % 10;
		countOfDigits++;
		num /= 10;
	}

	return mean / countOfDigits;
}
int main() 
{
	int oneDigitNum = 5;
	int twoDigitsNum = 59;
	int randomNum = 98347;

	std::cout << getArithmeticMeanOfAllDigits(oneDigitNum) << std::endl;
	std::cout << getArithmeticMeanOfAllDigits(twoDigitsNum) << std::endl;
	std::cout << getArithmeticMeanOfAllDigits(randomNum) << std::endl;
}*/

/*Zad 5 - Get the sum of the prime numbers in array
int getSumOfPrimeNums(const int arr[], size_t size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}

	return sum;
}
int main()
{
	constexpr int sizeFirstArr = 1;
	constexpr int sizeSecondtArr = 3;
	constexpr int sizeRandomArr = 5;

	int arrWithOneElement[sizeFirstArr] = { 6 };
	int arrWithThreeElemets[sizeSecondtArr] = { 5, 8, 24 };
	int randomArr[sizeRandomArr] = { 478, 333, 23, 78, 19 };


	std::cout << getSumOfPrimeNums(arrWithOneElement, sizeFirstArr) << std::endl;
	std::cout << getSumOfPrimeNums(arrWithThreeElemets, sizeSecondtArr) << std::endl;
	std::cout << getSumOfPrimeNums(randomArr, sizeRandomArr);
}*/

/*Zad 6 - Get the sum of numbers digits
int getSumOfDigits(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	int oneDigitNum = 5;
	int twoDigitsNum = 59;
	int randomNum = 98347;

	std::cout << getSumOfDigits(oneDigitNum) << std::endl;
	std::cout << getSumOfDigits(twoDigitsNum) << std::endl;
	std::cout << getSumOfDigits(randomNum) << std::endl;
}*/

