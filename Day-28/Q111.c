// Q111	Write a program to Create ticket booking system.	


#include <stdio.h>

int main()
{
    int seats[10] = {0};
    int choice, seatNo, i;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nSeat Status:\n");
                for(i = 0; i < 10; i++)
                {
                    printf("Seat %d : %s\n", i + 1, seats[i] ? "Booked" : "Available");
                }
                break;

            case 2:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10)
                {
                    printf("Invalid Seat Number.\n");
                }
                else if(seats[seatNo - 1] == 1)
                {
                    printf("Seat Already Booked.\n");
                }
                else
                {
                    seats[seatNo - 1] = 1;
                    printf("Ticket Booked Successfully.\n");
                }
                break;

            case 3:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10)
                {
                    printf("Invalid Seat Number.\n");
                }
                else if(seats[seatNo - 1] == 0)
                {
                    printf("Seat Is Already Available.\n");
                }
                else
                {
                    seats[seatNo - 1] = 0;
                    printf("Ticket Cancelled Successfully.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}