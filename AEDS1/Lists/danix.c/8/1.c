/*
1. Construa um programa que permita identificar o perfil da turma:
- Percentual de homens e de mulheres.
- Percentual de alunos maiores em idade.
- Idade da pessoa mais velha.
- Idade da pessoa mais nova.
Domínio dos dados:
Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
Idade: 0..150
* Deverão ser rejeitados os valores lidos fora do domínio (observe que aqui deve ser utilizada a est. de
rep. com teste no final)
O número de alunos da turma deverá ser um valor lido
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    int alunos = 0;
    char escolhaDeGenero;
    // Homens
    int idadeHomens = 0;
    int contagemMaiorDeDezoitoHomem = 0;
    int maisVelhoHomens = 0;
    int maisNovoHomens = 150;
    int totalhomens = 0;
    // Mulheres
    int idadeMulheres = 0;
    int contagemMaiorDeDezoitoMulheres = 0;
    int maisVelhoMulheres = 0;
    int maisNovoMulheres = 150;
    int totalmulheres = 0;

    printf("Quantos alunos tem na sala: ");
    scanf("%d", &alunos);

    for (int i = 1; i <= alunos; i++)
    {

        do
        {
            printf("Qual eh o seu genero? [M/F]");
            scanf(" %c", &escolhaDeGenero);
            escolhaDeGenero = toupper(escolhaDeGenero);
            if(escolhaDeGenero != 'M' && escolhaDeGenero != 'F')
            {
                printf("genero invalido, por favor informe novamente");
            }
        } while (escolhaDeGenero != 'M' && escolhaDeGenero != 'F');

        if (escolhaDeGenero == 'M')
        {

            do
            {
                printf("Qual eh a sua idade?");
                scanf("%d", &idadeHomens);
            } while (idadeHomens < 0 || idadeHomens > 150);
            totalhomens++;
            if (idadeHomens >= 18)
            {
                contagemMaiorDeDezoitoHomem++;
            }

            if (maisVelhoHomens < idadeHomens)
            {
                maisVelhoHomens = idadeHomens;
            }

            if (maisNovoHomens > idadeHomens)
            {
                maisNovoHomens = idadeHomens;
            }
        }
        if (escolhaDeGenero == 'F')
        {
            do
            {
                printf("Qual eh a sua idade?");
                scanf("%d", &idadeMulheres);
            } while (idadeMulheres < 0 || idadeMulheres > 150);
            totalmulheres++;
            if (idadeMulheres >= 18)
            {
                contagemMaiorDeDezoitoMulheres++;
            }

            if (maisVelhoMulheres < idadeMulheres)
            {
                maisVelhoMulheres = idadeMulheres;
            }

            if (maisNovoMulheres > idadeMulheres)
            {
                maisNovoMulheres = idadeMulheres;
            }
        }
    }
    int totalMaiordeDezoito = 0;
    totalMaiordeDezoito = contagemMaiorDeDezoitoMulheres + contagemMaiorDeDezoitoHomem;
    float percentualMaiorDeDezoito = 0;
    percentualMaiorDeDezoito = (totalMaiordeDezoito * 100) / alunos;
    float percentualHomens = 0;
    percentualHomens = (totalhomens * 100) / alunos;
    float percentualMulheres = 0;
    percentualMulheres = (totalmulheres * 100) / alunos;
    printf("Temos a porcentagem de %.1f%% porcento de alunos mais velhos\n", percentualMaiorDeDezoito);
    printf("O aluno mais velho tem: %d\n", maisVelhoHomens);
    printf("O aluno mais novo tem: %d\n", maisNovoHomens);
    printf("A aluna mais velha tem: %d\n", maisVelhoMulheres);
    printf("A aluna mais nova tem: %d\n", maisNovoMulheres);
    printf("Percentual masculino: %.2f%%\n", percentualHomens);
    printf("Percentual feminino: %.2f%%\n", percentualMulheres);

    return 0;
}