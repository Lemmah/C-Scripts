#include<stdio.h>
struct emp
{
   char name[10];
   int age;
}e;

int main(void)
{
   FILE *p,*q;
   p = fopen("one.txt", "a");
   q = fopen("one.txt", "r");
   printf("Enter Name and Age: ");
   scanf("%s %d", e.name, &e.age);
   fprintf(p,"%s %d\n", e.name, e.age);
   fclose(p);
   do
   {
      fscanf(q,"%s %d\n", e.name, &e.age);
      printf("%s %d\n", e.name, e.age);
   }
   while( !feof(q) );
   fclose(q);
   
   return 0;
}
