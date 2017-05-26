#include <stdio.h>

/*
 * This program calculates the power of any number X**Y
 */

int main() // the main function
{
    int number; 
    int power; 
    int result; 
    int raise;
    printf("This program calculates the exponent of any number X^Y.\n");
    printf("Input the base number X: ");
    scanf("%d",&number);
    printf("Input the super number Y: ");
    scanf("%d", &power);

    /* compute the power */
    result = number;
    for(raise = 1; raise < power; raise++){
        result = result  * number;
    }

    /* output result */
    printf("\n%d^%d is %d.\n", number,power,result);



}
