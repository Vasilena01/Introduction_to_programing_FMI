#include <iostream>

/*Zad 1
int abs(int num) {
	if (num < 0) {
		num *= -1;
		return num;
	}
	else {
		return num;
	}
}

double fabs(double num) {
	if (num < 0) {
		num *= -1;
		return num * (-1);
	}
	else {
		return num;
	}
}

int main() {
	std::cout << abs(-5);
	std::cout << fabs(-12.34);
}*/

/*Zad 2
char to_lower(char ch) {
	int ch_num = ch;
	ch_num += 32;
	return ch = ch_num;
}

char to_upper(char ch) {
	int ch_num = ch;
	ch_num -= 32;
	return ch = ch_num;
}

int main() {
	char letter;
	std::cin >> letter;
	int char_num = letter;
	if (char_num >= 65 && char_num <= 90) {
		std::cout << to_lower(letter);
	}
	else if (char_num >= 97 && char_num <= 122) {
		std::cout << to_upper(letter);
	}
	else {
		std::cout << "Invalid symbol.";
	}
}*/

/*Zad 3
int convertCharToInt(char ch) {
	int n = ch - '0';
	return n;

}

char convertIntToChar(int n) {
	char c = n + 48;
	return c;
}

int main() {
	std::cout << convertCharToInt('7');
	std::cout convertIntToChar(3);
}*/

/*Zad 4
int getNumberLength(unsigned n) {
	int counter = 0;
	if (n == 0) {
		return counter = 1;
	}
	while (n != 0) {
		n /= 10;
		counter++;
	}
	return counter;
}
int main() {
	unsigned n;
	std::cin >> n;
	std::cout << getNumberLength(n);
}*/

/*Zad 5
unsigned convertNumber(unsigned mynumber) {
	unsigned convertNumber = 0;
	while (mynumber != 0) {
		convertNumber *= 10;
		convertNumber += (mynumber % 10);
		mynumber /= 10;
	}
	return convertNumber;
}
unsigned getNumberPlace(unsigned mynumber, unsigned place) {
	unsigned number = 0;
	mynumber = convertNumber(mynumber);

	if (place == 0) {
		return mynumber % 10;
	}

	for (int i = place; i > 0; i--) {
		number = mynumber % 10;
		mynumber /= 10;
	}
	return number;
}
int main() {
	unsigned mynumber, place;
	std::cin >> mynumber >> place;
	std::cout << getNumberPlace(mynumber, place);
}*/

/*Zad 6
unsigned getRest(unsigned a, unsigned b) {
	unsigned result = 0;
	result = a / b;
	if (b * result == a || a < b) {
		return 0;
	}
	else {
		return a - (b * result);
	}
}
int main() {
	unsigned a, b;
	std::cin >> a >> b;
	std::cout << getRest(a, b);
}*/

/*Zad 7
unsigned getQuotient(unsigned a, unsigned b) {
	if (b == 0) {
		return 0;
	}

	int number = b;
	int quotient = 0;

	while (number <= a) {
		number += b;
		quotient++;
	}
	return quotient;
}
int main() {
	unsigned a, b;
	std::cin >> a >> b;
	std::cout << getQuotient(a, b);
}*/

/*Zad 8
unsigned squareRoot(int n) {
	for (int i = 1; i <= 9; i++) {
		if (((i + 1) * (i + 1)) > n) {
			return i;
			break;
		}
	}
}
int main() {
	unsigned n;
	std::cin >> n;
	std::cout << squareRoot(n);
}*/

/*Zad 9
bool isExactSquareRoot(unsigned n) {
	for (int i = n; i >= 1; i--) {
		if ((i * i) == n) {
			return 1;
		}
	}
	return 0;
}
int main() {
	unsigned n;
	std::cin >> n;
	if (isExactSquareRoot(n)) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}
}*/

/*Zad 10
unsigned leastCommonMultiple(unsigned a, unsigned b) {
	unsigned multiple = 0;
	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			multiple = i;
			break;
		}
	}
	return multiple;
}
int main() {
	unsigned a, b, c;
	std::cin >> a >> b >> c;
	int currentMultiple = leastCommonMultiple(a, b);
	std::cout << leastCommonMultiple(currentMultiple, c);
}*/

/*Zad 11
// Функция за изчисление на разстояние между две точки (x1, y1) и (x2, y2)
int distanceBetweenTwoCoordinates(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// Функция за проверка дали триъгълник се намира в окръжност с център (0,0) и радиус r
bool isTriangleInCircle(int x1, int y1,  int x2, int y2, int x3, int y3, int r) {
	// Изчисляваме разстоянията от центъра (0,0) до всеки от върховете на триъгълника
	int d1 = distanceBetweenTwoCoordinates(0, 0, x1, y1);
	int d2 = distanceBetweenTwoCoordinates(0, 0, x2, y2);
	int d3 = distanceBetweenTwoCoordinates(0, 0, x3, y3);

	if (d1 > r || d2 > r || d3 > r) {
		return 0;
	}
	return 1;
}
int main() {
	int x1, y1, x2, y2, x3, y3, r;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;
	if (isTriangleInCircle(x1, y1, x2, y2, x3, y3, r)) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}*/

/*Zad 12
int convertNumber(int second) {
	unsigned convertNumber = 0;
	while (second != 0) {
		convertNumber *= 10;
		convertNumber += (second % 10);
		second /= 10;
	}
	return convertNumber;
}
int concat(int first, int second) {
	int result = first;
	int convertSecond = convertNumber(second);

	while(convertSecond != 0) {
		result *= 10;
		result += convertSecond % 10;;
		convertSecond /= 10;
	}

	if (second % 10 == 0) {
		return result * 10;
	}

	return result;
}
int main() {
	int first, second;
	std::cin >> first >> second;
	std::cout << concat(first, second);
}*/

/*Zad 13
int getSumOfDigits(int n) {
	int sum = 0;

	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int n;
	std::cin >> n;

	int result = n;
	while (result >= 10) {
		result = getSumOfDigits(result);
	}

	std::cout << result;
}*/

/*Zad 14
unsigned concatDigitAtBack(unsigned n, unsigned digit)
{
	return n * 10 + digit;
}
unsigned countDigitOccurences(unsigned n, unsigned digit)
{
	if (digit == 0 && n == 0)
		return 1;

	unsigned count = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		if (lastDigit == digit)
			count++;
		n /= 10;
	}
	return count;
}
unsigned concatCountTimesDigit(unsigned a, unsigned digit, unsigned count) {
	unsigned result = a;
	for (int i = 0; i < count; i++)
		result = concatDigitAtBack(result, digit);
	return result;
}
int sortNumber(int n) {
	int result = 0;

	for (int i = 0; i <= 9; i++) {
		unsigned count = countDigitOccurences(n, i);
		result = concatCountTimesDigit(result, i, count);
	}

	return result;
}
int main() {
	int n;
	std::cin >> n;
	std::cout << sortNumber(n);
}*/