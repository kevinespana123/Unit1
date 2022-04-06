#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float area, lado_a, lado_b, perimetro;
    printf ("Ingrese el valor de lado a: ");
    scanf ("%f", &lado_a);
    (void) getchar ();
    printf ("Ingrese el valor de lado b: ");
    scanf ("%f", &lado_b);
    (void) getchar ();
    area=lado_a*lado_b;
    perimetro=(lado_a+lado_b)*2;
    if(lado_a==lado_b)
        printf ("Es cuadrado\n");
    else
        printf ("Es recta\240ngulo\n");
    printf ("Valor del area: %g\n", area);
    printf ("Valor del perimetro: %g\n", perimetro);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}