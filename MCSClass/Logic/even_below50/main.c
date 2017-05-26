#include <stdio.h>
/*
 * This program prints out even numbers between 1 and 50.
 * This means not inclusive of 50.
 *
 */

int main()
{
    int range = 50;
    int counter = 1;
    int determinant = 2;
    printf("Even numbers between 1 and 50 are: \n");
    for(counter;counter<range;counter++)
    {
        if(counter%determinant==0)
        {
            printf("%d, ", counter);
        }
    }

}
