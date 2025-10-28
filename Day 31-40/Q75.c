/*Q75: Add two matrices.
*/
#include <stdio.h>
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat2[i][j]);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
