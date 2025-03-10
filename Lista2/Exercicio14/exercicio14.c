#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    int vetX[tamanho], vetY[tamanho], somaVet[tamanho], prodVet[tamanho], difVet[tamanho];
    //preencher os vetores;
    printf("Vetor X\tVetor Y\n");
    for (int i = 0; i < tamanho; i++)
    {
        vetX[i] = rand() % tamanho;
        vetY[i] = rand() % tamanho;
        printf("%d\t%d\n", vetX[i], vetY[i]);
    }
    //soma entre vetor x e vetor y, na mesma posição;
    printf("\na. Soma entre x e y\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        somaVet[i] = vetX[i] + vetY[i];
        printf("Soma: %d\tX=%d\tY=%d\n", somaVet[i], vetX[i], vetY[i]);
    }
    //produto entre vetor x e vetor y, na mesma posição;
    printf("\nb. Produto entre x e y\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        prodVet[i] = vetX[i] * vetY[i];
        printf("Produto: %d\tX=%d\tY=%d\n", prodVet[i], vetX[i], vetY[i]);
    }
    //diferença entre vetor x e vetor y, elementos de y que não existam em x;
    printf("\nc. Diferença entre x e y\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        int estaY = 0;//verificar se o número em y está em x;
        for (int j = 0; j < tamanho; j++)
        {
            if (vetX[i] == vetY[j]) {
                estaY = 1;//achou um número igual entre x e y;
                break;//para não repetir e poupar tempo;
            }
        }
        if (!estaY)
        {
            printf("%d ", vetX[i]);//imprimir o número que não está em y;
        }
        
    }
    //intersecção do vetor x e vetor y, elementos que se encontram nos dois vetores;
    printf("\n\nd. Intesecção de x e y\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        int estaXY = 0;
        for (int j = 0; j < tamanho; j++)
        {
            if (vetX[i] == vetY[j])
            {
                estaXY = 1;//achou o número igual entre x e y;
                break;
            }
            
        }
        if (estaXY == 1)
        {
            printf("%d ", vetX[i]);//imprimir números apenas iguais em x e y;
        }
    }
    //união entre o vetor x e vetor, todos os elementos de x e todos os elementos de y que não estão em x;
    printf("\n\ne. União de x e y\n\n");
    for (int i = 0; i < tamanho; i++)//imprimir todos os elementos de x;
    {
        printf("%d ", vetX[i]);
    }
    for (int i = 0; i < tamanho; i++)//imprimir os elementos exclusivos de y;
    {
        int estaX = 0;
        for (int j = 0; i < tamanho; i++)
        {
            if (vetX[i] == vetY[j])
            {
                estaX = 1;
                break;
            }
            
        }
        if (!estaX)
        {
            printf("%d ", vetY[i]);
        }
    }
    printf("\n");
    return 0;
}
