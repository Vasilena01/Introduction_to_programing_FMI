

#include <iostream>

int main()
{
	/*Zad 1
	int n, m;
	std::cin >> n >> m;

	if (n > m && n <= 255 && n >= 0) {
		for (int i = m; i <= n; i++) {
			char n_char = i;
			std::cout << i << " --> " << n_char << std::endl;
		}
	}
	else if (m > n && m <= 255 && m >= 0) {
		for (int i = n; i <= m; i++) {
			char n_char = i;
			std::cout << i << " --> " << n_char << std::endl;
		}
	}
	else {
		std::cout << "Invalid codes!";
	}*/

	/*Zad 2
	int n;
	int res = 1;
	std::cin >> n;
	for (int i = n; i > 1; i--) {
		res *= i;
	}
	std::cout << res;*/

	/*Zad 3
	int n;
	int res = 0;
	std::cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			res += j;
		}
	}
	std::cout << res;*/

	/*Zad 4
	int n;
	int current = 0;
	int res = 0;
	std::cin >> n;
	for (int i = 0; i <= n; i++) {
		current = current * 10 + 9;
		res += current;
	}
	std::cout << res;*/

	/*Zad 5
	int n;
	int res = 0;
	int first = 0;
	int second = 1;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << first << " ";

		res = first + second;
		first = second;
		second = res;
	}*/

	/*Zad 6
	int n;
	std::cin >> n;

	int num;
	int res = 0;
	do {
		std::cin >> num;
		if (num < n && num % 2 == 0) {
			res += num;
		}
	} while (num != -1);
	std::cout << res; */

	/*Zad 7
	int n, m;
	std::cin >> n >> m;
	int max = n > m ? n : m;
	int min = n < m ? n : m;
	int res = 0;

	for (int i = min; i <= max; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				res += j;
			}
		}

		if (i == res) {
			std::cout << i << std::endl;
		}
		res = 0;
	}*/

	/*Zad 8
	int n;
	std::cin >> n;

	for (int k = 0; k <= n/2; k++) {
		bool isPrime = true;

		//Check if the first number is prime
		if (k == 0 || k == 1) {
			isPrime = false;
		}

		double sqrk = sqrt(k);
		for (int i = 2; i <= sqrk; i++) {
			if (k % i == 0) {
				isPrime = false;
			}
		}

		//If the first number is prime, than check if the second number is prime
		if (isPrime) {
			if (n - k == 0 || n - k == 1) {
				isPrime = false;
			}

			double sqrp = sqrt(n - k);
			for (int i = 2; i <= sqrp; i++) {
				if ((n - k) % i == 0) {
					isPrime = false;
				}
			}
		}

		//If both numbers are prime
		if (isPrime) {
			std::cout << n << " = " << k << " + " << n - k << std::endl;
		}
	}*/

	/*Zad 9
	int n, num;
	do {
		std::cin >> n;
	} while (n <= 2);

	int max = 0;
	int secondMax = 0;
	do {
		std::cin >> num;
		n--;

		if (num >= secondMax && secondMax <= max) {
			secondMax = num;
			continue;
		}
		if (secondMax <= num) {
			max = num;
			continue;
		}

	} while (n > 0);
	std::cout << max << secondMax;*/

	/*Zad 10
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << "$";
		}
		std::cout << std::endl;
	}*/

	/*Zad 11
	int n;
	std::cin >> n;
	int c = 0;
	while (c <= n) {
		c++;
		if (c == 1) {
			for (int j = 1; j <= n; j++) {
				if (j == 1) {
					std::cout << "+";
					continue;
				}
				else if (j == n) {
					std::cout << "+";
					break;
				}
				else {
					std::cout << " - ";
					continue;
				}
			}
			std::cout << std::endl;
			continue;
		}
		else if (c == n) {
			for (int j = 1; j <= n; j++) {
				if (j == 1) {
					std::cout << "+";
					continue;
				}
				else if (j == n) {
					std::cout << "+";
					break;
				}
				else {
					std::cout << " - ";
					continue;
				}
			}
			std::cout << std::endl;
			break;
		}
		else {
			for (int j = 1; j <= n; j++) {
				if (j == 1) {
					std::cout << "|";
					continue;
				}
				else if (j == n) {
					std::cout << "|";
					break;
				}
				else {
					std::cout << " - ";
					continue;
				}
			}
			std::cout << std::endl;
			continue;
		}
	}*/

	/*Zad 12
	int n;
	std::cin >> n;
 
	// Loop for the rows
	for (int i = 1; i <= 2 * n - 1; i++) {
 
		// Loop for the columns 1/3
		for (int k = 1; k <= n; k++) {
			if (k <= i && i <= n) {
				std::cout << k << " ";
			}
			else if (k <= n-(i-n) && i > n) {
				std::cout << k << " ";
			}
			else {
				std::cout << "  ";
			}
		}
 
		// Loop for the columns 2/3
		for (int k = 1; k <= n; k++) {
			if (i == n) {
				std::cout << "-";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << " ";
 
 
		// Loop for the columns 3/3
		for (int k = n; k >= 1; k--) {
			if (k <= i && i <= n) {
				std::cout << k << " ";
			}
			else if (k <= n-(i - n) && i > n) {
				std::cout << k << " ";
			}
			else {
				std::cout << "  ";
			}
		}
 
		std::cout << std::endl;
	}*/

	/*Zad 13 - Nevalidno reshenie
	int n;
	std::cin >> n;
	int c = 0;
	while (c <= n * 2 + 3) {
		c++;
		// Check for the first row
		if (c == 1) {
			for (int j = 1; j <= n + 2; j++) {
				std::cout << "#";
			}
			std::cout << std::endl;
			continue;
		}
		// Check for all rows between the first and the n + 2 (the middle one)
		else if (c > 1 && c < n + 2) {
			for (int j = n + 2; j >= 1; j--) {
				if (j == 1) {
					std::cout << "#";
					break;
				}
				else if (j == n + 2) {
					std::cout << "#";
					continue;
				}
				else {
					for (int i = j - 2; i >= 1; i--) {
						for (int k = j - 2; k > 0; k--) {
							int num = (i + k - 1) % n + 1;
							std::cout << num;
						}
						std::cout << std::endl;
						break;
					}
					continue;
				}
			}
			std::cout << std::endl;
			continue;
		}
		// Check for the middle row
		else if (c == n + 2) {
			for (int j = 1; j <= n + 2; j++) {
				if (j == 1) {
					std::cout << "#";
					continue;
				}
				else if ((j == n && n % 2 != 0) || (n % 2 == 0 && (j == n || j == n - 1))) {
					std::cout << "X";
					continue;
				}
				else if (j == n + 2) {
					std::cout << "#";
					break;
				}
				else {
					std::cout << " ";
					continue;
				}
			}
			std::cout << std::endl;
			continue;
		}
		// Check for all rows between the n + 2 (the middle one) and the last row
		else if (c > n + 2 && c < (n * 2) + 3) {
			for (int j = 1; j <= n + 2; j++) {
				if (j == 1) {
					std::cout << "#";
					continue;
				}
				else if (j == n + 2) {
					std::cout << "#";
					break;
				}
				else {

				}
			}
			std::cout << std::endl;
			continue;
		}
		// Check for the last row
		else if (c == (n * 2) + 3) {
			for (int j = 1; j <= n + 2; j++) {
				std::cout << "#";
			}
			std::cout << std::endl;
			break;
		}
	}*/

	/*Zad 13 - Nanovo xd - nqkoga shte dovursha i gornoto reshenie
	int n;
	std::cin >> n;

	// Loop for the first row
	for (int i = 1; i <= n + 2; i++) {
		std::cout << "#";
	}
	std::cout << std::endl;

	// Loop for all rows between the first and the n + 2 (the middle one)
	for (int k = 0; k < n; k++) {

		for (int i = 0; i <= n + 1; i++) {

			if (i == 0 || i == n + 1) {
				std::cout << "#";
			}
			else
			{
				int num = (i + k) % n;
				std::cout << (num == 0 ? n : num);
			}

		}

		std::cout << std::endl;

	}

	// Check for the middle row
	for (int j = 1; j <= n + 2; j++) {
		if (j == 1 || j == n + 2) {
			std::cout << "#";
			continue;
		}
		else if ((j == n && n % 2 != 0) || (n % 2 == 0 && (j == n || j == n - 1))) {
			std::cout << "X";
			continue;
		}
		else {
			std::cout << " ";
			continue;
		}

	}

	std::cout << std::endl;


	// Loop for all rows between the n + 2 (the middle one) and the last row
	for (int k = n; k > 0; k--) {

		for (int i = n + 1; i >= 0; i--) {

			if (i == 0 || i == n + 1) {
				std::cout << "#";
			}
			else
			{
				int num = ((n - i) + k) % n;
				std::cout << (num == 0 ? n : num);
			}

		}

		std::cout << std::endl;
	}

	// Loop for the last row
	for (int i = 1; i <= n + 2; i++) {
		std::cout << "#";
	}*/

	/*Zad 14
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {

			int lastElement = k * n;

			if (k % 2 == 0) {
				lastElement += n - i;
			}
			else {
				lastElement += i - 1;
			}

			std::cout << lastElement + 1 - n << " ";
		}
		std::cout << std::endl;
	}*/

}

