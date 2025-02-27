#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int valA = 0;
    int valB = 0;
    int somaPar = 0;
    int multiImp = 1;

    printf("Digite o valor A: ");
    scanf("%d", &valA);
    printf("Digite o valor B: ");
    scanf("%d", &valB);

    printf("\nCálculo A: ");//soma dos números pares;
    //caso valor B for maior que A;
    if (valB > valA)
    {
        for (int i = valA; i <= valB; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ",i);
                somaPar = somaPar + i;
            }

        }
        
        printf("\nSoma dos números pares: %d\n", somaPar);
        
    }
    //caso valor A for maior que B;
    if (valB < valA)
    {
        for (int i = valA; i >= valB; i--)
        {
            if (i % 2 == 0)
            {
                printf("%d ",i);
                somaPar = somaPar + i;
            }

        }
        
        printf("\nSoma dos números pares: %d\n", somaPar);

    }
    //caso o valor A for igual ao valor B;
    if (valA == valB)
    {
        if (valA % 2 == 0)
        {
            
            somaPar = valA;
            printf("%d ", somaPar);
            printf("\nSoma dos números pares: %d", somaPar);
            
        }
    }
    
    printf("\nCálculo B: ");//multiplicação dos números ímpares;
    //caso o valor B for maior que o valor A;
    if (valA < valB)
    {
        for (int i = valA; i <= valB; i++)
        {
            if (i % 2 == 1)
            {
                printf("%d ",i);
                multiImp = multiImp * i;
            }
            
        }

        printf("\nMultiplicação dos números ímpares: %d\n", multiImp);
        
    } else if (valA > valB)
    {
        for (int i = valA; i >= valB; i--)
        {
            if (i % 2 == 1)
            {
                printf("%d ", i);
                multiImp = multiImp * i;
            }
            
        }
        
        printf("\nMultiplicação dos números ímpares: %d\n", multiImp);

    } else
    {
        if (valA % 2 == 1)
        {
            multiImp = valA;
            printf("%d ", valA);
            printf("\nMultiplicação dos números ímpares: %d\n", multiImp);
        }
        
    }
    
    printf("\n");

    return 0;
}
