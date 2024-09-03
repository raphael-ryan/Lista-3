#include <stdio.h>

int main() {
    int total_items;
    float total_value = 0, item_value;

    printf("Enter the total number of items: ");
    scanf("%d", &total_items);

    for (int i = 1; i <= total_items; i++) {
        printf("Enter the value of item %d: ", i);
        scanf("%f", &item_value);
        total_value += item_value;
    }

    printf("Total value in stock: %.2f\n", total_value);
    printf("Average value per item: %.2f\n", total_value / total_items);

    return 0;
}
