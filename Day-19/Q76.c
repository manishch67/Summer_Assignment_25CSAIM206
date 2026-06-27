// Q76	Write a program to Find diagonal sum.	

#include <stdio.h>

int main() {
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int A[10][10], sum = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("Sum of principal diagonal = %d\n", sum);

    return 0;
}
