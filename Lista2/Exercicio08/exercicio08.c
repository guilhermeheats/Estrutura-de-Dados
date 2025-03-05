#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>//colocar o tipo de váriavel "bool";

struct produtos
{
    int codigo;//código do produto;
    int quantidade;//quantidade do produto;
    float valComp;//valor de compra do produto;
    float valVend;//valor de venda do produto;
};

int main(int argc, char const *argv[])
{

    srand(time(NULL));

    int esc = 0;//escolha do usuário;
    int tamanho = 30;//tamanho do vetor;

    struct produtos produto[tamanho];//vetor para armazenar 30 produtos;
    //preenchimento do vetor;
    for (int i = 0; i < tamanho; i++)
    {
        
        produto[i].codigo = rand() % 101;//gerar valores de 0 à 100;
        produto[i].quantidade = rand() % 1001;//gerar valores de 0 1000;
        produto[i].valComp = (rand() % 101) / 10.0f;//gerar valores de 0.00 à 10.0;
        produto[i].valVend = (rand() % 101) / 10.0f;//gerar valores de 0.00 à 10.0;

    }
    
    printf("Digite a sua escolha:\n1-Listagem dos 30 produtos\n2-Listagem de somente um produto\nDigite: ");
    scanf("%d", &esc);

    switch (esc)
    {
    case 1:
        //imprimir os 30 produtos;
        for ( int i = 0; i < tamanho; i++)
        {
            
            printf("\nProduto %d\n", i + 1);
            printf("Código: %d\n", produto[i].codigo);
            printf("Quantidade: %d\n", produto[i].quantidade);
            printf("Valor de Compra: %0.2f\n", produto[i].valComp);
            printf("Valor de Venda: %0.2f\n", produto[i].valVend);

        }
        
        break;
    
    case 2:
        
        int cod = 0;//número do código de produto;
        bool encontrado = false;//código de produto encontrado ou não;

        printf("\nDigite o número do produto que gostaria de listar: ");
        scanf("%d", &cod);

        for (int i = 0; i < tamanho; i++)
        {

            if (cod == produto[i].codigo)
            {
                
                encontrado = true;

                printf("\nProduto %d\n", i + 1);
                printf("Código: %d\n", produto[i].codigo);
                printf("Quantidade: %d\n", produto[i].quantidade);
                printf("Valor de Compra: %0.2f\n", produto[i].valComp);
                printf("Valor de Venda: %0.2f\n", produto[i].valVend);

            } 

        }

        if (encontrado == false)//para saber se foi encontrado o produto;
        {
            printf("\nProduto não encontrado. Reinicie o programa.\n");
        }

        break;

    default:
        printf("\nDigite a escolha certa. Reinicie o programa\n");
        break;
    }

    return 0;
}
