// Q114	Write a program to Create menu-driven array operations system.


#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int sum, max, min, pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &key);
                pos = -1;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        pos = i;
                        break;
                    }
                }

                if(pos != -1)
                    printf("Element found at position %d\n", pos + 1);
                else
                    printf("Element not found.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}