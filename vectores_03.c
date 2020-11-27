// Copia de un vector

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector1[] = {45, 32, 24, 56, 25, 90, 86};
    int vector2[sizeof(vector1)/sizeof(int)];
    int i;

    // Copia directa de vectores
    for (i = 0; i < sizeof(vector1)/sizeof(int); i++)
        vector2[i] = vector1[i];

    printf("\nLos valores del vector 1 son:\n");
    for (i = 0; i < sizeof(vector1)/sizeof(int); i++)
        printf("%10d", vector1[i]);

    printf("\nLos valores del vector 2 son:\n");
    for (i = 0; i < sizeof(vector2)/sizeof(int); i++)
        printf("%10d", vector2[i]);
    
    return 0;
}
