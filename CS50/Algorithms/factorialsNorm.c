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

    int long factorial = number;
    
    for(int counter = number - 1;counter>1;counter--)
    {
        factorial *= counter;
    }
    printf("Eureka, %d! = %ld.",number,factorial);
}
