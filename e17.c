#include <stdio.h>

int main() {
    float total_value = 0, item_value;
    int item_count = 0;
    char choice;

    do {
        printf("Enter the value of the item: ");
        scanf("%f", &item_value);
        total_value += item_value;
        item_count++;

        printf("MORE ITEMS (S/N)? ");
        scanf(" %c", &choice);
    } while (choice == 'S' || choice == 's');

    printf("Total value in stock: %.2f\n", total_value);
    printf("Average value per item: %.2f\n", total_value / item_count);

    return 0;
}
