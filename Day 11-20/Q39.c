/*Q39: Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>
int main() {
    int n, product = 1, hasOdd = 0;
    scanf("%d", &n);
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if(!hasOdd) product = 1;
    printf("%d\n", product);
    return 0;
}
