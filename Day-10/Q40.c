// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA


#include <stdio.h>

int main() {
    int i, j, k , x = 5;
    char n;

    for(i = 1; i <= x; i++) {

        
        for(j = 1; j <= x - i; j++) {
            printf(" ");
        }

        
        for(j = 1; j <= i; j++) {
            char n = j + 64;
            printf("%c", n);
        }

        
        for(k = i - 1; k >= 1; k--) {
            char n = k + 64 ;
            printf("%c", n);
        }

        printf("\n");
    }

    return 0;
}
