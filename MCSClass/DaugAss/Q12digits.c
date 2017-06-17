#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int enteredNumber, numberOfDigits;
    printf("Enter a number: ");
    scanf("%d", &enteredNumber);
    // Convert the number to a string for string manipulation
    char enteredNumberChar[256];
    sprintf(enteredNumberChar, "%d", enteredNumber);
    // Count number of characters
    numberOfDigits = strlen(enteredNumberChar);
    printf("The number is of digits: %d\n", numberOfDigits);
    // Printing each digit of the number
    printf("The digits of the number: ");
    for(int i = 1; numberOfDigits >= i; i++){
        printf("%c ",enteredNumberChar[i-1]);
    }
}
