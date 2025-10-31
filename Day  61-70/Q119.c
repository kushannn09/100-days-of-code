/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int result = 0;
    for(int i = 0; i < n; i++)
        result ^= nums[i];
    for(int i = 0; i < n - 1; i++)
        result ^= i;
    printf("%d\n", result);
    return 0;
}
