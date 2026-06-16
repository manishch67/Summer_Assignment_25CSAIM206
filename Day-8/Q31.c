//Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE


#include<stdio.h>
int main()
{
    int i , j ;
    char n ;

    for(i=1;i<=5;i++)
    {    
        n = 64 ;
        for(j=1;j<=i;j++)
        {   
            n++;
            printf("%c",n);
        }
        printf("\n");
    }
    return 0 ;

}
