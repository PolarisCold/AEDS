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
// etapa 1
void apresentacao();
int qtd_escolas();
int qtd_jurados();
int nota_jurado();

int main()
{
    apresentacao();
    int escolas = qtd_Escolas();
    for (int i = 1; i <= escolas; i++)
    {
        int jurados = qtd_jurados(i);
        float media = 0;
        for (int j = 0; j < jurados; j++)
        {
            media += nota_jurado(j+1);
        }
        media /= jurados;
        if (media >= 9.0)
        {
            printf("Parabens, desfile de excelencia!\nMedia final de %.1f", media);
        }
        else
        {
            printf("A media da %d.a escola foi de %.1f pontos\n", i, media);
        }
    }
    return 0;
}

void apresentacao()
{
    printf("\nSistema de classificacao do desfile de carnaval!\n");
}

int qtd_escolas()
{
    int quantidade;
    printf("Qual sera a quantidade de escolas que participarao?");
    do
    {
        scanf("%d", &quantidade);
        if (quantidade < 0)
            printf("Por favor, digite uma quantidade valida[> 0]\n");
    } while (quantidade < 0);
    return quantidade;
}

int qtd_jurados(int N)
{
    int quantidade;
    printf("qual sera a quantidade de jurados para a %d.a escola?", N);
    do
    {
        scanf("%d", &quantidade);
        if (quantidade <= 0)
            printf("Por favor, digite uma quantidade valida[> 0]\n");
    } while (quantidade <= 0);
    return quantidade;
}

int nota_jurado(int N)
{
    int nota;
    printf("Qual foi a nota do %d.o jurado?", N);
    do
    {
        scanf("%d", &nota);
        if (nota < 0 || nota > 10)
            printf("nota invalida, por favor inserir valor valido [0-10]\n");
    } while (nota < 0 || nota > 10);
    return nota;
}