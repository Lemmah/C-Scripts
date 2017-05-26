#include <stdio.h>
/*
 * This program calculates the gcd and lcm of two numbers
 */

void main(){
    int gcd;
    int lcm;
    int firstNumber;
    int secondNumber;
    int counter;

    printf("Please enter first number: ");
    scanf("%d", &firstNumber);
    printf("Please enter second number: ");
    scanf("%d", &secondNumber);

    if(firstNumber%secondNumber == 0){
        gcd = secondNumber;
    }else if(secondNumber%firstNumber == 0){
        gcd = firstNumber;
    }else{
        gcd = firstNumber * secondNumber;
    }
    printf("gcd = %d", gcd);

    

}
