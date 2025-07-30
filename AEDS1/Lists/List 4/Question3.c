/*
3 - Construa um programa em que o usuário digite a nota de um aluno (um valor inteiro) e o programa
informe o seu desempenho entre A e E, sabendo que:
A – 90..100
B – 80..89
C – 70..79
D – 60..69
E – Abaixo de 60
*/
#include <stdio.h>

int main()
{
    int nota = 0;
    printf("\nComparador de desempenho escolar\n");
    printf("Diga sua nota: \n");
    scanf("%d",&nota);
    if(nota >= 90)
    {
        printf("Situacao: A\n");
    }else if(nota >= 80)
        {
            printf("Situacao: B\n");
        }else if(nota >= 70)
            {
                printf("Situacao: C\n");
            }else if(nota >= 60)
                {
                    printf("Situacao: D\n");
                }else{
                    printf("Situacao: E\nATENCAO: RISCO DE REPROVACAO!");
                }
    return 0;
}