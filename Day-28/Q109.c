// Q109	Write a program to Create library management system.	


#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available;
};

int main()
{
    struct Book books[100];
    int n = 0, choice, id, i, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &books[n].id);

            getchar();

            printf("Enter Book Title: ");
            fgets(books[n].title, sizeof(books[n].title), stdin);
            books[n].title[strcspn(books[n].title, "\n")] = '\0';

            printf("Enter Author Name: ");
            fgets(books[n].author, sizeof(books[n].author), stdin);
            books[n].author[strcspn(books[n].author, "\n")] = '\0';

            books[n].available = 1;
            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\n%-10s %-25s %-20s %-10s\n", "ID", "Title", "Author", "Status");
                for (i = 0; i < n; i++)
                {
                    printf("%-10d %-25s %-20s %-10s\n",
                           books[i].id,
                           books[i].title,
                           books[i].author,
                           books[i].available ? "Available" : "Issued");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    found = 1;
                    if (books[i].available)
                    {
                        books[i].available = 0;
                        printf("Book issued successfully.\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    found = 1;
                    if (!books[i].available)
                    {
                        books[i].available = 1;
                        printf("Book returned successfully.\n");
                    }
                    else
                    {
                        printf("Book is already available.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    found = 1;
                    printf("\nBook Found\n");
                    printf("ID: %d\n", books[i].id);
                    printf("Title: %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);
                    printf("Status: %s\n", books[i].available ? "Available" : "Issued");
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}