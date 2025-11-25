/*Q147: Store employee data in a binary file using fwrite() and read using fread().
*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    int salary;
};
int main() {
    struct Employee e, r;
    FILE *fp;
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%d", &e.salary);
    fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    fp = fopen("emp.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);
    printf("%s %d %d\n", r.name, r.id, r.salary);
    return 0;
}
