// VECTORES - Ordenamiento por seleccion

#include <stdio.h>
#include <stdlib.h>

#define num 10

void CARGAR (int[], int);
void MIRAR (int[], int);
void SELECCION (int[], int);

int main()
{
    int vec[num];
    srand(7);

    CARGAR (vec, num);
    MIRAR (vec, num);
    SELECCION (vec, num);
    MIRAR (vec, num);

    return 0;
}

// Se cargan aleatoriamente valores para cada posicion del vector
void CARGAR (int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] = rand() % 100;
}

// Se imprimen los valores de cada posicion del vector
void MIRAR (int v[], int n)
{
    int i;
    printf("\nIMPRESION DE LOS DATOS\n");
    for (i = 0; i < n; i++)
        printf("%4d", i);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%4d", v[i]);
    printf("\n");
}

// Se intercambia el valor de la posicion incial del vector con el valor minimo
void SELECCION (int v[], int n)
{
    int i, primero, aux, posmin;

    for (primero = 0; primero < n-1; primero++)
    {
        posmin = primero;
        for (i = primero+1; i < n; i++)
            if (v[i] < v[posmin])
                posmin = i;

        //swapping
        aux = v[posmin];
        v[posmin] = v[primero];
        v[primero] = aux;
    
        MIRAR (v, n);
    } 
}
