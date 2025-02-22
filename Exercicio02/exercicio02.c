#include <stdio.h>

int main(int arg, char const *argv[])
{
    
    float num[10];
    float maior;
    float menor;
    int c;
    
    printf("Escreva 10 números\n");

    for (int i = 0; i < 10; i++)
    {
        c++;
        printf("%dº Número: ",c);
        scanf("%f",&num[i]);

        if (num[i] > maior || maior == 0) 
        {
            maior = num[i];
        }
        
        if (num[i] < menor || menor == 0)
        {
            menor = num[i];
        }
        
    }

    printf("\nMaior valor: %0.2f", maior);
    printf("\nMenor valor: %0.2f\n", menor);

    return 0;
}
