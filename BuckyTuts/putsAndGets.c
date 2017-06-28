#include <stdio.h>
#include <cs50.h>

int main(void){
    string catsName;
    puts("What is the cats name?");
    // gets(catsName); // The gets function is depreciated and is now said to be dangerous.

    scanf("%s", catsName);
    puts(catsName);
    
}
