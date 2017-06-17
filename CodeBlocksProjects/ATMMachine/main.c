#include <stdio.h>
#include <stdlib.h>

// Function declarations
void validatePin(int PIN);
void transcations(int balance, int PIN);
void menu();
int withdraw(int withdrawalAmt, int balance);
int depositing(int depositAmt, int balance);
void printMinistatement();

int main()
{
    // Print Welcome message.
    printf("Welcome to our ATM Services.\n");

    // Default Account Details
    int balance = 50000;
    const int PIN = 2090;

    // Check for valid pin
    printf("Enter your pin number: ");
    // If pin is valid the user is allowed to proceed to a transaction.
    validatePin(PIN);

    // Get done with the transactions.
    transcations(balance, PIN);

    printf("\nBye bye!\n");

    return 0;
}




// Function Definitions

void validatePin(int PIN){
    // Creating some local variables.
    int enteredPin;
    int validPin = 0;
    int attempts = 0;
    int maxAttempts = 3;

    do{
        scanf("%d", &enteredPin);
        attempts += 1;
        if(enteredPin == PIN){
            validPin = 1;
        }else{
            printf("The PIN you entered in invalid.\n");
            printf("Enter a valid PIN %d more attempts: ", maxAttempts-attempts);
        }

        // Exit the program if max attempts are reached.
        if(attempts>=maxAttempts){
            printf("\nYour card has been held. Please consult with the bank.\n");
            exit(1);
        }
    }while(validPin == 0);
}

void menu(){
    printf("Please select a service.\n");
    printf("1. Withdraw Cash.\n");
    printf("2. Check Balance.\n");
    printf("3. Deposit Cash.\n");
    printf("4. Print Ministatement.\n");
    printf("Enter (1/2/3/4): ");
}

void transcations(int balance, int PIN){
    int transaction;
    do{
        // Printing the menu.
        menu();
        // Checking the service
        int service;
        scanf("%d",&service);
        int withdrawalAmnt = 0;
        int depositAmt = 0;
        switch (service) {
            case 1:
                balance = withdraw(withdrawalAmnt,balance);
                break;
            case 2:
                printf("Your balance is: %d", balance);
                break;
            case 3:
                balance = depositing(depositAmt,balance);
                break;
            case 4:
                printMinistatement();
                break;
            default:
                printf("Invalid Choice!");
                break;
        }
        printf("\nDo you want to do another transaction?\n1.Yes 2.No\n");
        printf("Enter choice: ");
        scanf("%d", &transaction);
        }while(transaction == 1);
}

int withdraw(int withdrawalAmnt,int balance){
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawalAmnt);
    if(withdrawalAmnt < balance){
    balance -= withdrawalAmnt;
    printf("You have successfully withdrawn %d.\nRemaining balance is %d.", withdrawalAmnt, balance);
    }else{
    printf("Insufficient amount in your account. Your current balance is %d. You cannot withdraw %d.", balance, withdrawalAmnt);
    }
    return balance;
}

int depositing(int depositAmt, int balance){
    printf("\nEnter the deposit amount: ");
    scanf("%d", &depositAmt);
    balance += depositAmt;
    printf("Transaction successful. New balance: %d", balance);
    return balance;
}

void printMinistatement(){
printf("\nPlease wait as ministatement is processed...");
printf("\nCollect your receipt below.\n\n");
}
