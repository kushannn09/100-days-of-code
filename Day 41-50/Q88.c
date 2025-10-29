/*Q88: Replace spaces with hyphens in a string.
*/
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]; i++) {
        if(str[i]==' ')
            str[i]='-';
        printf("%c", str[i]);
    }
    return 0;
}
