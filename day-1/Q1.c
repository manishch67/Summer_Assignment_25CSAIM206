//Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    sum = N * (N + 1) / 2;
    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}
