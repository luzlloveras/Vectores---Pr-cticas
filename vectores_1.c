/* VECTORES - Ingresar 10 numeros y mostrarlos en pantalla.
Calcular el promedio, la cantidad de numeros que superan al mismo e imprimirlos. */

#include <stdio.h>
#include <stdlib.h>

#define numero 10

int main()
{

    int vector[numero], i, suma=0, contador=0;
    float promedio;

    // Se ingresan valores para cada posicion de vector
    printf("Ingrese valores \n");
    for (i = 0; i < numero ; i++)
    {
        printf("\n vector[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    //  Imprime los valores de cada posicion del vector 
    for (i = 0; i < numero ; i++)
    {
        printf("%4d", vector[i]);
    }

    // Calcula promedio
    for (i = 0; i < numero; i++)
    {
        suma += vector[i];
    }
    promedio = (float)suma / numero;
    printf("\n El promedio es: %.2f \n", promedio);

    // Calcula cantidad de valores que superan el promedio
    for (i = 0; i < numero; i++)
    {
        if (vector[i] > promedio)
        {
            contador++;
        }
    }
    printf("Hay %d que superan el promedio de %.2f \n", contador, promedio);

    return 0;
}