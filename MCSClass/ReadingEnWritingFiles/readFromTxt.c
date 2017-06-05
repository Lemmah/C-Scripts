#include <stdio.h>
int main(void){
    int num;
    FILE *fileOne;

    if((fileOne = fopen("/home/scholar/WorkSpaces/C/MCSClass/ReadingEnWritingFiles/files/fileOne.txt", "r")) == NULL){
        printf("Error! Cannot open file!");
        return 1;
    }

    fscanf(fileOne, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fileOne);

    return 0;
}

