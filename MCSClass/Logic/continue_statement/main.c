#include <stdio.h>

/*
 * This program prints the numbers from 1 to 10 but skips 5 and 8.
 *
 */

int main()
{
    int counter = 1;
    int range = 10;
    for(counter;counter<=range;counter++)
    {
        if(counter == 5 || counter == 8)
        {
            continue;
        }else{
            printf("%d, ", counter);
        }
    }
}
