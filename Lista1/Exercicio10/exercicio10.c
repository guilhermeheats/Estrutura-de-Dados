#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float moedaReal = 0;//valor desejado em reais;
    float cotDolar = 0;//cotação do Dolar;
    float cotEuro = 0;//cotação do Euro;

    printf("Digite o valor em reais: ");
    scanf("%f", &moedaReal);
    printf("Digite a cotação do Dolár: ");
    scanf("%f", &cotDolar);
    printf("Digite a cotação do Euro: ");
    scanf("%f", &cotEuro);

    float moedaDolar = moedaReal/cotDolar;//cálculo da cotação do Dolar para o Real;
    float moedaEuro = moedaReal/cotEuro;//cálculo da cotação do Euro para o Real;

    printf("\nValor em Real: R$%0.2f", moedaReal);
    printf("\nValor em Dolar: $%0.2f", moedaDolar);
    printf("\nValor em Euro: €%0.2f\n", moedaEuro);

    printf("\nCotação do Dólar: $%0.2f", cotDolar);
    printf("\nCotação do Euro: €%0.2f\n", cotEuro);

    return 0;
}
