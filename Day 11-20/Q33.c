/*Q33: Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, sum = 0, digits = 0;
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
