/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>
int main() {
    char source[100], dest[100], ch;
    FILE *src, *dst;
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);
    src = fopen(source, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }
    dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dst);
    printf("File copied successfully to %s\n", dest);
    fclose(src);
    fclose(dst);
    return 0;
}

