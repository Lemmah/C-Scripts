#include <stdio.h>
#include <cs50.h>
// Getting the length of a string without using strlen
// Constructing our own strlen function
int main(void)
{
    string pName;
    scanf("%s", pName);
    int count = 0;
    while (pName[count] != '\0')
    {
        count++;
    }
    printf("%i\n", count);
}
