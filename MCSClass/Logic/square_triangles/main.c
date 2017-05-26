#include <stdio.h>

int main(){
    int columns;
    int rows;
    int loopCounter;

    printf("This program prints a square of the specified sides and triangles that can be formed from it\n");
    printf("Input the number of columns(width): \n");
    scanf("%d", &rows);


    /* Square */
    printf("\nThe Square:\n");
    for(loopCounter = 1;loopCounter <= rows; loopCounter++){
        for(columns = 1; columns < rows; columns++){
            printf("* ");
        }
        printf("*\n");
    }

    /* Triangle */
    printf("\nThe Triangle\n");
    for(loopCounter = 1;loopCounter <= rows; loopCounter++){
        for(columns = loopCounter; columns < rows; columns++){
            if(columns <= rows){
                printf("* ");
            }
        }
        printf("*\n");
    }
}
