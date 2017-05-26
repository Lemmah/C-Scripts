#include <stdio.h>
/*
 * This program checks whether a number is prime or not.
 */
int main()
{
    int counter;
    int num; 
    int prime = 1; // setting a flag.
    printf("Enter a number: ");
    scanf("%d", &num);
    for(counter=2;counter<num;counter++){
        if(num%counter==0){
            prime = 0;
            break;
        }
    }

    if(prime==1){
        printf("%d is a prime number.", num);
    }else{
        printf("%d is not a prime number.", num);
    }
}
