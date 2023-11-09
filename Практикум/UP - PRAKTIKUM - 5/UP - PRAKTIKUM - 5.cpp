#include <iostream>

/*Zad 1
void switchValues(int& num1, int &num2) {
    int num3 = num2;
    num2 = num1;
    num1 = num3;
}
int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    switchValues(num1, num2);
    std::cout << num1 << num2;
}*/

/*Zad 2
int reverseNum(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum *= 10;
        reversedNum += num % 10;

        num /= 10;
    }
    return reversedNum;
}
int removeValue(int num, int position) {
    int result = 0;
    int countPosition = 1;
    num = reverseNum(num);
    while (num != 0) {
        if (countPosition == position) {
            countPosition++;
            num /= 10;
            continue;
        }
        result *= 10;
        result += num % 10;
        num /= 10;
        countPosition++;
    }
    return result;
}
int main() {
    int num, position;
    std::cin >> num >> position;
    removeValue(num, position);
    std::cout << removeValue(num, position);
}*/

/*Zad 3
void simplifyNum(int& numirator, int& denumirator) {
    int n = numirator > denumirator ? denumirator : numirator;
    for (int i = n; i >= 1; i--) {
        if (numirator % i == 0 && denumirator % i == 0) {
            numirator /= i;
            denumirator /= i;
        }
    }
}
void sumNums(int numirator1, int denumirator1, int numirator2, int denumirator2, int& sumNumirator, int& sumDenumirator) {
        sumNumirator = numirator1 * denumirator2 + numirator2 * denumirator1;
        sumDenumirator = denumirator1 * denumirator2;
        simplifyNum(sumNumirator, sumDenumirator);
}
int main() {
    int numirator1, denumirator1, numirator2, denumirator2, sumNumirator, sumDenumirator;
    std::cin >> numirator1 >> denumirator1 >> numirator2 >> denumirator2;
    simplifyNum(numirator1, denumirator1);
    simplifyNum(numirator2, denumirator2);
    sumNums(numirator1, denumirator1, numirator2, denumirator2, sumNumirator, sumDenumirator);
    std::cout << sumNumirator << sumDenumirator;
}*/

/*Zad 4
int reverseNum(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    return reversedNum;
}
int getNumAtIndex(int num, int position) {
    int counter = 1;
    int index = 0;
    while (num != 0) {
        if (counter == position) {
            index += num % 10;
            num /= 10;
        }
        counter++;
        num /= 10;
    }
    return index;
}
int countdigitsofNum(int num) {
    int counter = 0;
    while (num != 0) {
        num /= 10;
        counter++;
    }
    return counter;
}
int pow(int num, int power) {
    int powerd = num;
    if (power == 0) {
        return num;
    }
    while (power != 0) {
        powerd *= num;
        power -= 1;
    }
    return powerd;
}
void swapIndex(int& num1, int& num2, int position) {
    int reversedNum1 = reverseNum(num1);
    int reversedNum2 = reverseNum(num2);

    int index1 = getNumAtIndex(reversedNum1, position);
    int index2 = getNumAtIndex(reversedNum2, position);

    int lenNum1 = countdigitsofNum(num1);
    int lenNum2 = countdigitsofNum(num2);

    num1 -= (index1 * pow(10, lenNum1 - position - 1));
    num1 += (index2 * pow(10, lenNum1 - position - 1));
     
    num2 -= (index2 * pow(10, lenNum2 - position - 1));
    num2 += (index1 * pow(10, lenNum2 - position - 1));
}
int main() {
    int num1, num2, position;
    std::cin >> num1 >> num2 >> position;
    
    swapIndex(num1, num2, position);
    std::cout << num1 << " " << num2;
}*/

/*Zad 5*/