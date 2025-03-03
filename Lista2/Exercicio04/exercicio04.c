#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    int num[8];
    int somaMult = 0;

    srand(time(NULL));//geração números aletórios;

    for (int i = 0; i < 8; i++)//imprimir os números;
    {

        num[i] = rand() % 100;
        
        printf("%d ", num[i]);
        
        if (num[i] % 6 == 0)//total números múltiplos de 6;
        {
            somaMult = somaMult + 1;
        }
        
    }

    printf("\nTotal de números multíplos de 6: %d\n", somaMult);
  
    return 0;
}
