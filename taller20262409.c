#include <stdio.h>

int main(int argc, char * argv[]){
    //char primery2doNombres[14] = "ANTONIO PEREZ";

    if(argc != 2)
       return(-1);
    

    int Alejandro = 1;
   
   while(Alejandro != 100){
    int juan = Alejandro / 7;


    int vez = 0;
    int antMult = 0;

    while(juan != vez){
        antMult += 7;
        ++vez;
    }

    if(antMult == Alejandro)
       printf("%d\n",Alejandro);

       Alejandro++;
   
 }



    return(0);
} 