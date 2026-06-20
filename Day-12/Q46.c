//Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int original = num;
    int n = 0, rem;
    double result = 0.0;

    
    while (original != 0) {
        original = original/10;
        n++;
    }

    original = num;

   
    while (original != 0) {
        rem = original % 10;
        result = result + pow(rem, n);
        original = original/10;
    }

    return (int)result == num;  
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    return 0;
}
