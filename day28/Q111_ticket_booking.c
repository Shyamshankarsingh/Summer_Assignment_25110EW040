#include <stdio.h>
#include <string.h>

#define MAX_SEATS 10

int main() {
    int seats[MAX_SEATS] = {0}; // 0 = available, 1 = booked
    char names[MAX_SEATS][50];
    int choice, seatNo;
    do {
        printf("\n=== Ticket Booking ===\n1.Show Seats 2.Book 3.Cancel 4.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Seat Status:\n");
                for (int i = 0; i < MAX_SEATS; i++)
                    printf("Seat %d: %s\n", i + 1, seats[i] ? names[i] : "Available");
                break;
            case 2:
                printf("Seat number (1-%d): ", MAX_SEATS); scanf("%d", &seatNo);
                if (seatNo < 1 || seatNo > MAX_SEATS) printf("Invalid seat\n");
                else if (seats[seatNo - 1]) printf("Seat already booked\n");
                else { printf("Name: "); scanf("%s", names[seatNo - 1]); seats[seatNo - 1] = 1; printf("Booked!\n"); }
                break;
            case 3:
                printf("Seat to cancel (1-%d): ", MAX_SEATS); scanf("%d", &seatNo);
                if (!seats[seatNo - 1]) printf("Seat not booked\n");
                else { seats[seatNo - 1] = 0; printf("Cancelled!\n"); }
                break;
            case 4: printf("Exiting\n"); break;
        }
    } while (choice != 4);
    return 0;
}
