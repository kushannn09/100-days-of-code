/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
  */

#include <stdio.h>

int main() {
    double radius;
    const double pi = 3.14159;

    scanf("%lf", &radius);

    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    printf("Area=%.2lf, Circumference=%.2lf\n", area, circumference);

    return 0;
}
