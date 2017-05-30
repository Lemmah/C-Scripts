#include <stdio.h>

int main(int argc, char **argv){
    printf("There were %d commandline arguments.\n", argc);
    printf("This program is named: \"%s\". \n", argv[0]);
    /* looping through all the commandline arguments are passed incase there are any. */
    for(int count = 0; count < argc; count++){
        printf("%s\n", argv[count]);
    }
}
