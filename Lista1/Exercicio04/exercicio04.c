#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int c;

    printf("Digite o valor das repetições em números inteiros pares: ");
    scanf("%d", &c);
    
        if (c % 2 == 0)
        {
            for (int i = 0; i < c; i++)
            {
        
                printf("Digite um número inteiro: ");
                scanf("%d", &num);

                if (num == 1000)
                {
                    break;
                }
        
                if (num%2==0)
                {
                    printf("É par\n");
                }

             }

        }
        else
        {
            printf("Digite um número par\n");
        }
        

    return 0;
}
