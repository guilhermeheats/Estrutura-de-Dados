#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>//utilizado para poder usar as funções "sqrt() e o "pow()";

#define tamanho 10

int main(int argc, char const *argv[])
{
 
    srand(time(NULL));//inicialização da semente;

    float num[tamanho];
    float soma = 0, m = 0, var = 0, desvioPad = 0;

    for (int i = 0; i < tamanho; i++)
    {
        num[i] = (rand() % 10001) / 100.0f;
        soma += num[i];//cálculo da soma;
        printf("%0.2f ", num[i]);
    }
    m = (soma / tamanho);//cálculo da média;
    
    for (int i = 0; i < tamanho; i++)
    {
        var += pow(num[i] - m, 2);//cálculo da variância;
    }
    
    var /= tamanho;
    desvioPad = sqrt(var);//cálculo do desvio padrão;

    printf("\nSoma: %0.2f\nMédia: %0.2f\nVariância: %0.2f\nDesvio Padrão: %0.2f\n", soma, m, var, desvioPad);

    return 0;
}

//utilize para "gcc exercicio13.c -0 exercicio13 -lm" para poder compilar o projeto;