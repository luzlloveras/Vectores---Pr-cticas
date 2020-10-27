// Crear funcion para cargar numeros de forma aleatorio en cada posicion del vector
// Crear funcion para imprimir los numeros de cada posicion del vector

#include <stdio.h>
#include <stdlib.h>

#define num 20

void CARGAR (int[], int);
void MIRAR (int[], int);

int main()
{
    int vector[num];

    CARGAR (vector, num);
    MIRAR (vector, num);

    return 0;
}

void CARGAR (int vector[], int numero)
{
    int i;
    for (i = 0; i < numero; i++)
    {
        vector[i] = rand() % 100;
    }
}

void MIRAR (int vector[], int numero)
{
    int i;
    printf("Impresion de los datos\n");
    for (i = 0; i < numero; i++)
    {
        printf("%4d", vector[i]);
    }
}  
