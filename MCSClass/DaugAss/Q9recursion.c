#include <stdio.h>

int calcPower(int number, int power);

int main(){
    int n,sumOfPowers;
    printf("Input n: ");
    scanf("%d",&n);
    // Recursively raise n to its own power reducing n until n == 1
    sumOfPowers = calcPower(n,n);
    printf("%d",sumOfPowers);
}

// The recursive power calculator
int calcPower(int number, int power){
    int result, raise;
    result = number;
    for(raise = 1; raise < power; raise++){
        result = result  * number;
    }
    
    // Base case
    if(number == 1){
        return result;
    }else{
    // Recursive call suming the powers
    return (result + calcPower(number-1,number-1));
    }
}
