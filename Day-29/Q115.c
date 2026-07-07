// Q115	Write a program to Create menu-driven string operations system.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, length;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                length = strlen(str);
                printf("Reversed String: ");
                for(i = length - 1; i >= 0; i--)
                {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Uppercase String: ");
                for(i = 0; str[i] != '\0'; i++)
                {
                    ch = str[i];
                    if(ch >= 'a' && ch <= 'z')
                        ch = ch - 32;
                    printf("%c", ch);
                }
                printf("\n");
                break;

            case 4:
                printf("Lowercase String: ");
                for(i = 0; str[i] != '\0'; i++)
                {
                    ch = str[i];
                    if(ch >= 'A' && ch <= 'Z')
                        ch = ch + 32;
                    printf("%c", ch);
                }
                printf("\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}