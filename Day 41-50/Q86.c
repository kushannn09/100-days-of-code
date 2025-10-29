/*Q86: Check if a string is a palindrome.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str), flag = 1;
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
