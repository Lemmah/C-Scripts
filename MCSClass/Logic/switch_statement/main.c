
#include <stdio.h>

/*
 * This program uses a switch statement to display what the user has
 * selected from the ATM menu
 *
 */

int main()
{

    int choice_number;

    printf("Choose an item from the menu below by typing the number of choice.");
    printf("\n\t1. Teller Services.\n\t2. Customer Care.\n\t3. Personal Banking.\n\t4. Mobile Banking.\n\t5. Business Banking.");

    printf("\nEnter your choice number: ");
    scanf("%d", &choice_number);
    switch(choice_number){
        case 1:
            printf("\nThank you for choosing Teller Services. Bye!\n");
            break;
        case 2:
            printf("\nThank you for choosing Customer Care. Bye!\n");
            break;
        case 3:
            printf("\nThank you for choosing Personal Banking. Bye!\n");
            break;
        case 4:
            printf("\nThank you for choosing Mobile Banking. Bye!\n");
            break;
        case 5:
            printf("\nThank you for choosing Business Banking. Bye!\n");
            break;
        default:
            printf("\nPlease choose an item within the menu. Bye!\n");
            break;
    }

}
