/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    scanf("%lf %lf %lf", &principal, &rate, &time);

    double si = (principal * rate * time) / 100;
    double ci = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.0lf, Compound Interest=%.2lf\n", si, ci);

    return 0;
}
