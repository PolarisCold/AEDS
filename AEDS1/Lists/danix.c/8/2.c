/*
Construir uma nova versão para o seguinte problema: ler a nota obtida por cada aluno da turma. A
leitura deverá ser interrompida quando for informada uma nota igual a zero (flag). Ao final do programa,
deverão ser escritos o percentual de alunos aprovados e o percentual de alunos reprovados, sabendo ser
requerida uma nota mínima igual a 60 para a aprovação do aluno.
Domínio da nota: 0..100 – Rejeitar a leitura de valores inválidos (fora do domínio)
*/
#include <stdio.h>

int main(){
    float nota = 0;
    int totalAlunos = 1;
    int alunosAprovados = 0;
    int alunosReprovados = 0;
    float percentualPassou = 0;
    float percentualReprovou = 0;
    printf("Bem vindo ao leitor de notas.\n");

    do{
        printf("-----------------------------------\n");
        printf("Digite 0 para sair do programa.\n");
        printf("Digite a nota do %d.o aluno: \n\n", totalAlunos);
        scanf("%f", &nota); 

        if(nota >= 60 && nota <= 100){
            printf("Aluno %d aprovado\n", totalAlunos);
            totalAlunos++;
            alunosAprovados++;
        }else if(nota < 60 && nota >= 1){
            printf("Aluno %d reprovado\n", totalAlunos);
            totalAlunos++;
            alunosReprovados++;
        }else if(nota == 0){
            totalAlunos--;
        }else{
            printf("Nota invalida.\n");
        }
    }while(nota != 0);

    if(totalAlunos > 0){
    percentualPassou = (alunosAprovados * 100) / totalAlunos;
    percentualReprovou = (alunosReprovados * 100) / totalAlunos;
    }

    printf("No total foram %d alunos, e desses %d alunos: \n %.1f%% passaram.\n %.1f%% reprovaram.", totalAlunos, totalAlunos, percentualPassou, percentualReprovou);
    return 0;
}