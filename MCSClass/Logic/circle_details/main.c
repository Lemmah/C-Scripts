#include <stdio.h>

/* This program is written to get circle details given only its radius.
 * Displays: diameter, circumference, area.
 * */


int main() // This the main function
{
    float circle_area;
    float radius;
    float diameter;
    float circumference;
    float PI = 3.142;

    printf("\nThis program finds all the details of a circle given its radius.\n");
    printf("Enter the radius of the circle:\t");
    scanf("%f",&radius);

    /*area of a circle is pi * radius * radius*/
    circle_area = PI * radius * radius;
    /*diameter is radius * 2 */
    diameter = radius * 2;
    /*circumference is PI * diameter */
    circumference = PI * diameter;

    /*display the details*/
    printf("\nThis circle is of:\nRadius: %0.1f\nDiameter: %0.1f\nCircumference: %0.1f\nArea: %0.1f\n",radius,diameter,circumference,circle_area);

    return 0;
}
