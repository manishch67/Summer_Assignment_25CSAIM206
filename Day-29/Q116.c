// Q116	Write a program to Create inventory management system.


#include <stdio.h>

int main()
{
    int id[100], qty[100], n, choice, i, searchId;
    float price[100], totalValue = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &id[i]);

        printf("Enter Quantity: ");
        scanf("%d", &qty[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);
    }

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Display Inventory\n");
        printf("2. Search Product by ID\n");
        printf("3. Calculate Total Inventory Value\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tQuantity\tPrice\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%d\t\t%.2f\n", id[i], qty[i], price[i]);
                }
                break;

            case 2:
                printf("Enter Product ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nProduct Found\n");
                        printf("ID: %d\n", id[i]);
                        printf("Quantity: %d\n", qty[i]);
                        printf("Price: %.2f\n", price[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Product not found.\n");
                }
                break;

            case 3:
                totalValue = 0;
                for(i = 0; i < n; i++)
                {
                    totalValue += qty[i] * price[i];
                }

                printf("Total Inventory Value = %.2f\n", totalValue);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}