// Q117	Write a program to Create student record system using arrays and strings.



#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n], marks[n];
    char name[n][50];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");
    printf("Roll\tName\t\tMarks\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\n", roll[i], name[i], marks[i]);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == search)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent Record Not Found.\n");
    }

    return 0;
}