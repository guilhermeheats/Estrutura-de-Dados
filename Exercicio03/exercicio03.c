#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int numI;

    printf("Digite um número inteiro: " );
    scanf("%d", &numI);
    printf("\nOs números ímpares são até %d:\n", numI);
    for (int i = 0; i < numI; i++)
    {
        if (i%2==1) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
