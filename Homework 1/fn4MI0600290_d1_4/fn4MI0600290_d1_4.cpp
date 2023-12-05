/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Ventsislavova Stanoyska
* @idnumber 4MI0600290
* @task 4
*
*/

#include <iostream>
bool getInput(unsigned& startYear, unsigned& startMonth, unsigned& startDay,
    unsigned& endYear, unsigned& endMonth, unsigned& endDay, unsigned& interval)
{
    std::cin >> startYear >> startMonth >> startDay >> endYear >> endMonth >> endDay >> interval;

    // Validating the input
    if ((startYear < 1600 || startYear > 2100) || (endYear < 1600 || endYear > 2100) || (startYear > endYear) ||
        (startMonth < 1 || startMonth > 12) || (endMonth < 1 || endMonth > 12) ||
        (startDay < 1 || startDay > 31) || (endDay < 1 || endDay > 31) || 
        ((startDay > endDay) && (startMonth > endMonth) && (startYear > endYear)) ||
        (interval < 1 || interval > 365) ||
        (startYear == 1916 && startMonth == 4 && (startDay >= 1 && startDay <= 13)))
    {
        std::cout << "Incorrect input.";
        return false;
    }
   
    return true;
}

bool isLeapYear(unsigned year)
{
    if ((year <= 1916 && year % 4 == 0) || (year > 1916 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void updateFebruaryIfLeapYear(unsigned daysOfMonths[], unsigned year)
{
    if (isLeapYear(year)) {
        daysOfMonths[1] = 29;
    }
    else {
        daysOfMonths[1] = 28;
    }
}

void changeDaysMonthsByExceed(unsigned daysOfMonths[], unsigned& day, unsigned& month, unsigned& year, unsigned interval)
{
    while (day > daysOfMonths[month - 1]) {
        day -= daysOfMonths[month - 1];
        if ((month + 1) > 12) {
            // Update year
            year++;
            month = 1;
            // Update February's days count depending if the year is leap or common
            updateFebruaryIfLeapYear(daysOfMonths, year);
        }
        else {
            // Update month
            month++;
        }
    }
}

void calendarChangeCheck(unsigned startYear, unsigned startMonth, unsigned& startDay)
{
    // Check if calendar changed in this subinterval
    if (startYear == 1916 && startMonth == 4 && startDay <= 14) {
        startDay += 13;
    }
}

void splitIntoIntervals(
    unsigned startYear,
    unsigned startMonth,
    unsigned startDay,
    unsigned endYear,
    unsigned endMonth,
    unsigned endDay,
    unsigned interval
) {
    unsigned daysOfMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Update February's days count depending if the year is leap or common
    updateFebruaryIfLeapYear(daysOfMonths, startYear);

    while (startYear < endYear || startMonth < endMonth || startDay <= endDay) {
        std::cout << startYear << '-' << startMonth << '-' << startDay << " - ";

        startDay += interval;
     
        // Check if day will exceed the days in the current month
        if (startDay >= daysOfMonths[startMonth - 1] && interval != 1) {
            changeDaysMonthsByExceed(daysOfMonths, startDay, startMonth, startYear, interval);
        }
        // Check if day will exceed the days in the current month, when the interval is equal to 1
        else if(startDay >= daysOfMonths[startMonth - 1] && interval == 1) {
            std::cout << startYear << '-' << startMonth << '-' << startDay - 1 << std::endl;
            changeDaysMonthsByExceed(daysOfMonths, startDay, startMonth, startYear, interval);
            calendarChangeCheck(startYear, startMonth, startDay);
            continue;
        }

        calendarChangeCheck(startYear, startMonth, startDay);

        // Check if this is the final interval & the days left are less than max_interval_days
        if (startYear >= endYear && startMonth >= endMonth && (startDay - 1) > endDay) {
            startDay = endDay + 1;
        }
        std::cout << startYear << '-' << startMonth << '-' << startDay - 1 << std::endl;
    }
}

int main()
{
    unsigned startYear, startMonth, startDay, endYear, endMonth, endDay, interval;
   
    // Validating the input
    bool isValidInput = getInput(startYear, startMonth, startDay, endYear, endMonth, endDay, interval);
    if (isValidInput)
    {
        splitIntoIntervals(startYear, startMonth, startDay, endYear, endMonth, endDay, interval);
    }
    else {
        return -1;
    }
}

