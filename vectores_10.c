// Construir funcion INTERCAMBIO.
// El valor que esta en el primer lugar va a ir al lugar donde esta el valor minimo.

#include <stdio.h>
#include <stdlib.h>

#define num 10
void CARGAR (int[], int);
void MIRAR (int[], int);
void INTERCAMBIO (int[], int);

int main()
{
    int vector[num];
    srand(876);

    CARGAR (vector, num);
    MIRAR (vector, num);
    INTERCAMBIO (vector, num);
    MIRAR (vector, num);

    return 0;
}

// Se cargan aleatoriamente valores para cada posicion del vector
void CARGAR (int vec[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        vector[i] = rand() % 100;
}

// Se imprimen los valores de cada posicion del vector
void MIRAR (int vec[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%6d", i);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%6d", vec[i]);
    printf("\n");
}

// Se intercambia el valor de la posicion incial del vector con el valor minimo
void INTERCAMBIO (int vec[], int n)
{
    int i, aux, posicion_minimo = 0;
    for (i = 1; i < n; i++)
        if (vec[i] < vec[posicion_minimo])
            posicion_minimo = i;
    aux = vec[0];
    vec[0] = vec[posicion_minimo];
    vec[posicion_minimo] = aux;
}
