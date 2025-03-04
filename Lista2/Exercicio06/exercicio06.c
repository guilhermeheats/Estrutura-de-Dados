#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    srand(time(NULL));//inicialização da semente;

    float sal[20];
    float salRe[20];//vetor do salário reajustado;
    //armazenar o salário;
    for (int i = 0; i < 20; i++)
    {
        
        sal[i] = (rand() % 100001) / 100.0f;//gerar valores até 1000;
        salRe[i] = sal[i] + (sal[i] * 0.08f);//cálculo do salário reajustado;

        printf("%d\nSalário: %0.2f\nSalário Reajustado: %0.2f\n\n", i + 1, sal[i], salRe[i]);

    }

    return 0;
}
