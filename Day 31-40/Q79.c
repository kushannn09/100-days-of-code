/*Q79: Perform diagonal traversal of a matrix.
*/
#include <stdio.h>
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            for (int i = 0; i <= d; i++) {
                int j = d - i;
                if (i < rows && j < cols)
                    printf("%d ", matrix[i][j]);
            }
        } else {
            for (int i = d; i >= 0; i--) {
                int j = d - i;
                if (i < rows && j < cols)
                    printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
