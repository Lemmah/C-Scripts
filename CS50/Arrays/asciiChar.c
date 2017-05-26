#include <stdio.h>

/* Looping through characters */

int main(void){
    //looping through char and typecasting for int
    for(char c = 'A'; c <= 'Z'; c++){
        printf("%c is %i\n", c, (int) c);
    }
}
