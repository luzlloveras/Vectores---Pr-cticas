// VECTORES - Ordenamiento por burbujeo

#include <stdio.h>
#include <stdlib.h>

#define num 10

void CARGAR (int[], int);
void MIRAR (int[], int);
void BURBUJA (int[], int);

int main()
{
    int vec[num];
    srand(7);

    CARGAR (vec, num);
    MIRAR (vec, num);
    BURBUJA (vec, num);
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
void BURBUJA (int v[], int n)
{
    int i, j, aux;

    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (v[j] > v[j+1])
            {
                aux = v[j];     //swapping
                v[j] = v[j+1];
                v[j+1] = aux;
            }
}
