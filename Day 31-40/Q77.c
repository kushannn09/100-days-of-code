/*Q77: Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    int n = rows;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int distinct = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    if (distinct) printf("True\n");
    else printf("False\n");
    return 0;
}
