#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    // Print Welcome message.
    printf("Welcome to our ATM Services.\n");

    // Default Account Details
    int balance = 50000;
    const PIN = 2090;

    // Check for valid pin
    printf("Enter your pin number: ");
    int enteredPin;
    bool invalidPin = true;
    do{
        scanf("%d", &enteredPin);
        if(enteredPin == PIN){
            validPin = 1;
        }else{
            printf("The PIN you entered in invalid.\n");
            printf("Enter a valid PIN: ");
        }
    }while(invalidPin);

    printf("Please select a service.\n");
    printf("1. Withdraw Cash.");
    printf("2. Check Balance.");
    int service;
    scanf("%d",&service);
    // Checking the service
    switch (service) {
        case 1:
            int withdrawalAmnt;
            printf("Enter withdrawal amount: ");
            scanf("%d", &withdrawalAmnt);
            if(withdrawalAmnt < balance){
            balance -= withdrawalAmnt;
            printf("You have successfully withdrawn %d.\nRemaining balance is %d.", withdrawalAmnt, balance);
            }else{
            printf("Insufficient amount in your account. Your current balance is %d. You cannot withdraw %d.", balance, withdrawalAmnt);
            }
            break;
        case 2:
            printf("Your balance is: %d", balance);
            break;
        default:
            printf("Invalid Choice!");
            break;
    }








    return 0;
}
