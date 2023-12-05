/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Vasilena Ventsislavova Stanoyska
* @idnumber 4MI0600290
* @task 2
*
*/

#include <iostream>
void getUserInput(int answersCount[], int& askedPeopleCount)
{
    std::cin >> askedPeopleCount;

    if (askedPeopleCount < 0 || askedPeopleCount > 1000) {
        std::cout << "Incorrect Input.";
        return;
    }

    for (int i = 0; i < askedPeopleCount; i++) {
        std::cin >> answersCount[i];
    }
}

// ako sa 2-ma i 2 % 2 == 0, count = 4; no 4 % 2 = 1 => count - 1 e otg. (pri obshto 3-ma 2, 2, 2)
// Pravim si edin masiv, kudeto zapazvame kolko puti se sreshta dadena brojka hora kato otgovor 
// (v primera (2,2,2) na index 2 v masiva - (purvo - 1 put, vtoro - 2 puti, treto - puti) => count += 2 se uvelichava samo na purviq put, pri index = 0
int countMinPopulation(int answersCount[], unsigned askedPeopleCount)
{
    int count = askedPeopleCount;
    int populationCount[100] = { 0 };
    for (int i = 0; i < askedPeopleCount; i++)
    {
        if (!populationCount[answersCount[i]] || populationCount[answersCount[i]] % (answersCount[i] + 1) == 0)
        {
            count += answersCount[i];
        }
        else
        {
            count--;
        }
        populationCount[answersCount[i]]++;

    }

    return count;
}
int main()
{
    constexpr int SIZE = 1000;
    int answersCount[SIZE];
    int askedPeopleCount = 0;

    getUserInput(answersCount, askedPeopleCount);
    std::cout << countMinPopulation(answersCount, askedPeopleCount);
}
