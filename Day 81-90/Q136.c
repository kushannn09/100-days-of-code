/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/
#include <stdio.h>
#include <string.h>
typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} Operation;
int main() {
    char input[10];
    int a, b;
    Operation op;
    scanf("%s %d %d", input, &a, &b);
    if (strcmp(input, "ADD") == 0) op = ADD;
    else if (strcmp(input, "SUBTRACT") == 0) op = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0) op = MULTIPLY;
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}
