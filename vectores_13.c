// VECTORES - Busqueda secuencial de un numero ingresado por teclado

#include <stdio.h>
#include <stdlib.h>

#define num 20 

void CARGAR (int[], int);
void MIRAR (int[], int);
void BUSQUEDA (int[], int);

int main()
{
    int vec[num];
    srand(7);

    CARGAR (vec, num);
    MIRAR (vec, num);
    BUSQUEDA (vec, num);
    //MIRAR (vec, num);

    return 0;
}

// Se cargan aleatoriamente valores para cada posicion del vector
void CARGAR (int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
    }
}

// Se imprimen los valores de cada posicion del vector
void MIRAR (int v[], int n)
{
    int i;

    printf("\nPOSICIONES\t");
    for (i = 0; i < n; i++)
    {
        printf("%4d", i);
    }
    printf("\nVALORES   \t");
    for (i = 0; i < n; i++)
    {
        printf("%4d", v[i]);
    }
    printf("\n");
}

// Ingreso por teclado un numero
// Busco la posicion del vector con el mismo valor
void BUSQUEDA (int v[], int n)
{
	int i, buscado, flag = 0;
    printf("Ingrese numero a buscar\n");
    scanf("%d", &buscado);
    for (i = 0; i < n-1; i++)
    {
    	if (v[i] == buscado)
    	{
    		printf("se encontro el %d en POSICION %d\n", buscado, i);
    		flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("No se encontro el valor %d\n", buscado);
	}
}






