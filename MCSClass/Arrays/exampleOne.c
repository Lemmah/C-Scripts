#include <stdio.h>
/* Using arrays */

int main(){
    // Declaration and initialization
    int numbers[7] = {10, 20, 30, 40, 50, 60, 70};     
    //print using for loop
    int position = 1;
    //Can I change a number?
    numbers[2] = 100;

    for(position; position<=7; ++position){
        printf("Number at position %d is %d\n", position, numbers[position-1]);
    }
    return 0;
}
