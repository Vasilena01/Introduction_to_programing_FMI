#include <iostream>

int main()
{
    /* Zad 1
    int week_day;
    std::cin >> week_day;
    switch(week_day) {
        case 1:std::cout << "Monday"; break;
        case 2:std::cout << "Tuesday"; break;
        case 3:std::cout << "Wednesday"; break;
        case 4:std::cout << "Thursday"; break;
        case 5:std::cout << "Friday"; break;
        case 6:std::cout << "Saturday"; break;
        case 7:std::cout << "Sunday"; break;
        default:std::cout << "Invalid day!"; break;
    }*/

    /*Zad 2
    int num;
    std::cin >> num;
    if (num < 100) {
        std::cout << "Less than 100";
    }
    else if (num <= 200) {
        std::cout << "Between 100 and 200";
    }
    else {
        std::cout << "Greater than 200";
    } */

    /*Zad 3
    int speed;
    std::cin >> speed;
    if (speed < 10) {
        std::cout << "Slow";
    }
    else if (speed < 50) {
        std::cout << "Average";
    }
    else if (speed < 150) {
        std::cout << "Fast";
    }
    else if (speed < 1000) {
        std::cout << "Ultra fast";
    }
    else {
        std::cout << "Extremely fast";
    }*/

    /*Zad 4
    char figure;
    std::cin >> figure;
    if (figure == 's') {
        double a;
        std::cin >> a;
        std::cout << std::round((a * a) * 1000.0) / 1000.0;
    }
    else if (figure == 'r') {
        double a, b;
        std::cin >> a >> b;
        std::cout << std::round((a * b) * 1000.0) / 1000.0;
    }
    else if (figure == 'c') {
        const double PI = 3.141592653589793238463;
        double r;
        std::cin >> r;
        std::cout << std::round((PI * (r * r) * 1000.0)) / 1000.0;
    }
    else if (figure == 't') {
        double a,h;
        std::cin >> a >> h;
        std::cout << std::round(((a * h) / 2) * 1000.0) / 1000.0;
    }
    else {
        std::cout << "Invalid figure";
    }*/

    /*Zad 5 Solution 1
    int hours, minutes;
    std::cin >> hours >> minutes;

    (minutes += 15) %= 60;

    if (minutes < 15) {
        (hours += 1) %= 24;
    }

    if (hours <= 9) {
        std::cout << 0;
    }
    std::cout << hours << ":";
    
    if (minutes <= 9) {
        std::cout << 0;
    }
    std::cout << minutes << std::endl;*/

    /*Zad 5 Solution 2
    if ((minutes + 15 < 0 || minutes + 15 > 59) && (hours >= 0 && hours < 23)) {
        minutes = (minutes + 15) - 60;
        hours += 1;
    }
    else if ((minutes + 15 > 59) && hours >= 23) {
        minutes = (minutes + 15) - 60;
        hours = 24 - (hours + 1);
    }
    else {
        minutes += 15;
    }

    if ((hours >= 0 && hours <= 9) && (minutes >= 0 && minutes <= 9)) {
        std::cout << "0" << hours << ":" << "0" << minutes;
    }
    else if ((hours >= 0 && hours <= 9) && (minutes > 9)) {
        std::cout << "0" << hours << ":" << minutes;
    }
    else if ((minutes >= 0 && minutes <= 9) && (hours > 9)) {
        std::cout << hours << ":" << "0" << minutes;
    }
    else {
        std::cout << hours << ":" << minutes;
    }*/

    /*Zad 6
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((a <= b && b >= c && c <= d && d >= e) || 
        (a >= b && b <= c && c >= d && d <= e)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }*/

    /*Zad 7
    int r, x, y;
    std::cin >> r >> x >> y;
    if (x * x + y * y ==  r * r) {
        std::cout << "On the circle";
    }
    else if (x * x + y * y < r * r) {
        std::cout << "In the circle";
    }
    else {
        std::cout << "Out of the circle";
    }*/




    
}

