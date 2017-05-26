#include <stdio.h>

/*
 * Printing ascii character equivalents.
 * Illustrating typecasting in C
 *
 */

int main(void){
    //loop through int 65 which is A and converting the Ascii to char explicitly
    for(int i = 65; i < 65 + 26; i++){
        printf("%c is %i\n", (char) i, i);
    }
    // now, implicitly C knows that i should be char because of %c
    for(int i = 65; i < 65 + 26; i++){
        printf("%c is %i\n", (char) i, i);
    }
}
