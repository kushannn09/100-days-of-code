/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    char s[1000];
    scanf("%s", s);    
    int n = strlen(s);
    int lastIndex[256];
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;   
    int maxLength = 0, start = 0;   
    for(int i = 0; i < n; i++) {
        if(lastIndex[(int)s[i]] >= start)
            start = lastIndex[(int)s[i]] + 1;
        lastIndex[(int)s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }    
    printf("%d\n", maxLength);
    return 0;
}
