/*Q34: Write a program to check if a number is prime.
*/
#include <stdio.h>
int main() {
    int n, flag = 0;
    scanf("%d", &n);
    if(n <= 1) {
        printf("Not prime\n");
        return 0;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Not prime\n");
    else
        printf("Prime\n");

    return 0;
}
