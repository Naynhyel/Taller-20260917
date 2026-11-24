#include <stdio.h>
#include <string.h>

void ordenarCodigos(unsigned int codigos, float notas, char *nombres[][30], char *apellidos[][30])
{
    unsigned int codAnt;
    float notaAnt;
    char nombreAnt[30];
    char apellidoAnt[30];
    
    for (int posicion = 0; posicion < 9; posicion++)
    {
        for (int posComp = 0; posComp < 9 - posicion; posComp++)

            if (codigos[posComp] > codigos[posComp + 1])
            {
                codAnt = codigos[posComp];
                notaAnt = notas[posComp];
                strcpy(nombreAnt, nombres[posComp]);
                strcpy(apellidoAnt, apellidos[posComp]);
                codigos[posComp] = codigos[posComp + 1];
                notas[posComp] = notas[posComp + 1];
                strcpy(nombres[posComp], nombres[posComp + 1]);
                strcpy(apellidos[posComp], apellidos[posComp + 1]);
                codigos[posComp + 1] = codAnt;
                notas[posComp + 1] = notas[posComp];
                strcpy(nombres[posComp + 1], nombreAnt);
                strcpy(apellidos[posComp + 1], apellidoAnt);
            }
    }
}   

int main()
{
    unsigned int codigos[10];
    char nombres [10][30],
        apellidos[10][30];
    float notas[10];
    int posicion = 0;

    while (posicion < 10)
    { 
        printf("ingrese el codigo, la nota y el nombre: ");
        scanf("%u %f %s %s",&codigos[posicion], &notas[posicion], nombres[posicion], apellidos[posicion]);
        posicion++;
    }

    float totalNotas = 0;
    ordenarCodigos(codigos, notas, nombres, apellidos);

    for (posicion = 0; posicion < 10; posicion++)
    {
        totalNotas += notas[posicion];
        printf("codigo: %u nombre: %s %s Nota: %f\n", 
                codigos[posicion], nombres[posicion], apellidos[posicion], notas[posicion]);
    }

    printf("La nota promedio es: %f\n",
        totalNotas / 10);
    return (0);
}