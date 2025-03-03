#include <stdio.h>
#include <stdlib.h>//habilitar a função rand; 
#include <time.h>//criar valores aleatórios;

int main(int argc, char const *argv[])
{
    
    char vetorChar[10];//armazenar as 10 letras;

    srand(time(NULL));

    printf("Listagem dos Caracteres: ");
    for (int i = 0; i < 10; i++)//armazenar as 10 letras;
    {
        vetorChar[i] = 'a' + (rand() % 26);
        printf("%c ", vetorChar[i]);//para imprimir tipo "char", precisa ser "%c";
    }
    
    printf("\nListagem Numerada dos Caracteres:");//imprimindo a listagem numerada;
    for (int i = 0; i < 10; i++)
    {
        printf("\n %d.%c", i+1, vetorChar[i]);
    }    
    printf("\n");

    return 0;
}
