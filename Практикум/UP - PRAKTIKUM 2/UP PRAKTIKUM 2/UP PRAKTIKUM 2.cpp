#include <iostream>

int main()
{
	/*Zad 1
	int n;
	std::cin >> n;
	switch (n) {
		case 1:std::cout << "I"; break;
		case 2:std::cout << "II"; break;
		case 3:std::cout << "III"; break;
		case 4:std::cout << "IV"; break;
		case 5:std::cout << "V"; break;
		case 6:std::cout << "VI"; break;
		case 7:std::cout << "VII"; break;
		case 8:std::cout << "VIII"; break;
		case 9:std::cout << "IX"; break;
		default:std::cout << "Invalid number"; break;
	}*/

	/*Zad 2
	char c;
	std::cin >> c;
	int code = c;
	switch (c) {
		case 'I': case 'V': case 'X': case 'M': case 'D':
			std::cout << code; break;
		default: std::cout << -1; break;
	}*/

	/*Zad 3
	int year;
	std::cin >> year;
	
	if (year % 4 == 0  && year % 100 != 0 || year % 400 == 0) {
		std::cout << "Leap year";
	}
	else {
		std::cout << "Not leap year";
	}*/

	/*Zad 4
	char letter;
	std::cin >> letter;
	int code = letter;
	
	if (code >= 65 && code <= 90) {
		code += 32;
		letter = code;
		std::cout << letter << std::endl;

		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
			std::cout << "Vowel";
		}
		else {
			std::cout << "Consonant";
		}
	}
	else if (code >= 97 && code <= 122) {
		code -= 32;
		letter = code;
		std::cout << letter << std::endl;

		if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
			std::cout << "Vowel";
		}
		else {
			std::cout << "Consonant";
		}
	}
	else {
		std::cout << "Invalid character";
	}*/

	/*Zad 5
	int x, y, z;
	std::cin >> x >> y >> z;
	if (x <= y && y <= z) {
		std::cout << x << " " << y << " " << z;
	}
	else if (x <= z && z <= y) {
		std::cout << x << " " << z << " " << y;
	}
	else if (z <= y && y <= x) {
		std::cout << z << " " << y << " " << x;
	}
	else if (z <= x && x <= y) {
		std::cout << z << " " << x << " " << y;
	}
	else if (y <= z && z <= x) {
		std::cout << y << " " << z << " " << x;
	}
	else if (y <= x && x <= z) {
		std::cout << y << " " << x << " " << z;
	} */

	/*Zad 6
	int x;
	std::cin >> x;

	if (x == 0) {
		std::cout << "zero" << std::endl;
	}
	if (x % 2 == 0) {
		std::cout << "even" << std::endl;
	}
	else {
		std::cout << "odd" << std::endl;
	} */

	/*Zad 7
	int x, y, z;
	std::cin >> x >> y >> z;
	if (x <= y && y <= z) {
		std::cout << z << y << x;
	}
	else if (x <= z && z <= y) {
		std::cout << y << z << x;
	}
	else if (z <= y && y <= x) {
		std::cout << x << y << z;
	}
	else if (z <= x && x <= y) {
		std::cout << y << x << z;
	}
	else if (y <= z && z <= x) {
		std::cout << x << z << y;
	}
	else if (y <= x && x <= z) {
		std::cout << z << x << y;
	} */

	/*Zad 8
	int r, x, y;
	std::cin >> r >> x >> y;
	if (x * x + y * y == r * r) {
		std::cout << "On the circle";
	}
	else if (x * x + y * y < r * r) {
		std::cout << "In the circle";
	}
	else {
		std::cout << "Out of the circle";
	}*/

	/*Zad 9
	int day, month, year;
	std::cin >> day >> month >> year;
	std::cout << (day >= 1 && day <= 31) && (month >= 1 && month <= 12) && (year >= 1000 && year <= 3000);*/

	/*Zad 10
	double x, y;
	char operation;
	std::cin >> x >> operation >> y;
	if (operation == '+') {
		std::cout << x + y;
	}
	else if (operation == '-') {
		std::cout << x - y;
	}
	else if (operation == '*') {
		std::cout << x * y;
	}
	else if (operation == '/' && y != 0) {
		std::cout << x / y;
	}
	else {
		std::cout << "Invalid operation.";
	}*/

	/*Zad 11
	int n;
	std::cin >> n;
	int t = (n - (n % 1000)) / 1000;
	int h = (n % 1000 - n % 100) / 100;
	int e = n % 10;
	int d = (n - (t * 1000 + h * 100 + e)) / 10;
	int new_num1 = t * 10 + e;
	int new_num2 = h * 10 + d;

	if (new_num1 == new_num2) {
		std::cout << new_num1 << " = " << new_num2;
	}
	else if (new_num1 > new_num2) {
		std::cout << new_num1 << " > " << new_num2;
	}
	else {
		std::cout << new_num1 << " < " << new_num2;
	}*/
	
	/*Zad 12
	* int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((a <= b && b >= c && c <= d && d >= e) || 
        (a >= b && b <= c && c >= d && d <= e)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";*/


}


