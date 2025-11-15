/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inFile, *outFile;
    int ch;
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) return 1;
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        fclose(inFile);
        return 1;
    }
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }
    fclose(inFile);
    fclose(outFile);
    return 0;
}
