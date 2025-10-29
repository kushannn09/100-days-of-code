/*Q98: Print initials of a name with the surname displayed in full.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);    
    int i = 0, len = strlen(str);
    if(str[len-1] == '\n') str[len-1] = '\0';    
    for(i = 0; str[i]; i++) {
        if(i == 0 && str[i] != ' ')
            printf("%c.", toupper(str[i]));
        else if(str[i-1] == ' ' && str[i] != ' ' && strchr(str+i+1, ' '))
            printf("%c.", toupper(str[i]));
    }
    char *last = strrchr(str, ' ');
    if(last) printf(" %s\n", last+1);
    else printf("\n");    
    return 0;
}
