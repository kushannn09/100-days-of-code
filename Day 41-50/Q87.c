/*Q87: Count spaces, digits, and special characters in a string.
*/
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int spaces=0, digits=0, special=0;
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]; i++) {
        if(str[i]==' ')
            spaces++;
        else if(isdigit(str[i]))
            digits++;
        else if(str[i]!='\n' && !isalpha(str[i]))
            special++;
    }  
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
