#include <stdio.h>

/*
 * This program determines whether the number input by a user is odd or even.
 *
 */

int main()
{
    int number;
    int determinant = 2;
    printf("Input the number you wanna check: ");
    scanf("%d",&number);

    if(number % determinant == 0)
        printf("%d is even.",number);
    else
        printf("%d is odd.", number);
}
