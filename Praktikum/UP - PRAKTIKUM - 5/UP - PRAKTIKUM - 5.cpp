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

/*Zad 5
int reverseNum(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    return reversedNum;
}
void seperateDigits(int num, int& evenNum, int& oddNum) {
    int reversedNum = reverseNum(num);
    while (reversedNum != 0) {
        int digit = reversedNum % 10;
        if (digit % 2 == 0) {
            evenNum *= 10;
            evenNum += digit;
            reversedNum /= 10;
        }
        else {
            oddNum *= 10;
            oddNum += digit;
            reversedNum /= 10;
        }
    }
}
int main() {
    int num;
    std::cin >> num;
    int evenNum = 0, oddNum = 0;
    seperateDigits(num, evenNum, oddNum);
    std::cout << evenNum << " " << oddNum;
}*/

/*Zad 6
int countPrimeDivisor(int n) {
    int count = 0;
    int copy = n;

    for (int i = 2; i <= copy / 2; i++) {
        if (n % i == 0) {
            count++;
            n /= i;
            i--;
        }
    }
    if (count == 0) {
        return 1;
    }
    return count;
}
void findMaxMinDivision(int& minDivision, int& maxDivision, int k) {
    for (int i = minDivision; i <= maxDivision; i++) {
        int current = countPrimeDivisor(i);
        if (countPrimeDivisor(i) == k) {
            minDivision = i;
            break;
        }
    }

    for (int i = maxDivision; i >= minDivision; maxDivision --) {
        int current = countPrimeDivisor(i);
        if (countPrimeDivisor(i) == k) {
            maxDivision = i;
            break;
        }
    }
}
int main() {
    int startNum, stopNum, k;
    std::cin >> startNum >> stopNum >> k;
    findMaxMinDivision(startNum, stopNum, k);
    std::cout << startNum << " " << stopNum;
}*/

/*Zad 7
int reverseNum(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    return reversedNum;
}
int countdigitsofNum(int num) {
    int counter = 0;
    while (num != 0) {
        num /= 10;
        counter++;
    }
    return counter;
}
void swapDigitsOfNums(int firstNum, int secondNum, int& firstChanged, int& secondChanged, int k) {
    int reversedFirstNum = reverseNum(firstNum);
    int reversedSecondNum = reverseNum(secondNum);
    int len = countdigitsofNum(firstNum);
  
    int counter = 1;
    int position = len - k + 1;
    while (reversedFirstNum != 0) {
        if (counter == position) {
            reversedSecondNum *= 10;
            reversedSecondNum += firstNum % 10;
            firstNum /= 10;
            position++;
        }
        else {
            firstChanged *= 10;
            firstChanged += reversedFirstNum % 10;
        }
        counter++;
        reversedFirstNum /= 10;
    }

    secondChanged = reverseNum(reversedSecondNum);
}
int main() {
    int firstNum, secondNum, k;
    std::cin >> firstNum >> secondNum >> k;
    int firstChanged = 0, secondChanged = 0;
    swapDigitsOfNums(firstNum, secondNum, firstChanged, secondChanged, k);
    std::cout << firstChanged << " " << secondChanged;
}*/

/*Zad 7 - Solution 2
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
void swapDigitsOfNums(int& firstNum, int& secondNum, int k) {
    int lenOfSecond = countdigitsofNum(secondNum);

    for (int i = 0; i < k; i++) {
        int current = firstNum % 10;
        firstNum /= 10;
        secondNum = secondNum + (pow(10, lenOfSecond - 1)) * current;
        lenOfSecond++;
    }
}
int main() {
    int firstNum, secondNum, k;
    std::cin >> firstNum >> secondNum >> k;
    swapDigitsOfNums(firstNum, secondNum, k);
    std::cout << firstNum << " " << secondNum;
}*/

/*Zad 8
int countdigitsofNum(int num) {
    int counter = 0;
    while (num != 0) {
        num /= 10;
        counter++;
    }
    return counter;
}
int getDigitsFromIntervalOfNum(int num, int start, int stop) {
    int len = countdigitsofNum(num);
    
    for (int i = 0; i < len - stop; i++) {
        num /= 10;
    }

    int result = 0;
    int multiplier = 1;

    for (int i = 0; i <= stop - start; i++) {
        int current = num % 10;
        result += current * multiplier;
        multiplier *= 10;
        num /= 10;
    }
    return result;
}
int main() {
    int num, start, stop;
    std::cin >> num >> start >> stop;
    int result = getDigitsFromIntervalOfNum(num, start, stop);
    std::cout << result;
}*/
