#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define l 4
#define c 4

int main(int argc, char const *argv[])
{   

    srand(time(NULL));

    int mat[l][c], matT[l][c];//matriz normal e transposta;
    //preencher matriz normal;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = rand() % 6;
        }
    }
    //formar a matriz transposta;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matT[j][i] = mat[i][j];
        }
    }
    //mostrar a matriz original e transposta;
    printf("Matriz Normal\tMatriz Transposta\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\t");
        for (int j = 0; j < c; j++)
        {
            printf("%2d ", matT[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
