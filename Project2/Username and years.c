#include <stdio.h>

int main ()
{
   char name[100];
   int age;

   printf("Whats your name?\n");
   scanf("%s",name);
   printf("How old are you?\n");
   scanf("%d",&age);
   if (age<18) {
    printf("You're too young to use this program\n");
}
else {
    printf("Welcome %s\n", name);
}
   return(0);
}