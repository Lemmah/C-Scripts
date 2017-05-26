#include <stdio.h>
#include <cs50.h>

// Calculating the factorial of a number using a recursive function

int long factorial(int number);
    
int main()
{
    string name;
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    int long numberFactorial = factorial(number);
    printf("Eureka, factorial of %d is %ld\n", number, numberFactorial);
}

// the recursive factorial function
int long factorial(int number)
{
    if(number <= 1)
    {
        return number;
    }
    else
    {
        return (number * factorial(number -1));
    }
}
