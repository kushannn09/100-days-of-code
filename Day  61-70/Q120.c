/*Q120: Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if(str[n-1] == '\n') str[n-1] = '\0';
    if(str[0] != '\0' && isalpha(str[0]))
        str[0] = toupper(str[0]);
    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && isalpha(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    printf("%s\n", str);
    return 0;
}
