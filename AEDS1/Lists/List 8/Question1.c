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
int leitura_idade();
char leitura_sexo();

int main()
{
    apresentacao();
    int qtd_alunos = leitura_alunos();
    int mulher = 0;
    int dMaior = 0;
    int maisVelho = 0;
    int maisNovo = 100;
    for (int i = 1; i <= qtd_alunos; i++)
    {
        printf("Analise do %d.o aluno:\n", i);
        if (leitura_sexo() == 'F')
            mulher++;
        int idade = leitura_idade();

        if (idade >= 18)
            dMaior++;

        if (idade > maisVelho)
            maisVelho = idade;
        else if (idade < maisNovo)
            maisNovo = idade;
    }

    printf("A porcentagem de genero da turma consiste em %.2f%% mulheres e %.2f%% homens\n", ((float)mulher / qtd_alunos) * 100, ((qtd_alunos - (float)mulher) / qtd_alunos) * 100);
    printf("A quantidade de maiores de idade eh de %.2f%% e de menores %.2f%%\n", ((float)dMaior / qtd_alunos) * 100, ((qtd_alunos - (float)dMaior) / qtd_alunos) * 100);
    printf("O mais velho de toda turma possui %d anos e o mais novo %d anos\n", maisVelho, maisNovo);
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
        if (qtd_alunos < 0)
        {
            printf("Por favor, digite um valor valido[qtd > 0]\n");
        }
    } while (qtd_alunos < 0);
    return qtd_alunos;
}

int leitura_idade()
{
    int idade;
    do
    {
        printf("Qual a idade do aluno(a)?\n");
        scanf("%d", &idade);
        if (idade < 0 || idade > 150)
        {
            printf("Por favor, digite um valor valido[0 - 150]\n");
        }
    } while (idade < 0 || idade > 150);
    return idade;
}

char leitura_sexo()
{
    char sexo;
    do
    {
        printf("Qual o sexo do aluno(a)?\n");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        if (sexo != 'F' && sexo != 'M')
        {
            printf("Por favor, digite Genero Valido[F - M]\n");
        }
    } while (sexo != 'F' && sexo != 'M');
    return sexo;
}