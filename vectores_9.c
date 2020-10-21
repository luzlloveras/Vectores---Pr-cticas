// VECTORES
// Imprime en pantalla la posicion del vector con el minimo valor

#include <stdio.h>
#include <stdlib.h>

#define num 20

void CARGAR (int[], int);
void MIRAR (int[], int);
int POSICION_MIN (int[], int);

int main()
{
    int vector[num];
    srand(876);

    CARGAR (vector, num); 
    MIRAR (vector, num);

    printf("El valor minimo es %d \n", vector[POSICION_MIN(vector, num)]);
    printf("Y su posicion es %d \n", POSICION_MIN (vector, num));

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

int POSICION_MIN (int vector[], int numero)
{
    int i, posicion_minimo = 0;

    for (i = 1; i < numero; i++)
    {
        if (vector[i] < vector[posicion_minimo])
        {
            posicion_minimo = i;
        }
    }
    return posicion_minimo;
}  