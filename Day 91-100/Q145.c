/*Q145: Return a structure containing top student's details from a function.
*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student getTopper(struct Student s[], int n) {
    int i, maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    return s[maxIndex];
}
int main() {
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }
    struct Student top = getTopper(s, 3);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    return 0;
}
