#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SEATS 50

struct Reservation {
    int seatNumber;
    char passengerName[50];
    int age;
};

struct Reservation reservations[MAX_SEATS];
int numReservations = 0;

void makeReservation() {
    if (numReservations >= MAX_SEATS) {
        printf("Sorry, no more seats available.\n");
        return;
    }

    struct Reservation newReservation;

    printf("Enter passenger name: ");
    scanf("%s", newReservation.passengerName);

    printf("Enter passenger age: ");
    scanf("%d", &newReservation.age);

    // Assign a seat number
    newReservation.seatNumber = numReservations + 1;

    reservations[numReservations++] = newReservation;

    printf("Reservation successful. Your seat number is: %d\n", newReservation.seatNumber);
}

void displayReservations() {
    if (numReservations == 0) {
        printf("No reservations yet.\n");
        return;
    }

    printf("Seat Number\tPassenger Name\t\tAge\n");
    printf("-------------------------------------------\n");

    for (int i = 0; i < numReservations; i++) {
        printf("%d\t\t%s\t\t\t%d\n", reservations[i].seatNumber, reservations[i].passengerName, reservations[i].age);
    }
}

int main() {
    int choice;

    do {
        printf("\nRailway Reservation System\n");
        printf("1. Make Reservation\n");
        printf("2. Display Reservations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                makeReservation();
                break;
            case 2:
                displayReservations();
                break;
            case 3:
                printf("Exiting the program. Have a nice day!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

