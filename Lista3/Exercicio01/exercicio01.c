#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10//definição do tamanho do vetor;

int main(int argc, char const *argv[])
{
    
    srand(time(NULL));//iniciando a semente;

    int numRef = 0;
    int vetInt[tam];
    //preenchimento do valor;
    printf("Valores: ");
    for (int i = 0; i < tam; i++)
    {
        
        vetInt[i] = rand() % 10;
        printf("%d ", vetInt[i]);

    }
    
    printf("\nDigite um valor de referência: ");
    scanf("%d", &numRef);
    //elemento a;
    printf("a.Números maiores que %d: ", numRef);
    for (int i = 0; i < tam; i++)
    {
        
        if (vetInt[i] > numRef)
        {
            printf("%d ", vetInt[i]);
        }
        
    }
    //elemento b;
    int quantMenorRef = 0;
    printf("\nb.Quantidade de números armazenados que %d: ", numRef);
    for (int i = 0; i < tam; i++)
    {
        if (vetInt[i] < numRef)
        {
            quantMenorRef += 1;
        }
    }
    printf("%d \n", quantMenorRef);

    return 0;
}
