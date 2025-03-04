#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct mercadorias
{
    float precoCom;//preço de compra;
    float precoVen;//preço de venda;
    float lucro;//lucro da mercadoria;
    float lucroPorCem;//lucro em porcentagem;
};


int main(int argc, char const *argv[])
{

    srand(time(NULL));
    struct mercadorias mercadoria[100];//vetor para armazenar os dados da mercadoria;
    
    int somaA = 0;
    int somaB = 0;
    int somaC = 0;

    for (int i = 0; i < 100; i++)
    {

        mercadoria[i].precoCom = (rand() % 101) / 10.0f;//geração do valor de compra;
        mercadoria[i].precoVen = (rand() % 101) / 10.0f;//geração do valor de venda;
        mercadoria[i].lucro = mercadoria[i].precoVen - mercadoria[i].precoCom; //cálculo do lucro;
        mercadoria[i].lucroPorCem = (mercadoria[i].lucro / mercadoria[i].precoCom) * 100.0f;

        printf("%0.2f\n%0.2f\n%0.2f\n%0.2f%%\n\n", mercadoria[i].precoCom, mercadoria[i].precoVen, mercadoria[i].lucro, mercadoria[i].lucroPorCem);

        if (mercadoria[i].lucroPorCem < 10)//lucro < 10%;
        {
            somaA = somaA + 1;
        }

        if (mercadoria[i].lucroPorCem >= 10 && mercadoria[i].lucroPorCem <= 20)//10% <= lucro <= 20%;
        {
            somaB = somaB + 1;
        }

        if (mercadoria[i].lucroPorCem > 20)//lucro > 20%;
        {
            somaC = somaC + 1;
        }
        
    }
    //impressão do total dos números;
    printf("Lucro menor que 10%%: %d\n", somaA);
    printf("Lucro menor ou igual à 10%% e menor ou igual à 20%%: %d\n", somaB);
    printf("Lucro maior que 20%%: %d\n", somaC);

    return 0;
}
