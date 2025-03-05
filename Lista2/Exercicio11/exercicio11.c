#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10//definindo o tamanho do vetor;

int main(int argc, char const *argv[])
{

    srand(time(NULL));//geração da semente;

    int numRef = 0;//número de referência;
    int numVet[tamanho];//vetor de números inteiros;
    int somaMenor = 0;//soma dos números menores que o número de referência;
    int somaIgual = 0;//soma dos números dentro do vetor que são iguais ao digitado;
    for (int i = 0; i < tamanho; i++)
    {
        numVet[i] = rand() % 101;
        printf("%d ", numVet[i]);
    }
    
    printf("\nDigite um número de referência: ");
    scanf("%d", &numRef);

    printf("\nNúmeros maiores que %d: ", numRef);
    for (int i = 0; i < tamanho; i++)
    {
        
        if (numVet[i] > numRef)//números maiores que o número digitado;
        {
            printf("%d ", numVet[i]);
        }

        if (numVet[i] < numRef)//números menores que o valor referência;
        {
            somaMenor = somaMenor + 1;
        }

        if (numVet[i] == numRef)//quantidade de números iguais ao valor digitado;
        {
            somaIgual = somaIgual + 1;
        }
        
        
    }
    
    printf("\nQuantidade de números menores que o valor referência: %d\n", somaMenor);
    printf("Quantidade de números iguais ao número referência: %d\n", somaIgual);

    return 0;
}
