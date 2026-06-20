//Write a program to Write function for palindrome.

#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int rev = 0, rem;

    while(num != 0) {
        rem = num % 10;          
        rev = rev * 10 + rem;    
        num /= 10;               
    }

    return (original == rev);    
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);

    return 0;
}
