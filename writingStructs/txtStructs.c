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

    char const csvFileName[] = "employees.csv";
    struct emp emp1[5] = {
      {"Yoda",23,45000,"Asia"},
      {"Darth",34,2344,"NAmerica"},
      {"Jabba",22,5566,"Africa"},
      {"Luke",33,3399,"SAmerica"},
      {"Leia",44,6677,"Europe"}
    };

    FILE *fp;
    fp = fopen(csvFileName,"w");
    int i=0;
   for(i=0; i<5; i++)
   {
      fprintf(fp,"%s, %d, %d, %s\n",emp1[i].name,emp1[i].age,emp1[i].salary,emp1[i].address);
    }

    fclose(fp);
 }
