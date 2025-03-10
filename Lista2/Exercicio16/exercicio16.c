#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define l 10
#define c 10

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    int mat[l][c];
    int linha = 0, coluna = 0, valor = 0;//valores a serem lidos;

    printf("Matriz 10x10\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = rand() % 1;//apenas para gerar números 0;
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDigite entre os valores 0-9\n");
    printf("Digite a linha: ");
    scanf(" %d", &linha);
    printf("Digite a coluna: ");
    scanf(" %d", &coluna);
    
    int p = 0;//verificar se a digitação está correta dos índices;

    if (linha >= 0 && coluna >= 0)
    {
        if (linha < 10 && coluna < 10)
        {
            p = 1;
            printf("Digite o valor: ");
            scanf(" %d", &valor);

            mat[linha][coluna] = valor;
    
            printf("\nMatriz 10x10\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("%2d ", mat[i][j]);
                }
                printf("\n");
            }
        }
    }
    if (!p)
    {
        printf("Digite os valores de índice de 0-9.\n");
    }
    

    return 0;
}
