/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int insideWord = 0;
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            insideWord = 0;
        else if (insideWord == 0) {
            insideWord = 1;
            words++;
        }
    }
    fclose(file);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
