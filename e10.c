#include <stdio.h>

int main() {
    int N;

    printf("Enter a value for N (greater than 0): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
