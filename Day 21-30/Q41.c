/*Q41: Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / pow(10, digits);
    if (digits == 0) {
        printf("%d", num);
        return 0;
    }
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;
    printf("%d", swappedNum);
    return 0;
}
