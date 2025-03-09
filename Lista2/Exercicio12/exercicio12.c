#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5//definir tamanho do vetor;

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));//gerar semente aleatória;

    float prodEsc = 0;//resultado do produto escalar;
    float numA[tamanho], numB[tamanho];//dois conjuntos de números reais;

    printf("Coluna A:\tColuna B:\n");
    for (int i = 0; i < tamanho; i++)
    {
        numA[i] = (rand() % 601) / 100.0f;
        numB[i] = (rand() % 601) / 100.0f;
        printf("%0.2f\t\t%0.2f\n", numA[i], numB[i]);

        prodEsc = prodEsc + (numA[i] * numB[i]);//calcular o produto escalar;
    }

    printf("Produto Escalar: %0.2f\n", prodEsc);

    return 0;
}
