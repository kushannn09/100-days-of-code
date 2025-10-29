/*Q91: Remove all vowels from a string.
*/
#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    for(int i = 0; str[i]; i++) {
        char ch = str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
            printf("%c", ch);
    }
    printf("\n");
    return 0;
}
