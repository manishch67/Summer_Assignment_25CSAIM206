// Q108	Write a program to Create marksheet generation system.	


#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Marksheets\n");
        printf("3. Search Marksheet\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks of 5 Subjects:\n");
                scanf("%d%d%d%d%d",
                      &s[n].m1,
                      &s[n].m2,
                      &s[n].m3,
                      &s[n].m4,
                      &s[n].m5);

                s[n].total = s[n].m1 + s[n].m2 + s[n].m3 + s[n].m4 + s[n].m5;
                s[n].percentage = s[n].total / 5.0;

                if (s[n].percentage >= 90)
                    s[n].grade = 'A';
                else if (s[n].percentage >= 75)
                    s[n].grade = 'B';
                else if (s[n].percentage >= 60)
                    s[n].grade = 'C';
                else if (s[n].percentage >= 40)
                    s[n].grade = 'D';
                else
                    s[n].grade = 'F';

                n++;
                printf("Marksheet generated successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nRoll\tName\t\tTotal\tPercentage\tGrade\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%-15s%d\t%.2f%%\t\t%c\n",
                               s[i].roll,
                               s[i].name,
                               s[i].total,
                               s[i].percentage,
                               s[i].grade);
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("No records available.\n");
                } else {
                    printf("Enter Roll Number to Search: ");
                    scanf("%d", &roll);

                    found = 0;
                    for (i = 0; i < n; i++) {
                        if (s[i].roll == roll) {
                            printf("\n----- Marksheet -----\n");
                            printf("Roll Number : %d\n", s[i].roll);
                            printf("Name        : %s\n", s[i].name);
                            printf("Subject 1   : %d\n", s[i].m1);
                            printf("Subject 2   : %d\n", s[i].m2);
                            printf("Subject 3   : %d\n", s[i].m3);
                            printf("Subject 4   : %d\n", s[i].m4);
                            printf("Subject 5   : %d\n", s[i].m5);
                            printf("Total       : %d\n", s[i].total);
                            printf("Percentage  : %.2f%%\n", s[i].percentage);
                            printf("Grade       : %c\n", s[i].grade);
                            found = 1;
                            break;
                        }
                    }

                    if (!found)
                        printf("Student record not found.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}