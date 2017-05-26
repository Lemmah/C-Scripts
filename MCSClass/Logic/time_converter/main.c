#include <stdio.h>
/*
 * This program accept minutes as input and 
 * displays the number of hours and mins as output
 * 
 */

int main() // The main function
{
    int mins; 
    int c_hours = 0; 
    int c_mins = 0; // input_minutes,converted_minutes,converted_hours

    printf("This program converts minutes into hours and minutes\n");
    printf("\nEnter the number of minutes:\t");
    scanf("%d", &mins);

    /* number of hours is min // 60 */
    c_hours = mins/60;
    /* remaining c_mins is mins % 60 */
    c_mins = mins % 60;

    /* display the details */
    printf("%d minutes is equal to %d hours and %d minutes.\n",mins,c_hours,c_mins);
}
