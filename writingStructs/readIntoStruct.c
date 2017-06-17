#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp
{
    char name[15];
    int age;
    int salary;
    char address[30];
};

int main(void)
{
    const char FILENAME[] = "employees.csv";
    FILE *file = fopen(FILENAME, "r");
    
}