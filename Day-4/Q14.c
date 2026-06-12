//Write a program to Find nth Fibonacci term.
#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci term at position %d is: %d\n", n, first);
    } else if (n == 1) {
        printf("Fibonacci term at position %d is: %d\n", n, second);
    } else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Fibonacci term at position %d is: %d\n", n, second);
    }

    return 0;
}
