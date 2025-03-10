#include <stdio.h>//biblioteca padrão do C;
#include <stdlib.h>//biblioteca padrão do C, para o uso da função "rand";
#include <stdbool.h>//biblioteca para o uso dos tipos booleanos no C;
#include <time.h>//biblioteca do C, para uso da função do "srand";

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));//gerar números aleatórios, para não serem os mesmos;

    int numInt[15];//números armazenadados;
    int num;//número a ser digitado;
    int posicao;//posição do número encontrado;
    bool possui;//se achou ou não o número digitado dentro do vetor;

    for (int i = 0; i < 15; i++)//gerador dos números aleatórios;
    {
        numInt[i] = rand() % 15;//intervalo de números 0-10;
    }
    
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 0; i < 15; i++)//buscar o número no vetor;
    {
        if (num == numInt[i])
        {
            posicao = i + 1;
            possui = true;
        }
        
    }
    
    if (possui == true)//mostrar se foi encontrado ou não de uma maneira visual;
    {
        printf("O número digitado foi encontrado: %d\n", num);
        printf("Sua posição: %d \n", posicao);
    }
    else
    {
        printf("O número não foi encontrado: %d\n", num);
    }

    return 0;
}
