#include <stdio.h>

int main(){
    float radius;
    float diameter;
    float circumference;
    float area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    diameter = radius * 2;
    printf("Diameter is %f", diameter);

    circumference = 3.142 * diameter;
    printf("Circumference is %f", circumference);

}
