/*Q64: Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    int maxCount = 0, mostDigit = 0;
    for(int d = 0; d <= 9; d++) {
        long long temp = n;
        int count = 0;
        while(temp > 0) {
            if(temp % 10 == d)
                count++;
            temp /= 10;
        }
        if(count > maxCount) {
            maxCount = count;
            mostDigit = d;
        }
    }

    printf("%d", mostDigit);
    return 0;
}
