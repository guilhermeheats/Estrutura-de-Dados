#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float celsius = 0;//entrada dos graus celsius;

    printf("Digite a temperatura em °C:");
    scanf("%f", &celsius);

    float kelvinCel = celsius + 273.15;//fórmula para o cálculo Kelvin;
    float farenheitCel = (celsius * 1.8) + 32;//fórmula para o cálculo Farenheit;

    printf("Temperatura em Celsius: %0.2f°C", celsius);
    printf("\nTemperatura em Kelvin: %0.2fK", kelvinCel);
    printf("\nTemperatura em Farenheit: %0.2f°F\n", farenheitCel);

    return 0;
}
