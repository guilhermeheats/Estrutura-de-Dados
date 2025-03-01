#include <stdio.h>
#include <math.h>//biblioteca usada para utilizar a função "pow()";
int main(int argc, char const *argv[])
{
    
    float valorA, valorB = 0;

    printf("Digite o valor A: ");
    scanf("%f", &valorA);
    printf("Digite o valor B: ");
    scanf("%f", &valorB);

    float somaAB = valorA + valorB;
    double prodAB = valorA * pow(valorB, 2);
    float quadA = pow(valorA, 2);
    float somaCubAB = pow(valorA, 3) + pow(valorB, 3);

    printf("\nA soma dos números A e B: %0.2f", somaAB);
    printf("\nO produto do primeiro número pelo quadrado do segundo: %0.2f", prodAB);
    printf("\nO quadrado do primeiro número: %0.2f", quadA);
    printf("\nA soma dos cubos de ambos os números: %0.2f\n", somaCubAB);
    
    //compilar com "-lm" para a referência da biblioteca "math.h"

    return 0;
}
