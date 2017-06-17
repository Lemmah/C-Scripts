#include <stdio.h>

int main(){
    float number, power, result, raise;
    printf("Please enter base value and its power seperated by a space: ");
    scanf("%f %f",&number, &power);

    // Compute the result
    result = number;
    for(raise = 1; raise < power; raise++){
        result = result  * number;
    }

    // Print the Result
    printf("%.5f\n", result);

    return 0;
}
