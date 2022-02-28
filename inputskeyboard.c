#include <stdio.h>

char name[255];

int main(){

    printf("Enter a name:   \n");
    scanf("%s", name); //scanf sirve para leer las entradas del teclado al correr el codigo
    printf("you enter the name: %s\n", name);



    return 0;
}
