#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ano = 0;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &ano);

    int mesAno = ano * 12;//fórmuala para os meses;
    int diaAno = ano * 365;//fórmuala para os dias;
    int horaAno = ano * 8760;//fórmuala para as horas;
    int minutoAno = ano * 525600;//fórmuala para os minutos; 
    //sáida dos valores;
    printf("\nAnos: %d", ano);
    printf("\nMeses: %d", mesAno);
    printf("\nDias: %d", diaAno);
    printf("\nHoras: %d", horaAno);
    printf("\nMinutos: %d\n", minutoAno);
    
    return 0;
}
