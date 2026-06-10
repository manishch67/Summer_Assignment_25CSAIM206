//Write a program to Check whether a number is palindrome.
#include <stdio.h>
int main() {
    int n, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  

    while(n != 0) {
        rem = n % 10;          
        rev = rev * 10 + rem;  
        n /= 10;               
    }

    if(original == rev)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is NOT a Palindrome\n", original);

    return 0;
}
