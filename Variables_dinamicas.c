#include <stdio.h>



// declarar
int temp = 2;
float pi = 3.1416;
char initial = 'G';
char* name = "Gustavo Montes";

// formatos de texto 
// \n salto de linea
// \t tabulador

int main() {

    
    printf("Temperatura %i, mi nombre es: %s\n", temp, name);


    //ejecucion
    temp = 15; // debajo de esta linea si imprimo mi temp vale 15

    printf("temperatura %i, mi nombre es %s\n", temp, name);

    



    return 0;
}
