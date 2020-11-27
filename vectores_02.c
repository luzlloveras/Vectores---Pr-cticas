// Imprime cantidad de bytes en memoria de un vector y sus variables.

#include <stdio.h>
#include <stdlib.h> 

#define numero 6

int main()
{
    int vector[numero], i;

    printf("vector ocupa %lu bytes en memoria\n", sizeof(vector));
    printf("vector tiene %lu variables\n", sizeof(vector) / sizeof(int));

    // Ingreso de valores del vector
    for (i = 0; i < numero; i++)
        vector[i] = 2 * i + 1;

    // Impresion de posiciones del vector 
    for (i = 0; i < numero; i++)
        printf("%10d", vector[i]);
    printf("\n");

    return 0;
}
