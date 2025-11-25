/*Q143: Find and print the student with the highest marks.
*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    int n = 3, i, maxIndex = 0;
    struct Student s[3];
    for(i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    printf("Topper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}
