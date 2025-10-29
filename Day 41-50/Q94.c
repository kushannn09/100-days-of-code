/*Q94: Find the longest word in a sentence.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50] = "";
    fgets(str, sizeof(str), stdin);    
    int i = 0, j = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > strlen(longest)) strcpy(longest, word);
            j = 0;
            if (str[i] == '\0' || str[i] == '\n') break;
        }
        i++;
    }    
    printf("%s\n", longest);
    return 0;
}
