/*Q97: Print the initials of a name.
*/
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);    
    int i = 0;
    while(str[i]) {
        if(i == 0 && str[i] != ' ')
            printf("%c.", toupper(str[i]));
        else if(str[i-1] == ' ' && str[i] != ' ')
            printf("%c.", toupper(str[i]));
        i++;
    }
    printf("\n");
    return 0;
}
