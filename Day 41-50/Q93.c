/*Q93: Check if two strings are anagrams of each other.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};    
    scanf("%s %s", str1, str2);
    for(int i = 0; str1[i]; i++) freq1[str1[i]-'a']++;
    for(int i = 0; str2[i]; i++) freq2[str2[i]-'a']++;  
    int flag = 1;
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }    
    if(flag)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");   
    return 0;
}
