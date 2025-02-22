#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int valA;
    int valB;
    int somaPar;

    printf("Digite o valor A: ");
    scanf("%d", &valA);
    printf("Digite o valor B: ");
    scanf("%d", &valB);

    printf("Cálculo A: ");
    //caso valor B for maior que A;
    if (valB > valA)
    {
        for (; valA <= valB; valA++)
        {
            printf("%d ",valA);
            if (valA % 2 == 0)
            {
                somaPar = somaPar + valA;
            }
            
        }
        
        printf("\nSoma dos números pares: %d\n", somaPar);
        
    }
    //caso valor A for maior que B;
    if (valA > valB)
    {
        /* code */
    }
    
    return 0;
}
