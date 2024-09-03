#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 15; i <= 100; i++) {
        sum += i;
        count++;
    }

    float average = sum / (float)count;
    printf("The average of numbers between 15 and 100 is: %.2f\n", average);

    return 0;
}
