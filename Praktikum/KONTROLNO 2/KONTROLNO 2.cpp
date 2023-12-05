#include <iostream>

// Zadachi ot seminari
/*Seminar 8 Zad 2
int getNumberOfOnes(int num) {
	int numToRight = num >> 1;
	return num ^ numToRight;

}
int main() {
	int num;
	std::cin >> num;

	std::cout << getNumberOfOnes(num);
}*/

//Zadachi ot kontrolno
/*Zad 1
void getInput(int& n) {
	std::cin >> n;
	if (n < 3 || n > 16) {
		std::cout << "Incorrect input.";
		return;
	}
}

bool areNumsTrion(int n) {
	int current;
	int previous;
	int next = 0;
	bool isTrion = false;

	std::cin >> previous >> current;

	for (int i = 2; i < n; i++) {
		std::cin >> next;

		if ((current < previous && current < next) || (current > previous && current > next)) {
			isTrion = true;
		}
		else {
			isTrion = false;
		}
		previous = current;
		current = next;
	}

	return isTrion;
}*/

/*Zad 2*/
// 1 2 1 1 2 1 | 3 4 5 5 4 3 
void getArrayInput(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
}

int findIndexOfMatchingElement(const int arr[], size_t size, int element)
{
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] == element) {
			return i;
		}
	}
}

bool isArrPalindrome(const int arr[], int firstIndex, int lastIndex) {

	bool isPalindrome = false;
	int to = firstIndex + (lastIndex - firstIndex) / 2;
	for (int i = firstIndex + 1; i <= to; i++) {
		lastIndex -= 1;
		if (arr[i] == arr[lastIndex]) {
			isPalindrome = true;
		}
		else {
			isPalindrome = false;
		}
	}
	return isPalindrome;
}

bool isArrConcatOfTwoPalindromeArrays(const int arr[], size_t size) {

	for (int i = size; i >= 0; i--) {
		int firstIndexOfSecondArr = findIndexOfMatchingElement(arr, size, arr[i]);
		bool isSecondArrPalindrome = isArrPalindrome(arr, firstIndexOfSecondArr, i);

		int lastIndexOfFirstArr = firstIndexOfSecondArr - 1;
		bool isFirstArrPalindrome = isArrPalindrome(arr, 0, lastIndexOfFirstArr);

		if (isFirstArrPalindrome && isSecondArrPalindrome) {
			return true;
		}
		else {
			continue;
		}
	}
	return false;
}

int main() {
	/* Zad 1
	int n = 0;
	getInput(n);

	std::cout << areNumsTrion(n);*/

	/*Zad 2*/
	constexpr int SIZE = 12;
	int arr[SIZE];
	getArrayInput(arr, SIZE);
	std::cout << isArrConcatOfTwoPalindromeArrays(arr, SIZE);
}

