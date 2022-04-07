#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
    float num1 = atoi(argv[1]);
    float num2 = atoi(argv[2]);
    int add = num1 + num2;
    int subs = num1 - num2;
    int mult = num1 * num2;
    float div = num1 / num2;
    printf("The sum is equal to %d\n", add);
    printf("The substraction is equal to %d\n", subs);
    printf("The multiplication is equal to %d\n", mult);
    printf("The division is equal to %f\n", div);

    return 0;
}