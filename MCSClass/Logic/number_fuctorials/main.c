#include <stdio.h>

/*
 * This program calculates the factorial of a number.
 *
 */

int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    int counter = number - 1;
    int factorial = number;
    
    for(counter;counter>1;counter--)
    {
        factorial *= counter;
    }
    printf("Eureka, %d! = %d.",number,factorial);
}
