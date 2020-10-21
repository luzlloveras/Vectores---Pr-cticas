// Crear funcion para cargar numeros de forma aleatorio en cada posicion del vector
// Crear funcion para imprimir la posicion del vector y su valor

#include <stdio.h>
#include <stdlib.h>

#define num 20

void CARGAR (int[], int);
void MIRAR (int[], int);

int main()
{
    int vector[num];
    srand(876);

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
        printf("%4d", i);
    }
    printf("\n");
    for (i = 0; i < numero; i++)
    {
        printf("%4d", vector[i]);
    }
    printf("\n");
}  