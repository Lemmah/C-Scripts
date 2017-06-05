#include <stdio.h>
#include <stdlib.h>

int main(void){
    char sentence[1000];
    FILE *sentenceFile;
    char filePath[55] = "files/sentenceFile.txt";
    sentenceFile = fopen(filePath, "w");
    if(sentenceFile == NULL){
        printf("Error! Cannot open file.");
        exit(1);
    }

    printf("Enter a sentence:\n");
    scanf("%[^\n]s", sentence);

    fprintf(sentenceFile, "%s\n", sentence);
    fclose(sentenceFile);

    return 0;
}
