/*Q84: Convert a lowercase string to uppercase without using built-in functions.
*/
#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
