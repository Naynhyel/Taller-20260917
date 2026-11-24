#include <stdio.h>
#include <string.h>

void mostrarMatriz(int qFilas, int qColumnas, float a[qFilas][qColumnas])
{
    for (int posicionFila = 0; posicionFila < qFilas; posicionFila++)
    {
    
        for (posicionColumna = 0; posicionColumna < qColumnas; posicionColumna++)
            printf("%4.1f " a[posicionFila][posicionColumna]);
            
        printf("\n");
    }       
}   

int main()
{
    unsigned int cantFilasA = 0,
                 cantColumnasA = 0,
                 cantFilasB = 0,
                 cantColumnasB =0;
    
    printf("Ingrese los tamanios de las matrices a y b: ");
    scanf("%d %d %d %d", &cantFilasA, &cantColumnas, &cantFilasB, &cantColumnasB);           
   
    int = matricesCompatiblesProducto = cantColumnasA == cantFilasB,
          matricesCompatiblesSumaResta = (cantFilasA == cantFilasB && cantColumnasA == cantColumnasB);
        
    if(!matricesCompatiblesSumaResta && !matricesCompatiblesProducto){
        printf("Las matrices no son compatibles para la suma y la resta.\n");
        return -1;
    }

    float a[cantFilasA][cantColumnasA],
        b[cantFilasB][cantColumnasB],
        amasb[cantFilasA][cantColumnasA],
        amenosb[cantFilasA][cantColumnasA],
        aporb[cantFilasA][cantColumnasB];
    
    int posicionFila = 0,
        posicionColumna = 0;


    while (posicionFila < cantFilasA)
    {
        posicionColumna = 0;
        while (posicionColumna < 2)
        { 
            printf("Ingrese el valor a[%d][%d]: ", posicionFila, posicionColumna);
            scanf("%f", &a[posicionFila][posicionColumna]);
            posicionColumna++;
        }



posicionFila = 0;
while(posicionFila < cantFilasB)
{
        posicionFila++;
    }

    mostrarMatriz(cantFilasA, cantColumnasA, a);

    for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
                   printf("%4.1f " a[posicionFila][posicionColumna]);
            
        printf("\n");
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
            printf("%4.1f " b[posicionFila][posicionColumna]);
        
        printf("\n");
    }
    
     for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
            amasb[posicionFila][posicionColumna] = a[posicionFila][posicionColumna] +
                                                   b[posicionFila][posicionColumna]; 
        
    }
    
     for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
            printf("%4.1f "amasb[posicionFila][posicionColumna]);
        
        printf("\n");
    }
    
    for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
            amenosb[posicionFila][posicionColumna] = a[posicionFila][posicionColumna] -
                                                   b[posicionFila][posicionColumna]; 
        
    }
    
     for (posicionFila = 0; posicionFila < 2; posicionFila++){
    
        for (posicionColumna = 0; posicionColumna < 2;)
            printf("%4.1f "amenosb[posicionFila][posicionColumna]);
        
        printf("\n");
    }
    
     for (posicionFila = 0; posicionFila < 2; posicionFila++){
        
        for (posicionColumna = 0; posicionColumna < 2; posicionColumna++){
           aporb[posicionFila][posicionColumna] = 0;

            for(int posVect = 0; posVect < 2; posVect++)
               aporb[posicionFila][posicionColumna] += [posicionFila][posVect] *
                                                   b[posVect][posicionColumna]; 
        
        }
    }

     
    }
    
    return (0);
}
