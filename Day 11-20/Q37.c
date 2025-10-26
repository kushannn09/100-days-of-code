/*Q37: Write a program to find the LCM of two numbers.
*/
#include <stdio.h>
int main() {
    int a, b, lcm;
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    int temp = max;
    while(1) {
        if(temp % a == 0 && temp % b == 0) {
            lcm = temp;
            break;
        }
        temp++;
    }
    printf("%d\n", lcm);
    return 0;
}
