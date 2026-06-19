//Write a program to Write function to find sum of two numbers.


#include<stdio.h>

int sum(int a , int b)
{
    int c = a + b ;

    return c ;
}

int main()
{
    int a , b , c ;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    c = sum(a,b);
    printf("sum is %d",c);

    return 0 ;
}