//Write a program to Recursive sum of digits.
#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("Sum of digits = %d\n", result);

    return 0;
}