#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota[3];//as 3 notas pedidas;
    float mediaFinal = 0;
    int peso[3] = {2, 3, 5};//os 3 pesos para as notas;
    int count = 3;//limite do contador "i" para os "for" percorrer no array;
    int c = 0;//um segundo contador para apresentar os números;
    
    for (int i = 0; i < count; i++)
    {
        c++;
        printf("Digite a %dª nota: ",c);
        scanf("%f", &nota[i]);

    }
    
    for (int i = 0; i < count; i++)
    {

        mediaFinal = mediaFinal + ((nota[i] * peso[i])/10);

    }
    
    printf("Média final do Aluno: %0.2f\n", mediaFinal);

    return 0;
}
