/*Q66: Insert an element in a sorted array at the appropriate position.
*/
#include <stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n+1]; 
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    int i;
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
