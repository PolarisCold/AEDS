/*
. Construa um programa que permita identificar o perfil da turma:
- Percentual de homens e de mulheres.
- Percentual de alunos maiores em idade.
- Idade da pessoa mais velha.
- Idade da pessoa mais nova.
Domínio dos dados:
Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
Idade: 0..150
* Deverão ser rejeitados os valores lidos fora do domínio (observe que aqui deve ser utilizada a est. de
rep. com teste no final)
* O número de alunos da turma deverá ser um valor lido
*/
#include <stdio.h>
#include <ctype.h>

void apresentacao();
int leitura_alunos();
int leitura();
char sexo();
char continuar();

int main()
{
    apresentacao();
    int qtd_alunos = leitura_alunos();
    /*float homens
    float mulheres
    float maior_D_idade
    float mais velho
    float mais novo
    */

    do
    {

    }while(repetir == 'S');
    return 0;
}

void apresentacao()
{
    printf("\nIdentificador de perfil!\n"
           "Com base nas informacoes inseridas retornaremos os resultado\n");
}

int leitura_alunos()
{
    int qtd_alunos;
    do
    {
        printf("Por favor informe a quantidade de alunos;\n");
        scanf("%d", &qtd_alunos);
        if(qtd_alunos < 0)
        {
            printf("Por favor, digite um valor valido\n");
        }
    }while(qtd_alunos < 0);
    return qtd_alunos;
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