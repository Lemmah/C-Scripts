#include <stdio.h>
#include <math.h>

/*
 * This program calculates the simple and compound interest
 * given the principal, the rate and the time
 */

int main() // The main function
{
    int principal;
    int months_time;
    int c_time;
    int simple_interest = 0;
    int compound_interest = 0;
    float rate;

    printf("\n*************************************************************************************************\
            \nThis program calculates the simple and compound interest based on input principle, time and rate.\
            \n*************************************************************************************************\n\n");
    printf("Enter the Principal: ");
    scanf("%d", &principal);
    printf("Enter time in months: ");
    scanf("%d", &months_time);
    printf("Enter the rate in %%: ");
    scanf("%f", &rate);

    simple_interest = principal * rate/100 * months_time/12;
    //compound_interest = principal * pow((1 + rate/100), (months_time/12)) - principal;
    /* computing compound interest using for loop to compute the power */
    int power = months_time/12;
    float initial_rate = 1 + rate/100;
    int counter;
    float incrementing_rate = initial_rate;
    for(counter = 1; counter < power; counter += 1){
        incrementing_rate = incrementing_rate * initial_rate;
    }
    compound_interest = principal * incrementing_rate - principal;

    /* output the simple and compound interest */
    printf("\nSimple interest: %d.\nCompound interest: %d.\n",simple_interest,compound_interest);
}
