#include <stdio.h>

int main(){
    int integers[10];
    int characters[5][20];
    int firstCounter, secondCounter, thirdCounter;
    for(firstCounter=0; firstCounter < 10; firstCounter++){
        integers[firstCounter] = (firstCounter + 100);
    }
    for(secondCounter = 0; secondCounter < 10; secondCounter++){
        printf("Element[%d] = %d\n", secondCounter, integers[secondCounter]);
    }
    return 0;
}
