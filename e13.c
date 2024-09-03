#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a value between 1 and 10: ");
        scanf("%d", &num);
        if (num < 1 || num > 10) {
            printf("Invalid input! Please enter a value between 1 and 10.\n");
        }
    } while (num < 1 || num > 10);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
