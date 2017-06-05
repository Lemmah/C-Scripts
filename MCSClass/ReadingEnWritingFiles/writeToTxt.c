#include <stdio.h>

int main(void){
    int num;
    FILE *fileOne;
    fileOne = fopen("/home/scholar/WorkSpaces/C/MCSClass/ReadingEnWritingFiles/files/fileOne.txt", "w");

    if(fileOne == NULL){
        printf("Error!");
        return 1;
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fileOne, "%d\n", num);
    fclose(fileOne);

    return 0;
}
