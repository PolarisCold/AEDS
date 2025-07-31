/*
Exercício: Avaliação de Desfiles de Carnaval
Descrição do Problema:
Durante o Carnaval, várias escolas de samba (ou blocos) se apresentam em desfiles. Cada desfile é
avaliado por um conjunto de jurados que atribuem notas de 0 a 10. Seu objetivo é criar um programa
que:
1. Entrada de Dados:
o Solicite ao usuário o número de escolas (ou blocos) participantes.
o Para cada escola, solicite o número de jurados que avaliarão o desfile.
o Para cada jurado, peça que informe a nota (garanta que seja um valor válido entre 0 e 10).
2. Processamento:
o A partir das notas de um desfile calcule e escreva a média de avaliação.
o Utilize estruturas de repetição (loops aninhados) para coletar as notas de cada escola.
3. Saída de Dados:
o Para cada escola, calcule e escreva a sua média.
o Se alguma escola obtiver uma média maior ou igual a 9.0, exiba uma mensagem bem especial
(por exemplo, "Parabéns! Desfile de excelência!").
Requisitos Adicionais:
• Valide as entradas para garantir que as notas estejam no intervalo permitido.
Anotações
*/
#include <stdio.h>

int main(){
    int escolas = 0;
    int jurados = 0;

    printf("Quantas escolas irao participar desse carnaval? ");
    scanf("%d", &escolas);

    for(int i = 1; i <= escolas; i++) {
        printf("\n---- Escola %d ----\n", i);

        printf("Quantos jurados irao avaliar o desfile da escola %d? ", i);
        scanf("%d", &jurados);

        float nota = 0;
        float somaNotas = 0;

        for(int j = 1; j <= jurados; j++) {
            do {
                printf("Nota do jurado %d [1 - 10]: ", j);
                scanf("%f", &nota);
                if(nota < 1 || nota > 10) {
                    printf("Nota invalida! Digite uma nota entre 1 e 10.\n");
                }
            } while(nota < 1 || nota > 10);
            somaNotas += nota;
        }

        float media = somaNotas / jurados;

        printf("Media da escola %d: %.2f\n", i, media);

        if(media >= 9.0) {
            printf("Parabens! Desfile de excelencia!\n");
        }
    }

    return 0;
}