#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter a value for N (greater than 0): ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("VALOR INVÁLIDO. N must be greater than 0.\n");
        }
    } while (N <= 0);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
