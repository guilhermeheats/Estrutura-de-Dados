#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nDigite 10 números:");
    
    float num[10];
    float soma = 0;
    int c;

    printf("\nSoma: %0.0f \n",soma);

    for (int i = 0; i < 10; i++)
    {
        c++;
        printf("%dºNúmero:",c);
        scanf("%f",&num[i]);
        soma = soma + num[i];
    }
    
    printf("\nO resultado da soma é: %0.2f\n",soma);

    return 0;
}
