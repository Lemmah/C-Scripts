#include <stdio.h>

int main(){
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    printf("This program checks which is the greatest number among three input numbers.\n");
    printf("Input first number: ");
    scanf("%d", &firstNumber);
    printf("Input second number: ");
    scanf("%d", &secondNumber);
    printf("Input third number: ");
    scanf("%d", &thirdNumber);

    if(firstNumber>secondNumber){
        if(firstNumber>thirdNumber){
            printf("%d is the largest number", firstNumber);
        }else{
            printf("%d is the largest number", thirdNumber);
        }
    }else if(secondNumber > thirdNumber){
        printf("%d is the greatest number", secondNumber);
    }else if(secondNumber < thirdNumber){
        printf("%d is the greatest number", thirdNumber);
    }else{
        printf("All the numbers are equal");
    }
    
}
