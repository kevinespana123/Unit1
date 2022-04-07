#include <stdio.h>
#include<stdlib.h>


int main(int argc , char** argv){
    
    int i = 0;
    
    
    for (int i = 1; i < argc; ++i) {
        printf("Welcome to the program, the numbers entered was:%s \n",argv[i] );
    }
    
    return 0;
}