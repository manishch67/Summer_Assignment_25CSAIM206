// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    int i , j , k ;

    for(i=1;i<=5;i++)
    {   
        for(j=1;j<i;j++)
        {
            printf(" ");
        }


        for(k=2*i-1;k<=9;k++)
        {
            printf("*");
        }
      
        printf("\n");
    }

    return 0 ;
}

