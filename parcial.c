#include <stdio.h>
#include <string.h>

void ordenarCodigos(unsigned int codigos[], float notas[], char nombres[][30], char apellidos[][30], int cantidad)
{
    unsigned int codAnt;
    float notaAnt;
    char nombreAnt[30];
    char apellidoAnt[30];

    for (int posicion = 0; posicion < cantidad - 1; posicion++)
    {
        for (int posComp = 0; posComp < cantidad - 1 - posicion; posComp++)
        {
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
                notas[posComp + 1] = notaAnt;
                strcpy(nombres[posComp + 1], nombreAnt);
                strcpy(apellidos[posComp + 1], apellidoAnt);
            }
        }
    }
}

int main()
{
    int cantidad;
    int posicion = 0;

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &cantidad);

    if (cantidad <= 0)
    {
        printf("La cantidad debe ser mayor que cero.\n");
        return 1;
    }

    unsigned int codigos[cantidad];
    char nombres[cantidad][30];
    char apellidos[cantidad][30];
    float notas[cantidad];

    while (posicion < cantidad)
    {
        printf("Ingrese el codigo, la nota, el nombre y el apellido: ");

        scanf("%u %f %29s %29s",
              &codigos[posicion],
              &notas[posicion],
              nombres[posicion],
              apellidos[posicion]);

        posicion++;
    }

    float totalNotas = 0;

    ordenarCodigos(codigos, notas, nombres, apellidos, cantidad);

    printf("\n--- LISTADO DE ESTUDIANTES ORDENADO POR CODIGO ---\n");

    for (posicion = 0; posicion < cantidad; posicion++)
    {
        totalNotas += notas[posicion];

        printf("Codigo: %u Nombre: %s %s Nota: %.2f\n",
               codigos[posicion],
               nombres[posicion],
               apellidos[posicion],
               notas[posicion]);
    }

    printf("\nLa nota promedio es: %.2f\n",
           totalNotas / cantidad);

    return 0;
}