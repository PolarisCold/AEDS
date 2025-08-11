/*
Construa uma nova versão para o programa que identifica se é um ano lido bissexto ou não.
O programa deverá permitir ao usuário testar mais que um ano. Para isto, ao final, o programa deverá
enviar uma mensagem ao usuário questionando seu desejo de verificar um novo ano e ler a resposta do
usuário (S/N). De acordo com a resposta lida, uma nova iteração deverá ocorrer ou o programa ser
finalizado.
O programa deverá rejeitar a leitura de valores diferentes de [S/N]. Caso isto ocorra, o programa
deverá repetir a leitura da resposta do usuário.
*/
#include <stdio.h>
#include <ctype.h>

void apresentacao();
int leitura();
void eh_bissexto(int);
char continuar();

int main()
{
    apresentacao();
    int ano;
    char repetir;
    do
    {
        ano = leitura();
        eh_bissexto(ano);
        repetir = continuar();
    }while(repetir == 'S');
    return 0;
}

void apresentacao()
{
    printf("\nPrograma de verificacao de ano bissexto!\n");
}

void eh_bissexto(int ano)
{

    if((ano % 4 == 0 && ano %100 != 0) || ano % 400 == 0)
    {
        printf("%d eh um ano bissexto\n",ano);
    }else
    {
        printf("%d Nao eh um ano bissexto\n",ano);
    }
}

int leitura()
{
    int ano;
    printf("por favor, diga o ano que deseja conferir\n");
    do
    {
        scanf("%d", &ano);
        if(ano < 0)
        {
            printf("Nao eh permitido anos negativos, insira um ano positivo\n");
        }
    }while(ano < 0);
    return ano;
}

char continuar()
{
    char repetir;
    printf("Deseja tentar novamente?\n");
    do
    {
        scanf(" %c", &repetir);
        repetir = toupper(repetir);
        if(repetir != 'S' && repetir != 'N')
        {
            printf("Por favor, insira uma resposta de S ou N\n");
        }
    }while(repetir != 'S' && repetir != 'N');
    return repetir;
}