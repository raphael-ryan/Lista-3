#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number (cannot be zero): ");
    scanf("%f", &num2);

    while (num2 == 0) {
        printf("Zero is not allowed. Enter a different number: ");
        scanf("%f", &num2);
    }

    printf("Result of division: %.2f\n", num1 / num2);

    return 0;
}
