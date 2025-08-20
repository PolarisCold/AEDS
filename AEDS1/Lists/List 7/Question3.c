/*
Considere uma turma com n alunos, sendo n um valor lido. Construa um programa que leia as notas
obtidas pelos alunos [0..100]. Para cada nota lida, o programa deverá informar estar o aluno aprovado ou
não, sabendo ser sessenta a nota mínima requerida para aprovação. Ao final, o programa deverá informar
a nota média da turma, bem como a maior e a menor nota da turma.
Ao ler a nota de um aluno, rejeitar a leitura de nota inválida, sabendo ser cem a nota máxima.
*/
#include <stdio.h>

int leitura_alunos();
int leitura_notas();

int main()
{
    int qtd_alunos;
    int aluno;
    int maior;
    int menor;

    qtd_alunos = leitura_alunos();

    int somaNotas = 0;
    for (int i = 1; i <= qtd_alunos; i++)
    {
        aluno = leitura_notas();
        if (i == 1)
        {
            maior = aluno;
            menor = aluno;
        }

        if (aluno < 60)
        {
            printf("aluno reprovado\n");
        }
        else
        {
            printf("aluno aprovado\n");
        }
        if (aluno < menor)
        {
            menor = aluno;
        }
        else if (aluno > maior)
        {
            maior = aluno;
        }
        somaNotas += aluno;
    }
    float media = somaNotas;
    media /= qtd_alunos;
    printf("A maior nota foi de %d\n", maior);
    printf("A menor nota foi de %d\n", menor);
    printf("A media foi de %.1f\n", media);
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
    do
    {
        printf("Informe o desempenho do aluno(a):\n");
        scanf("%d", &nota);
        if (nota < 0 || nota > 100)
        {
            printf("valor invalido, por favor insira um valor valido [0 - 100]\n");
        }
    } while (nota < 0 || nota > 100);
    return nota;
}
