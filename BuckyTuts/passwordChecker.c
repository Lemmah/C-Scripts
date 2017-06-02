#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("This is a password checker, simply tells you if your password is strong, so-so, weak or crap! \n");
    printf("Enter your desired password: ");
    char password[50];
    scanf("%s", password);
    int passlen = strlen(password);
    /* A strong password should have: uppercase letter, lowercase letter, number and a symbol. */
    bool uppercaseLetter = false;
    bool lowercaseLetter = false;
    bool number = false;
    bool symbol = false;

    for(int letter = 0; letter < passlen; letter++ ){
        char specificLetter = password[letter];
        if(isalpha(specificLetter)){
            if(isupper(specificLetter)){
                uppercaseLetter = true;
            }else{
                lowercaseLetter = true;
            }
        }else
        if(isdigit(specificLetter)){
            number = true;
        }else{
            symbol = true;
        }
    }

    // Printing the password state.
    printf("\nPassword status: \n");
    if(passlen < 6){
        printf("Password is too short.\n");
    }else{
        if(uppercaseLetter && lowercaseLetter && number && symbol){
            printf("Strong Password!!\n");
        }else if(uppercaseLetter && lowercaseLetter && number){
            printf("Just so-so password, try using special characters or symbols.\n");
        }else if(uppercaseLetter && lowercaseLetter){
            printf("Weak password, a good password has uppercase letters, lowercase letters, symbols and special characters and also numbers.\n");
        }else{
            printf("This password is crap! Try passwords that have at least one uppercase letter, a lowercase letter, a number and a special character or symbol.\n");
        }
    }

}
