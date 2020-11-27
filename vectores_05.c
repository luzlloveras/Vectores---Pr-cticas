// Crear funcion para cargar numeros en cada posicion del vector
// Crear funcion para imprimir los numeros de cada posicion del vector

#include <stdio.h>
#include <stdlib.h>

#define num 6

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
        printf(" vector[%d] = ", i);
        scanf("%d", &vector[i]);
    }
}

void MIRAR (int vector[], int numero)
{
    int i;
    printf("Impresion de los datos\n");
    for (i = 0; i < numero; i++)
        printf("%6d", vector[i]);
}
