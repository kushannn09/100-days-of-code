/*Q96: Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    fgets(str, sizeof(str), stdin);  
    int i = 0, j = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            for(int k = j-1; k >= 0; k--)
                printf("%c", word[k]);
            if(str[i] == ' ') printf(" ");
            j = 0;
            if(str[i] == '\0' || str[i] == '\n') break;
        }
        i++;
    }    
    printf("\n");
    return 0;
}
