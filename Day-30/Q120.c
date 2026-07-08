// Q120	Write a program to Develop complete mini project using arrays, strings and functions.


#include <stdio.h>

#define MAX 100

int roll[MAX], marks[MAX], count = 0;
char name[MAX][50];

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;
    printf("\nStudent Record Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n------ Student Records ------\n");
    printf("Roll\tName\t\tMarks\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%-15s%d\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent()
{
    int i, r;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++)
    {
        if (roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);
            return;
        }
    }

    printf("\nStudent Record Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}