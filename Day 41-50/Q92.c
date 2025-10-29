/*Q92: Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};
    scanf("%s", str);    
    for(int i = 0; str[i]; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if(freq[index] == 2) {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("No repeating character\n");
    return 0;
}
