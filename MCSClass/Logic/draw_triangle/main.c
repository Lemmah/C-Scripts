#include <stdio.h>
/*
 * This program draws basic right angled triangles from a square
 */

int main(){
    int rows;
    int columns;
    int loopCounter;
    
    printf("\nThis program draws a square and all the right angle triangles that can be formed from it.\n");
    printf("How many columns?: ");
    scanf("%d", &columns);

    /* Square */
    printf("\nThe Square.\n\n");
    for(loopCounter = 1; loopCounter <= columns; loopCounter++){
        for(rows = 1; rows < columns; rows++){
            printf("* ");
        }
        printf("*\n");
    }

    /* Left Top right angle triangle */
    printf("\nLeft Top right angle triangle\n\n");
    for(loopCounter = 1; loopCounter <= columns; loopCounter++){
        for(rows = loopCounter; rows < columns; rows++){
            printf("* ");
        }
        printf("*\n");
    }

    /* Left bottom right angle triangle */
    printf("\nLeft Bottom right angle triangle\n\n");
    for(loopCounter = 1; loopCounter <= columns; loopCounter++){
        for(rows = 1; rows < loopCounter; rows++){
            printf("* ");
        }
        printf("*\n");
    }
    
    /* Right Top right angle triangle */
    printf("\nRight Top right angle triangle.\n\n");
    for(loopCounter = 1; loopCounter <= columns; loopCounter++){
        for(rows = 1; rows < columns; rows++){
            if(rows >= loopCounter){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("*\n");
    }
    
    /* Left Top right angle triangle */ 
    


}
