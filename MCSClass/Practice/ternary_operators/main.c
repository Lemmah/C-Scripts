#include <stdio.h>
/* Using ternary operators to check if number is odd or even.
 */
int main(void){
    int number;
    printf("Please input number to check if odd or even: ");
    scanf("%d",&number);
    // Now here comes the ternary operator.
    (number <= 0)? printf("This number is not greater than zero."):
    printf("\nThis number is %s.\n", (number % 2 == 0)? "even": "odd");
}
