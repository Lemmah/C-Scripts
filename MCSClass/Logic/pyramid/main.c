#include <stdio.h>
// This program does not work as intended, find the bug and correct it.

int main(void)
{
    int rows, col, temp, n;
    printf("Input number of rows: \n");
    scanf("%d", &n);
    temp = n;
    for(rows = 1; rows < n; rows++)
    {
        for(col = 1; col < temp; col++)
        {
            temp--;
            printf(" ");
            for(col = 1; col < 2 * rows -1; col++)
            {
                printf("* ");
                printf("\n");
            }
        }
    }
    return 0;
}
