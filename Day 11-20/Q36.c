/*Q36: Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>
int main() {
    int a, b, gcd;
    scanf("%d %d", &a, &b);
    int min = (a < b) ? a : b;
    for(int i = min; i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }

    printf("%d\n", gcd);
    return 0;
}
