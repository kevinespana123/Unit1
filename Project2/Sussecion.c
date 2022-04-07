#include <stdio.h>

int main()
{
    int numero,i,j,k;
    printf("[");
        for ( numero = 2 ; numero <= 5 ; numero++ ){
            printf( "%d, ", numero);
            if (numero == 5){
                for ( i = 3 ; i <= 6 ; i++ ){
                    printf( "%d, ", i);
                        if (i==6){
                            for ( j = 4 ; j <= 7 ; j++ ){
                                printf( "%d, ", j);
                                    if(j==7){
                                        for ( k = 5 ; k <= 8 ; k++ ){
                                            printf( "%d,", k);
                                            }   
                                    }
                            }         
                        }
                }
            }       
        }
    printf("]\n");
    return 0;
}