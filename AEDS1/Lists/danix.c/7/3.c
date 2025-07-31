/*
Considere uma turma com n alunos, sendo n um valor lido. Construa um programa que leia as notas
obtidas pelos alunos [0..100]. Para cada nota lida, o programa deverá informar estar o aluno aprovado ou
não, sabendo ser sessenta a nota mínima requerida para aprovação. Ao final, o programa deverá informar
a nota média da turma, bem como a maior e a menor nota da turma.
Ao ler a nota de um aluno, rejeitar a leitura de nota inválida, sabendo ser cem a nota máxima.
*/
#include <stdio.h>

int main(){
    int alunos = 0;

    printf("Quantos alunos possui na turma: ");
    scanf("%d", &alunos);

    float nota = 0;
    float somaDasNotas = 0;
    float maiorNota = 0;
    float menorNota = 100;

    for(int i = 1; i <= alunos; i++){
        do{    
            printf("Nota do %d aluno [0-100]: ", i);
            scanf("%f", &nota);

            if(nota < 0 || nota >100){
                printf("[-] Nota invalida, tente novamente\n");
            }

        }while(nota < 0 || nota > 100);        

            if(nota >= 60){
            printf("[+] Aluno %d aprovado\n\n", i);
            }else{
            printf("[-] Aluno %d reprovado\n\n", i);
            }

            if(nota > maiorNota){
            maiorNota = nota;
            }

            if(nota < menorNota){
            menorNota = nota;
            }        
        
        somaDasNotas = somaDasNotas + nota;

    }
    printf("Maior nota: %.2f\n\n", maiorNota);
    printf("Menor nota: %.2f\n\n", menorNota);

    float media = 0;

    media = somaDasNotas / alunos;
    printf("Media da turma: %.2f\n", media);



    return 0;
}

//maior = nota if(nota > maior){ maior = nota}