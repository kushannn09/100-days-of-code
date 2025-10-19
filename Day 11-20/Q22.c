/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, amount, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss\n");
    }
    return 0;
}


