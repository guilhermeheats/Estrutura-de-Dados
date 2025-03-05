#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10//define o tamanho do vetor, criando uma constante;

int main(int argc, char const *argv[])
{

    int conjA[tamanho], conjB[tamanho];//dois conjuntos de números inteiros;
    
    srand(time(NULL));
    //preencher vetores;
    printf("Conjunto A\tConjunto B\n");
    for (int i = 0; i < tamanho; i++)
    {
        
        conjA[i] = rand() % 11;
        conjB[i] = rand() % 11;

        printf("%d\t\t%d\n", conjA[i], conjB[i]);

    }
    //achar os números em comuns dos dois vetores;
    printf("Números em comum: ");
    for (int i = 0; i < tamanho; i++)
    {
        
        for (int j = 0; j < tamanho; j++)
        {
            
            if (conjA[i] == conjB[j])
            {
                printf("%d ", conjA[i]);
                break;
            }
            

        }
        

    }

    printf("\n");

    return 0;
}
