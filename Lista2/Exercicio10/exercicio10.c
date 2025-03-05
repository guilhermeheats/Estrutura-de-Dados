#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 100//define o tamanho do vetor;

int main(int argc, char const *argv[])
{

    int num[tamanho];
    int maiorNum = 0, menorNum = 0;
    int somaTot = 0;//somar o total dos números do vetor;
    float mediaTot = 0;//média dos números;
    float somaPar = 0, perPar = 0;//soma dos números pares e o percentual deles;

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++)
    {
        
        num[i] = rand() % 101;//gera números de 0 a 100;
        printf("%d ", num[i]);

        somaTot = somaTot + num[i];

        if (num[i] > maiorNum || maiorNum == 0)//verificar se o número é maior;
        {
            
            maiorNum = num[i];

        }
        
        if (num[i] < menorNum || menorNum == 0)//verificar se o número é menor;
        {
            
            menorNum = num[i];

        }
        
        if (num[i] % 2 == 0)//verificar se ele é par;
        {
            
            somaPar = somaPar + 1;

        }
        

    }
    
    perPar = (somaPar * 100) / tamanho;//cálculo do percentual de números pares no vetor;
    mediaTot = ((float)somaTot / tamanho);//cálculo da média do total de números;

    printf("\n\nMaior: %d\nMenor: %d\n", maiorNum, menorNum);
    printf("Total dos números pares: %0.0f\nPercentual de números pares: %0.2f%%\n", somaPar, perPar);
    printf("Soma total dos números: %d\nMédia total dos números: %0.2f\n", somaTot, mediaTot);
    
    return 0;
}
