//Write a program to Recursive reverse number.
#include <stdio.h>

int reverse = 0;

int reverseNumber(int n) {
    if (n == 0)
        return 0;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);

    return reverse;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = reverseNumber(num);

    printf("Reversed number = %d\n", result);

    return 0;
}