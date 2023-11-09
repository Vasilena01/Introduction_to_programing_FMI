#include <iostream>

int main()
{
    /* Zad 1 
    int a, b;
    std::cout << "Divident: ";
    std::cin >> a;
    std::cout << "Divisor: ";
    std::cin >> b;

    int res = a / b;
    int rest = a % b;
    std::cout << "The quotient of the division is : " << res << std::endl;
    std::cout << "The remainder of the division is : " << rest << std::endl;*/

    /* Zad 2 
    int a;
    std::cout << "SM:";
    std::cin >> a;
    double b = a * 0.393701;
    std::cout << "Inches:" << b; */

    /* Zad 3
    double a, b;
    std::cout << "Length: ";
    std::cin >> a;
    std::cout << "Width: ";
    std::cin >> b;
    std::cout << "Perimeter:" << 2*(a+b) << std::endl;
    std::cout << "Area:" << a * b; */

    /* Zad 4 */
    int s;
    std::cout << "Seconds: ";
    std::cin >> s;
    
    int days = s / 86400;
    s -= days * 86400;
    int hours = (s  - days) / 3600;
    s -= hours * 3600;
    int minutes = s / 60;
    s -= minutes * 60;
    std::cout << days << " days" << hours << " hours" << minutes << " minutes" << s << " seconds"; 

    /* Zad 5
    int a, b, c, d;
    std::cout << "First interval: ";
    std::cin >> a >> b;
    std::cout << "Second interval: ";
    std::cin >> c >> d;
    bool res = (c > a && d > b) || (c > a && d < b) || (a > c && b > d);
    std::cout << res; */

    /*Zad 6 
    int a, b, c, d;
    int sum_even = 0;
    std::cin >> a >> b >> c >> d;
    std::cout << (a % 2) * a + (a % 2) * b + (c % 2) * c + (d % 2) * d;*/

    /*Zad 7
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (b == a + (b - a) && c == a + (2 * (b - a)) && d == a + (3 * (b - a)));*/

    /*Zad 8
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (b == a*(b/a) && c == b*(b/a) && d == c*(b/a));*/

    /*Zad 9
    double a, b;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "First number: " << a << std::endl;
    std::cout << "Second number: " << b;*/
 
    /*Zad 10
    double a, b;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << (a > b)* a + (b > a) * b;*/

    /*Zad 11
    int a;
    std::cin >> a;
    std::cout << (a >= 10 && a <= 99) * a + (a <= 10 || a >= 99) * (a % 10);*/
}

