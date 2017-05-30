#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    (argc < 2)? 
    printf("Please input the file name as an argument.\n") :
    printf("You are now writing to file %s\n", argv[1]);
}
