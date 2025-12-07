/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/
#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if (number >= 0) {
        if (number == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
    return 0;
}
