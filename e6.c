#include <stdio.h>

int main() {
    char choice;

    do {
        float grade1, grade2;

        do {
            printf("Enter the first grade (0-10): ");
            scanf("%f", &grade1);
            if (grade1 < 0 || grade1 > 10) {
                printf("Invalid grade! Please enter a value between 0 and 10.\n");
            }
        } while (grade1 < 0 || grade1 > 10);

        do {
            printf("Enter the second grade (0-10): ");
            scanf("%f", &grade2);
            if (grade2 < 0 || grade2 > 10) {
                printf("Invalid grade! Please enter a value between 0 and 10.\n");
            }
        } while (grade2 < 0 || grade2 > 10);

        float average = (grade1 + grade2) / 2.0;
        printf("Average grade: %.2f\n", average);

        printf("NOVO C�LCULO (S/N)? ");
        scanf(" %c", &choice);

    } while (choice == 'S' || choice == 's');

    return 0;
}
