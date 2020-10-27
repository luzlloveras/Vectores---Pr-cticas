// VECTORES - Busqueda secuencial de un numero ingresado por teclado

#include <stdio.h>
#include <stdlib.h>

#define num 10 

void CARGAR (int[], char[], float[], int);
void MIRAR (int[], char[], float[], int);

int main()
{
    int legajo[num];
    char sexo[num];
    float promedio[num];

    srand(7);

    CARGAR (legajo, sexo, promedio, num);
    MIRAR (legajo, sexo, promedio, num);

    return 0;
}

// Se cargan aleatoriamente los datos para cada posicion del vector
void CARGAR (int leg[], char sex[], float prom[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        leg[i] = 10000 + rand() % 90000;
        prom[i] = (200 + rand() % 801) / 100.0;
        if (rand() % 2 == 1)
        {
            sex[i] = 'F';
        }
        else
        {
            sex[i] = 'M';
        }
    }
}

// Se imprimen los valores de cada posicion del vector
void MIRAR (int leg[], char sex[], float prom[], int n)
{
    int i;
    printf("\n\n\t\t %10s %10s %10s\n", "LEGAJO", "SEXO", "PROMEDIO");

    for (i = 0; i < n; i++)
    {
        printf("\n\n\t\t %10d %10c %10.2f", leg[i], sex[i], prom[i]);
    }
    printf("\n\n");
}

