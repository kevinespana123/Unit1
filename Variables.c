#include <stdio.h>


//Datatype:
//create a variable datatype anyName | 

int myint = 24; //asi se indica la variable entera %d
float myfloat = 22.7; //variable con punto decimal %f
char mychar = '1'; //formato de texto %c
int myarray [7] = {5,27,43,12,8,7,0}; //%ls
               //  0  1  2  3 4 5 6...n


float myfloatarray [255] = {1.33, 2.55, 666.1};
char word [7] = { 'G', 'U', 'S', 'T', 'A', 'V', 'O'};
char country [10] = "Mexico"; //%s
char aName [15] = "Gustavo";

int main() {
    printf ("imprimir valor, myint = %d\n", myint);
    
    printf ("imprimir valor, char = %c\n", mychar);

    printf ("imprimir valor, myfloat = %f\n", myfloat);

    printf ("imprimit valor, country = %s\n", country);

    printf ("imprimir valor, myarray = %d\n", myarray[7]);

   
    printf ("imprimir valor, word= %c\n", word[0]);
    printf ("%c\n", word[1]);
    printf ("%c\n", word[2]);
    printf ("%c\n", word[3]);
    printf ("%c\n", word[4]);
    printf ("%c\n", word[5]);
    printf ("%c\n", word[6]);

    printf ("imprimir valor, *aName = %s\n", aName);


    printf ("imprimir valor, myfloatarray = %f\n", myfloatarray[2]);

    
    


    return 0;

} 
