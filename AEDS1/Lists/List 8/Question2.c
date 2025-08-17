/* 
2. Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)
*/

#include <stdio.h>

int leitura_alunos();
int leitura_notas();

int main()
{

    return 0;
}

int leitura_alunos()
{
    int qtd;
    printf("\nPor favor, nos informe a quantidade de alunos.\n");
    scanf("%d", &qtd);
    return qtd;
}

int leitura_notas()
{
    int nota;
    do{
    printf("Informe o desempenho do aluno(a):\n");
    scanf("%d", &nota);
    if (nota < 0 || nota > 100)
    {
        printf("valor invalido, por favor insira um valor valido [0 - 100]\n");
    }
    }while(nota < 0 || nota > 100);
    return nota;
}