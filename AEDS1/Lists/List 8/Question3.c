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
• Valide as entradas para garantir que as notas estejam no intervalo permitido
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