#include <stdio.h>

/* This program calculates the third angle of a triangle.
 * It takes the first two angles from the user input then computes the third angle.
 * Point: The sum of angles in a triangle is 180
 */

int main() // The main function
{
    int first_angle; 
    int second_angle; 
    int third_angle;

    /* prompt for input of first two angles */
    printf("\nThis program will get the third angle of a triangle given the first two.\n");
    printf("Input the value of the first angle: ");
    scanf("%d", &first_angle);
    printf("Input the value of the second angle: ");
    scanf("%d", &second_angle);

    /* calculate: sum of angles is 180 */
    third_angle = 180 - (first_angle + second_angle);

    /* output the third angle */
    printf("\nThe third angle is %d.\n", third_angle); 
}
