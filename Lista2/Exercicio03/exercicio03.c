#include <stdio.h>
#include <stdlib.h>
#include <time.h>//duas funções para gerarem números aleatórios;

int main(int argc, char const *argv[])
{

    int num[15];//armazenar os 15 números;

    srand(time(NULL));//gerar os números aleatórios;

    for (int i = 0; i < 15; i++)//impressão dos números numa lista numerada
    {
        
        num[i] = rand() % 100;

        printf("%dº %d ", i+1, num[i]);//verificando se é pár ou impár.
        if (num[i] % 2 == 0)
        {
            printf("- pár.\n");
        }
        else
        {
            printf("- impár.\n");
        }
        
        
    }
    
    return 0;
}
