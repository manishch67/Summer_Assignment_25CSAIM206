// Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include<stdio.h>
int main()
{
    int i , j ;
    char n ;

    n = 64 ;

    for(i=1;i<=5;i++)
    {    
        n++;
        for(j=1;j<=i;j++)
        {   
            
            printf("%c",n);
        }
        printf("\n");
    }
    return 0 ;

}
