#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float custoFab = 0;//custo de fábrica;
    float imp = 0;//custo do imposto em porcetagem;
    float dist = 0;//custo da porcentagem do distribuidor;
    float custoCarro = 0;//custo final do carro;
    //tudo sob o peço do carro de fábrica;
    float custoDist = 0;//resultado da porcentagem do distribuidor;
    float custoImp = 0;//resultado da porcentagem do imposto

    printf("Digite o Custo de fábrica do Carro: ");
    scanf("%f", &custoFab);

    printf("Digite a porcentagem do Distribuidor: ");
    scanf("%f", &dist);

    printf("Digite a porcentagem de Imposto: ");
    scanf("%f", &imp);
    
    custoDist = (dist/100) * custoFab;
    custoImp = (imp/100) * custoFab;
    custoCarro = custoFab + custoImp + custoDist;

    printf("\nCusto da porcentagem do Distribuidor sob o preço de fábrica: %0.2f", custoDist);
    printf("\nPorcentagem informada: %0.2f", dist);
    printf("\nCusto da porcentagem do Imposto sob o preço de fábrica: %0.2f", custoImp);
    printf("\nPorcentagem informada: %0.2f", imp);
    printf("\nCusto Inicial do Carro: %0.2f", custoFab);
    printf("\nCusto Final do Carro: %0.2f\n", custoCarro);

    return 0;
}
