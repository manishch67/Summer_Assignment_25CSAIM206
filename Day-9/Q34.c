// Write a program to Print reverse number triangle.

// 12345
// 1234
// 123
// 12
// 1

#include<stdio.h>
int main()
{
    int i , j , n = 0 ;

    for(i=1;i<=5;i++)
    {    
        n = 0 ;

        for(j=i;j<=5;j++)
        {   
            n++;
            printf("%d",n);
        }
        printf("\n");
    }
    return 0 ;

}
