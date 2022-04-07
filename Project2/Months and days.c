#include <stdio.h>                     

int main() {
    
    int i,j,f,e; 
    
        for (int j = 1; j<=12; j++){
            printf("Mes:%d\n",j);
            if(j == 2){
                for(int i=1; i<=28; i++){
                    printf("\tDia: %d\n",i);  
                }
            }else{
                if (j==4 || j==6 || j==9 || j==11){
                    for (f=1;f<=30; f++){
                        printf("\tDia: %d\n",f);
                    }
                        
                }else{
                    if (j==1 || j==3 || j==5 || j==7 || j==8|| j==10|| j==12){
                                for (e=1;e<=31; e++){
                                    printf("\tDia: %d\n",e);
                                }
                    }
                }
            }                 
        }   

    return 0;
}