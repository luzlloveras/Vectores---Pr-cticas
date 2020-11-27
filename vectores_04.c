// Imprime el valor y las direcciones en memoria de cada posicion del vector

#include <stdio.h>
#include <stdlib.h>

#define n 6

int main()
{
    int vector[n] = { 45, 32, 24, 56, 25, 90};
    int i;

    printf("Impresion de los valores del vector:\n");
    for (i = 0; i < n; i++)
        printf("\nEl vector[%d] tiene un valor de %d y su direccion en memoria es %p \n", i, vector[i], &vector[i]);

    return 0;
}
