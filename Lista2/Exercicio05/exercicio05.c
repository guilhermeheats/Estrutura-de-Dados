#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>//para gerar valores booleanos;
#include <time.h>

struct alunos//uma struct para compactar as varíaveis;
{
    float provaA;
    float provaB;
    float media;
    bool situacao;//se foi aprovado ou reprovado;
};


int main(int argc, char const *argv[])
{
    
    struct alunos aluno[15];//varíavel do tipo "struct alunos" com o nome "aluno";

    srand(time(NULL));//gerar a semente aleatória;
    //armazenar as notas, média e situação dos 15 alunos;
    for (int i = 0; i < 15; i++)
    {

        aluno[i].provaA = (rand() % 1001) / 100.0f;
        //gera um número de 0 à 1000, depois divide por 100.0f para gerar um número do tipo float no intervalo de 0.00 - 10.00;
        aluno[i].provaB = (rand() % 1001) / 100.0f;
        //calcular a média do aluno;
        aluno[i].media = (aluno[i].provaA + aluno[i].provaB) / 2;
        //verificar a situação do aluno;
        if (aluno[i].media >= 5)
        {
            aluno[i].situacao = true;//aprovado;
        }
        else
        {
            aluno[i].situacao = false;//reprovado;
        }
        
    }
    //imprimir as notas, média e situação dos 15 alunos, de forma tabulada;
    printf("Aluno\tProva 1\tProva 2\tMédia\tSituação\n");
    for (int i = 0; i < 15; i++)
    {
        
        printf("%d\t%0.2f\t%0.2f\t%0.2f\t%d", i + 1, aluno[i].provaA, aluno[i].provaB, aluno[i].media, aluno[i].situacao);
        if (aluno[i].situacao == true)
        {
            printf("-Aprovado\n");
        }
        else
        {
            printf("-Reprovado\n");
        }
        
    }
    
    return 0;
}
