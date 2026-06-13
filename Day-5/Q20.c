//Write a program to Find largest prime factor.
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largestPrime = i;
        }
    }

    if (largestPrime != -1)
        printf("Largest prime factor of %d is %d\n", num, largestPrime);
    else
        printf("%d has no prime factors.\n", num);

    return 0;
}
