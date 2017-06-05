#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char sentence[255], beginPath[32]="files/", endPath[32], filePath[64];
    FILE *sentenceFile;
    //Specifing the file you want to write using path.
    printf("Enter the file name: ");
    scanf(" %s",endPath);
    strcpy(filePath, strcat(beginPath,endPath));
    sentenceFile = fopen(filePath, "w");
    if(sentenceFile == NULL){
        printf("Error! Cannot open file.");
        exit(1);
    }

    printf("Enter a sentence:\n");
    scanf(" %[^\n]s", sentence);

    fprintf(sentenceFile, "%s\n", sentence);
    fclose(sentenceFile);

    return 0;
}
