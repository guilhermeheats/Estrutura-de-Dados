#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define l 10
#define c 10

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    int mat[l][c];
    //prencher e imprimir a matriz;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = rand() % 1001;
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nValores não nulos:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != 0)
            {
                printf("Linha: %d\tColuna: %d\tValor: %3d\n", i, j, mat[i][j]);
            }
            
        }
    }
    

    return 0;
}   
