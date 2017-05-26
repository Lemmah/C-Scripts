#include <stdio.h>
 /* 
  * This program reads the first_name, surname and year of birth
  * It just prints them sequentially: ie first_name surname birth_year
  */
int main() // The main function
{
    char first_name[30]; 
    char surname[30];
    int birth_year;
    
    printf("This program displays names and year of birth.\n");
    printf("\nInput First Name: ");
    scanf("%s",first_name);
    printf("Input Surname: ");
    scanf("%s",surname);
    printf("Input year of birth: ");
    scanf("%d",&birth_year);

    /* output: first_name surname year */
    printf("\n%s %s %d\n", first_name, surname, birth_year);

}
