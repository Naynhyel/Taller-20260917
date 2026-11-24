#include <stdio.h>

int main(int argc, char * argv[]){
    //char primery2doNombres[14] = "ANTONIO PEREZ";

    if(argc != 2)
       return(-1);
    
    int posicion =1;

     printf("la cantidad de cadenas es %d y el nombre es ", argc);

    while(posicion < argc){
         printf("%s ", argv[posicion++]);
    }

    printf("\n");

    return(0);
} 