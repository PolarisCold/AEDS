/*
2. Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)
*/

#include <stdio.h>
#include <stdbool.h>

void apresentacao();
float leitura_nota();

int main()
{
    int alunos = 0;
    int aprovados = 0;
    float nota;
    printf("\nVerificador de desempenho escolar.\n");
    do
    {
        printf("Digite a nota do aluno, ou digite 0 para sair do programa.\n");
        nota = leitura_nota();

        if (nota >= 60)
            aprovados++;

        if (nota != 0)
            alunos++;

    } while (nota != 0);
    if(alunos == 0)
    {
        printf("agradecemos por usar nosso programa!\n");
    }else if(aprovados == 0)
    {
        printf("a taxa de reprovacao foi de 100%%");
    }else{
        printf("a quantidade de alunos aprovados foi de %.1f%% e de %1.f%% reprovados\n", (((float)aprovados / alunos) * 100), ((((alunos - aprovados) / (float)alunos) * 100)));
    }
    return 0;
}

float leitura_nota()
{
    float nota = 0;
    do
    {
        scanf("%f", &nota);
        if (nota < 0 || nota > 100)
            printf("nota invalida, por favor inserir valor valido[0-100]\n");
    } while (nota < 0 || nota > 100);
    return nota;
}