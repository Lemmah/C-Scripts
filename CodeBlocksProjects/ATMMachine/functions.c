#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2);

int main(){
// A function to add two numbers.
int sumation = add(2,3);
printf("The sum of 2 and three is: %d",sumation);
return 0;
}

int add(int num1,int num2){
    int sumation = num1 + num2;
    return sumation;
}
