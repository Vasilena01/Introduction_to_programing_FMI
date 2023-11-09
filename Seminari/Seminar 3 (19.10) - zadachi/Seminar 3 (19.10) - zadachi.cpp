#include <iostream>
#include <iomanip>
#include<cmath>




int main()
{
	// ZADACHA OT LEKCIQTA
	/*The multiplication table - silly program, without using functions
	std::cout << "The multiplication table:" << std::endl;

	const int last_value = 10;
	int interval = 3 + 10 * 4;

	std::cout << "#| ";

	for (int first_value_row = 1; first_value_row <= last_value; first_value_row++) {
		std::cout << std::setw(4) << first_value_row;
	}
	std::cout << std::endl;

	for (int first_value_row = 1; first_value_row <= interval; first_value_row++) {
		std::cout << '-';
	}
	std::cout << std::endl;

	for (int first_value_row = 1; first_value_row <= last_value; first_value_row++) {
		std::cout << std::setw(2) << first_value_row << '|';
		for (int first_value_column = 1; first_value_column <= last_value; first_value_column++) {
			std::cout << std::setw(4) << (first_value_column * first_value_row);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;*/

	// ZADACHI OT SEMINARA
	/*Zad 1
	int a, b;
	std::cin >> a >> b;
	int max = a > b ? a : b;
	int lcmCandidate = max;

	while (lcmCandidate % a != 0 || lcmCandidate % b != 0) {
		lcmCandidate += max;
	}
	std::cout << lcmCandidate;*/

	/*Zad 2
	int a, b;
	std::cin >> a >> b;
	int max_value = a > b ? a : b;
	while (a % max_value != 0 || b % max_value != 0) {
		max_value--;
	}
	std::cout << max_value;*/

	/*Zad 2 - Solution Evklid's algorithm
	int n, k;
	std::cin >> n >> k;

	if (n < k) //swap
	{
		int temp = n;
		n = k;
		k = temp;
	}

	while (k != 0)
	{
		int mod = n % k;
		n = k;
		k = mod;
	}

	std::cout << n << std::endl;*/

	/*Zad 3 Prime/Not prime
	unsigned int a;
	std::cin >> a;
	
	if (a <= 1) {
		std::cout << "Not prime" << std::endl;
		return 0;
	}

	bool isPrime = true;
	double sqrtFromNumberToCheck = sqrt(a);
	for (int i = 2; i <= sqrtFromNumberToCheck; i++) {

		if (a % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		std::cout << "Prime";
	}
	else {
		std::cout << "Not prime";
	}*/
	
	/*Zad 4 Razbivane na prosti mnojiteli - nizhodqshto
	int n;
	std::cin >> n;

	for (int i = n; i > 1; i--)
	{
		//check if i is prime
		bool isPrime = true;
		double temp = sqrt(i);
		for (int k = 2; k <= temp; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (!isPrime)
			continue; //we don't need this number,  so we check again (go back to the beginning of the for loop)

		//check how many times n devides i
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		if (count >= 1)
		{
			std::cout << i;
			if (count >= 2)
				std::cout << "^" << count << " ";
		}
	}*/

	/*Zad 5 - Razbivane na prosti mnojiteli vuzhodqshto
	int n;
	std::cin >> n;
	for (int i = 2; i <= n; i++) {

		int count = 0;
		while (n % i == 0) {
			count++;
			n /= i;
		}

		if (count >= 1) {
			std::cout << i << '^' << count << " " << std::endl;
		}
	}*/

	/*Zad 6 Most common number in the given number
	int n;
	std::cin >> n;
	int mostCommonDigit = -1;
	int mostCommonDigitOccurences = 0;

	for (int currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		int copyOfN = n;
		int currentDigitOccurences = 0;

		while (copyOfN != 0)
		{
			int lastDigit = copyOfN % 10;
			if (lastDigit == currentDigit)
				currentDigitOccurences++;
			copyOfN /= 10; //removes the last digit;
		}

		if (currentDigitOccurences > mostCommonDigitOccurences) {
			mostCommonDigit = currentDigit;
			mostCommonDigitOccurences = currentDigitOccurences;
		}
		/* When the number of mostCommonDigits is equal, then return the biggest num in the number
		else if (currentDigit > mostCommonDigit && currentDigitOccurences == mostCommonDigitOccurences) {
			mostCommonDigit = currentDigit;
			mostCommonDigitOccurences = currentDigitOccurences;
		}*\/
	}
	std::cout << mostCommonDigit;*/

	/*Zad 7 - Pqsuchen chasovnik - reshenie 1
	int n;
	do {
		std::cin >> n;
	} 
	while (n % 2 == 0);

	for (int i = n; i > 0; i-=2) {
		std::cout << std::setw(2) << std::string(i, '*') << std::endl;
	}
	for (int i = 3; i <= n; i += 2) {
		std::cout << std::setw(2) << std::string(i, '*') << std::endl;
	}*/

	/*Zad 7 - Pqsuchen chasovnik - reshenie 2
	int n;
	do {
		std::cin >> n;
	} while (n % 2 == 0);

	for (int i = n; i > 0; i -= 2) {
		int whitespaceCount = (n - i) / 2;

		for (int j = 0; j < whitespaceCount; j++) {
			std::cout << " ";
		}

		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}
	for (int tableSize = 3; tableSize <= n; tableSize += 2) {
		int whitespaceCount = (n - tableSize) / 2;

		for (int j = 0; j < whitespaceCount; j++) {
			std::cout << " ";
		}

		for (int j = 0; j < tableSize; j++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}*/

	// ZADACHI ZA DOMASHNO
	/*Zad 1 - Sbor na chisla, dokato ne se vuvede 0
	int n;
	int result = 0;
	do {
		std::cin >> n;
		result += n;
	} while (n != 0);

	std::cout << result;*/
	
	/*Zad 6 - Resheniq na polinom
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	for (int x = -100; x <= 100; x++) {
		int res = a * std::pow(x, 4) + b * std::pow(x, 3) + c * std::pow(x, 2) + d * x + e;
		if (res >= 0) {
			std::cout << x << " ";
		}
	}*/
}

