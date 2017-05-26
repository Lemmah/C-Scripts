#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int end_point;
    int factorial;
    int sub_num;
    printf("This program gets the factorial of a number.\n");
    printf("Input a number: ");
    scanf("%d", &number);
    factorial = number;
    sub_num = number - 1;
    for(end_point = 1;sub_num > end_point; sub_num--){
        factorial = factorial * sub_num;
    }
    printf("Factorial of %d is %d", number, factorial);

    return 0;
}
