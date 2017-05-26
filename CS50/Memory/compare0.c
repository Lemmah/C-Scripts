#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("s: ");
    char s[60];
    scanf("%s",s);
    printf("t: ");
    char t[60];
    scanf("%s",t);

    // Compare
    if ( s == t )
    {
        printf("equal\n");
    }
    else
    {
        printf("different\n");
    }


}
