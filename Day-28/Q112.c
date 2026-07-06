// Q112	Write a program to Create contact management system.


#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contacts[100];
    int n = 0, choice, i, found;
    char search[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                fgets(contacts[n].name, sizeof(contacts[n].name), stdin);
                contacts[n].name[strcspn(contacts[n].name, "\n")] = '\0';

                printf("Enter Phone Number: ");
                fgets(contacts[n].phone, sizeof(contacts[n].phone), stdin);
                contacts[n].phone[strcspn(contacts[n].phone, "\n")] = '\0';

                n++;
                printf("Contact Added Successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Contacts Available.\n");
                }
                else
                {
                    printf("\n--- Contact List ---\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (strcmp(contacts[i].name, search) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("Name : %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact Not Found.\n");
                break;

            case 4:
                printf("Enter Name to Delete: ");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (strcmp(contacts[i].name, search) == 0)
                    {
                        int j;
                        for (j = i; j < n - 1; j++)
                        {
                            contacts[j] = contacts[j + 1];
                        }
                        n--;
                        found = 1;
                        printf("Contact Deleted Successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Contact Not Found.\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 5);

    return 0;
}