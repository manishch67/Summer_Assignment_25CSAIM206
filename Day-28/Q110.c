// Q110	Write a program to Create bank account system.


#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;
    int choice;
    float amount;

    printf("Create Bank Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    getchar();

    printf("Enter Account Holder Name: ");
    fgets(acc.name, sizeof(acc.name), stdin);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);
                if (amount <= acc.balance)
                {
                    acc.balance -= amount;
                    printf("Amount Withdrawn Successfully.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("\nAccount Number : %d\n", acc.accNo);
                printf("Account Holder: %s", acc.name);
                printf("Balance       : %.2f\n", acc.balance);
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