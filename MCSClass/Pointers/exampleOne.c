#include <stdio.h>

int main()
{
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of variable *ip: %p\n", ip);
    printf("Address of the real variable var: %p\n", &var);
    *ip = 30;
    printf("Value of var is: %d\n", var);

    return 0;
}
