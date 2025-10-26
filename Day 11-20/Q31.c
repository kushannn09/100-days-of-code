/*Q31: Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>
int main() {
    int n, binary = 0, place = 1;
    scanf("%d", &n);
    while (n > 0) {
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }
    printf("%d\n", binary);
    return 0;
}
