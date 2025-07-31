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
#include <stdbool.h>

void apresentacao();
bool eh_bissexto();

int main()
{
    
    return 0;
}

void apresentacao()
{

}

bool eh_bissexto(int ano)
{
    bool bissexto;

    if((ano % 4 == 0 && ano %100 != 0) || ano % 400 == 0)
    {
        printf("%d eh um ano bissexto\n",ano);
    }else
    {
        printf("%d Nao eh um ano bissexto\n",ano);
    }


    return bissexto;
}