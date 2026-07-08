// Q119	Write a program to Create mini employee management system.


#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    int empId[n];
    float salary[n];
    char name[n][50], department[n][50];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%-15s%-15s%.2f\n", empId[i], name[i], department[i], salary[i]);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (empId[i] == search)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID : %d\n", empId[i]);
            printf("Name        : %s\n", name[i]);
            printf("Department  : %s\n", department[i]);
            printf("Salary      : %.2f\n", salary[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nEmployee Record Not Found.\n");
    }

    return 0;
}