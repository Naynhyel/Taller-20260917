#include <stdio.h>
//#include <string.h>

typedef struct
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
} Estudiante;

int main()
{
    int cantEstud = 0;
    Estudiante estudiantes[cantEstud];
    int posicion = 0,
        posOrigEsTs[cantEstud];

    float totalNotas = 0;

    FILE *archivo = fopen("estudiantes.dat", "rb");

    fread(&cantEstud, sizeof(int), 1, archivo);
    fread(estudiantes, sizeof(Estudiante), cantEstud, archivo);
    fread(posOrigEsTs, sizeof(int), cantEstud, archivo);
    fclose(archivo);

    printf("")

    for(posicion = 0; posicion < cantEstud; posicion++)
    {
        totalNotas += estudiantes[posicion].nota;
        printf("Codigo: %u Nombre: %s %s Nota: %f\n",
               estudiantes[posicion].codigo, estudiantes[posicion].nombre, estudiantes[posicion].apellido, estudiantes[posicion].nota);
    }

    printf("\nEstudiantes ordenados por codigos con base en el arreglo de posiciones originales:\n");

    for (posicion = 0; posicion < cantEstud; posicion++)
    {
        // totalNotas += estudiantes[posicion].nota;
        printf("codigo: %u Nombre: %s %s Nota: %f\n", 
                estudiantes[posOrigEsTs[posicion]].codigo, estudiantes[posOrigEsTs[posicion]].)
    }

    printf("La nota promedio es: %f\n",
            totalNotas / cantEstud);
    return (0);
}    

