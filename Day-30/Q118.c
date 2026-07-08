// Q118	Write a program to Create mini library system.


#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    int bookId[n];
    char title[n][50], author[n][50];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Title: ");
        scanf(" %[^\n]", title[i]);

        printf("Author Name: ");
        scanf(" %[^\n]", author[i]);
    }

    printf("\n----- Library Records -----\n");
    printf("ID\tTitle\t\t\tAuthor\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%-20s%-20s\n", bookId[i], title[i], author[i]);
    }

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (bookId[i] == search)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", bookId[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nBook Record Not Found.\n");
    }

    return 0;
}