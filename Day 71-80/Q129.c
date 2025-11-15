/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>
int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) return 1;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0)
        printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
