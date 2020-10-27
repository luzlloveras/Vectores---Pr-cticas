// VECTORES
// Imprime en pantalla el valor minimo de las posiciones del vector

#include <stdio.h>
#include <stdlib.h>

#define num 20

void CARGAR (int[], int);
void MIRAR (int[], int);
int MINIMO (int[], int);

int main()
{
    int vector[num];
    srand(876);

    CARGAR (vector, num); 
    MIRAR (vector, num);

    printf("El valor minimo es %d \n", MINIMO(vector, num));

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

int MINIMO (int vector[], int numero)
{
    int i, valor_minimo = vector[0];

    for (i = 1; i < numero; i++)
    {
        if (vector[i] < valor_minimo)
        {
            valor_minimo = vector[i];
        }
    }
    return valor_minimo;
}  
