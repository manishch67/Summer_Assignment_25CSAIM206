//Write a program to Print repeated-number pattern.
// 1
// 22
// 333
// 4444
// 55555


#include<stdio.h>
int main()
{
    int i , j , n = 0;

    for(i=1;i<=5;i++)
    {    
        n++;
        for(j=1;j<=i;j++)
        {   
            printf("%d",n);
        }
        printf("\n");
    }
    return 0 ;

}
