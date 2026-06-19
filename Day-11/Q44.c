//Write a program to Write function to find factorial.

#include<stdio.h>

int factorial(int a)
{
    if(a==0)
        return 1 ;

    else if(a==1)
        return 1 ;
    
    else
        return a * factorial(a-1) ;

    
}

int main()
{
    int a , c ;
    printf("Enter a number : ");
    scanf("%d",&a);

    c = factorial(a);
    printf("factorial of %d is %d",a,c);

    return 0 ;
}