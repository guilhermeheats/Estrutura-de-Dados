#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define l 2
#define c 3

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));

    double matA[l][c], matB[l][c], matSoma[l][c];
    //ler as matrizes A e B;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matA[i][j] = (rand() % 1001) / 100.0f;
            matB[i][j] = (rand() % 1001) / 100.0f;
        }
    }
    //imprimir as matrizes A e B;
    printf("Matriz A\tMatriz B\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%0.2f ", matA[i][j]);
        }
        printf("\t");
        for (int j = 0; j < c; j++)
        {
            printf("%0.2f ", matB[i][j]);
        }
        
        printf("\n");
    }
    //somar as matrizes A e B;
    printf("\nMatriz Soma:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matSoma[i][j] = matA[i][j] + matB[i][j];
        }
    }
    //imprimir a matriz Soma;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%0.2f ", matSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
