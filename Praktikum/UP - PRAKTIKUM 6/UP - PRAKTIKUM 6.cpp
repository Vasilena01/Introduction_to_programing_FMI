#include <iostream>
#include <iostream>
/*Zad 1
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
bool checkIfPalindrome(const int arr[], int size) {
	bool isPalindrome = false;
	int i = 0;
	while (arr[i] == arr[size - i - 1]) {
		if (i != size) {
			i++;
			continue;
		}
		else {
			isPalindrome = true;
			break;
		}
	}
	return isPalindrome;
}
int main() {
	constexpr int MAX_SIZE = 5;
	int arr[MAX_SIZE];
	getArrayInput(arr, MAX_SIZE);
	std::cout << checkIfPalindrome(arr, MAX_SIZE);
}*/

/*Zad 1
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
void getAverage(const int arr[], int size, double& averageDouble, int& closeToAverage) {
	for (int i = 0; i < size; i++) {
		averageDouble += arr[i];
	}
	averageDouble /= size;
	double difference = averageDouble - arr[0];

	for (int i = 0; i < size; i++) {
		if (abs(arr[i] - averageDouble) < difference) {
			closeToAverage = arr[i];
			difference = abs(arr[i] - averageDouble);
		}
	}


}
int main() {
	constexpr int size = 4;
	int arr[size];
	double averageDouble = 0;
	int closeToAverage = 0;

	getArrayInput(arr, size);
	getAverage(arr, size, averageDouble, closeToAverage);
	std::cout << averageDouble << " " << closeToAverage;
}*/

/*Zad 2
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
bool isSorted(const int arr[], int size) {
	bool isSorted = false;
	int i = 0;
	if (size == 1) {
		return true;
	}

	while (arr[i] <= arr[i + 1]) {
		if (i != size) {
			i++;
			continue;
		}
		else {
			isSorted = true;
			break;
		}
	}

	int i = 0;
	while (arr[i] >= arr[i + 1]) {
		if (i != size) {
			i++;
			continue;
		}
		else {
			isSorted = true;
			break;
		}
	}
	return isSorted;
}
int main() {
	constexpr int size = 4;
	int arr[size];
	getArrayInput(arr, size);
	std::cout << isSorted(arr, size);
}*/

/*Zad 3
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
void reverseElements(int arr[], int size, int position) {
	for (int i = 0; i < position / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[position - i - 1];
		arr[position - i - 1] = temp;
	}

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}
int main() {
	constexpr int size = 5;
	int arr[size];
	int position;
	getArrayInput(arr, size);
	std::cin >> position;
	reverseElements(arr, size, position);
}*/

/*Zad 4
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
int getLongestNumSequence(const int arr[], int size) {
	int countNumsFromLastSequence = 1;
	int counter = 1;
	int result = 1;

	for(int i = 0; i < size; i++) {
		countNumsFromLastSequence = counter;
		counter = 1;
		while (arr[i] == arr[i + 1]) {
			counter++;
			i++;
		}
		if (countNumsFromLastSequence < counter) {
			result = counter;
		}
	}
	return result;
}
int main() {
	constexpr int size = 9;
	int arr[size];
	getArrayInput(arr, size);
	std::cout << getLongestNumSequence(arr, size);
}*/

/*Zad 5
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
int abs(int a, int b) {
	return a < b ? -(a - b) : a - b;
}
void getDifference(const int arr[], int resultArr[], int size) {
	for (int i = 0; i < size; i++) {
		resultArr[i] = abs(arr[i], arr[i + 1]);
	}
}
void printResultArr(const int resultArr[], int sizeOfResultArr) {
	for (int i = 0; i < sizeOfResultArr - 1; i++) {
		std::cout << resultArr[i];
	}
}
int main() {
	constexpr int size = 7;
	int arr[size];
	constexpr int sizeOfResultArr = size;
	int resultArr[sizeOfResultArr];
	getArrayInput(arr, size);
	getDifference(arr, resultArr, size);
	printResultArr(resultArr, sizeOfResultArr);
}*/

/*Zad 6
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
bool isSubArrayFromN(const int arr[], const int secondArr[], int sizeOfSecondArr, int index) {
	for (int j = 1; j < sizeOfSecondArr; j++) {
		if (arr[index + j] != secondArr[j]) {
			return false;
		}
	}
	return true;
}
bool isSubArr(const int arr[], const int secondArr[], int size, int sizeOfSecondArr) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == secondArr[0]) {
			if (isSubArrayFromN(arr, secondArr, sizeOfSecondArr, i)) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	constexpr int size = 6;
	int arr[size];
	constexpr int sizeOfSecondArr = 3;
	int secondArr[sizeOfSecondArr];

	getArrayInput(arr, size);
	getArrayInput(secondArr, sizeOfSecondArr);
	std::cout << isSubArr(arr, secondArr, size, sizeOfSecondArr);
}*/

/*Zad 7
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
void printArr(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << ' ' << arr[i];
	}
}
void shiftArr(int arr[], int size, int index) {

	for (int i = index; i < size - index; i++) {
		arr[i] = arr[i + 1];
	}
}
void removeNegativeDigits(int arr[], int& size) {

	for (int i = 0; i < size; i++) {

		if (arr[i] < 0) {
			shiftArr(arr, size, i);
			i--;
			size--;
		}
	}

	printArr(arr, size);
}
int main() {
	constexpr int maxSize = 100;
	int arr[maxSize];

	int size;
	std::cin >> size;

	getArrayInput(arr, size);
	removeNegativeDigits(arr, size);
}*/

/*Zad 8
void getArrayInput(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}
int countOccurences(const int arr[], int size, int element) {
	int countOccurences = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			countOccurences++;
		}
	}
	return countOccurences;
}
bool isPermutation(const int arr[], const int secondArr[], int size, int sizeOfSecondArr) {
	for (int i = 0; i <= 9; i++) {
		int firstArrOccurences = countOccurences(arr, size, i);
		int secondArrOccurences = countOccurences(secondArr, sizeOfSecondArr, i);

		if (firstArrOccurences != secondArrOccurences) {
			return false;
		}
	}
	
	return true;
}
int main() {
	constexpr int size = 3;
	int arr[size];
	constexpr int sizeOfSecondArr = 3;
	int secondArr[sizeOfSecondArr];

	getArrayInput(arr, size);
	getArrayInput(secondArr, sizeOfSecondArr);
	std::cout << isPermutation(arr, secondArr, size, sizeOfSecondArr);
}*/

