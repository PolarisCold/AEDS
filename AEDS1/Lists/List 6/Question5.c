/*
5. Na lista anterior, foi elaborado um programa que proveu as funcionalidades de uma calculadora para as
quatro operações aritméticas. Elas foram oferecidas através de um menu e a opção do usuário foi tratada
através da instrução switch. Crie uma nova versão para a calculadora. Nela, acrescente ao programa a
possibilidade de mais que um cálculo ser realizado Para isto, após a escrita do resultado de cada
operação, o fluxo de execução deverá voltar à apresentação do menu ao usuário do programa. Desta
forma, o menu deverá ser alterado acrescentando a ele uma nova opção: “0 - sair do programa”. Esta
deverá ser a primeira opção do menu. Quando selecionada, a mensagem “Obrigado por usar este
programa” deverá ser escrita e o programa finalizado. Caso contrário, tratar a operação aritmética
selecionada ou informar tratar-se de uma opção inválida.
*/
#include <stdio.h>

void apresentacao();
float soma();
float subtracao();
float multiplicacao();
float divisao();

int main()
{
    char opcao;
    apresentacao();
    do
    {
    printf("\n");
    scanf(" %c", &opcao);
        switch (opcao)
        {
        case '0':
            printf("Muito obrigado por usar nossa calculadora!\n");
            break;
        case '+':
            printf("o resultado da soma eh: %.2f\n", soma());
            printf("Gostaria de tentar uma nova operacao matematica?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|+ – Calcular uma Soma                       |\n"
                   "|- – Calcular uma Subtracao                  |\n"
                   "|* – Calcular uma Multiplicacao              |\n"
                   "|/ – Calcular uma Divisao                    |\n"
                   "----------------------------------------------\n");
            break;
        case '-':
            printf("O resultado da subtracao eh: %.2f\n", subtracao());
            printf("Gostaria de tentar uma nova operacao matematica?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|+ – Calcular uma Soma                       |\n"
                   "|- – Calcular uma Subtracao                  |\n"
                   "|* – Calcular uma Multiplicacao              |\n"
                   "|/ – Calcular uma Divisao                    |\n"
                   "----------------------------------------------\n");
            break;
        case '*':
            printf("O resultado da multiplicacao eh: %.2f\n", multiplicacao());
            printf("Gostaria de tentar uma nova operacao matematica?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|+ – Calcular uma Soma                       |\n"
                   "|- – Calcular uma Subtracao                  |\n"
                   "|* – Calcular uma Multiplicacao              |\n"
                   "|/ – Calcular uma Divisao                    |\n"
                   "----------------------------------------------\n");
            break;
        case '/':
            printf("O resultado da divisao eh: %.2f\n", divisao());
            printf("Gostaria de tentar uma nova operacao matematica?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|+ – Calcular uma Soma                       |\n"
                   "|- – Calcular uma Subtracao                  |\n"
                   "|* – Calcular uma Multiplicacao              |\n"
                   "|/ – Calcular uma Divisao                    |\n"
                   "----------------------------------------------\n");
            break;
        default:
            printf("Por favor, informe uma operacao matematica valida!\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|+ – Calcular uma Soma                       |\n"
                   "|- – Calcular uma Subtracao                  |\n"
                   "|* – Calcular uma Multiplicacao              |\n"
                   "|/ – Calcular uma Divisao                    |\n"
                   "----------------------------------------------\n");
        }

    }while (opcao != '0');
    return 0;
}

void apresentacao()
{
    printf("\nCalculadora:\n");
    printf("______________________________________________\n"
           "|Opcoes:                                     |\n"
           "|0 – Fechar o programa                       |\n"
           "|+ – Calcular uma Soma                       |\n"
           "|- – Calcular uma Subtracao                  |\n"
           "|* – Calcular uma Multiplicacao              |\n"
           "|/ – Calcular uma Divisao                    |\n"
           "----------------------------------------------\n");
}

float soma()
{
    float A, B;
    float soma = 0;
    printf("Digite a primeira parcela:\n");
    scanf("%f", &A);
    printf("Digite a segunda parcela:\n");
    scanf("%f", &B);
    soma = A + B;
    return soma;
}

float subtracao()
{
    float A, B;
    float diferenca = 0;
    printf("Digite o minuendo:\n");
    scanf("%f", &A);
    printf("Digite o subtraendo:\n");
    scanf("%f", &B);
    diferenca = A - B;
    return diferenca;
}

float multiplicacao()
{
    float A, B;
    float produto = 0;
    printf("Digite o primeiro fator:\n");
    scanf("%f", &A);
    printf("Digite o segundo fator:\n");
    scanf("%f", &B);
    produto = A * B;
    return produto;
}

float divisao()
{
    float A, B;
    float quociente = 0;
    do
    {
        printf("Digite o dividendo:\n");
        scanf("%f", &A);
        if (A != 0)
        {
            printf("Nao existe divisao por zer\n");
        }
    } while (A != 0);
    printf("Digite o divisor:\n");
    scanf("%f", &B);
    quociente = A / B;
    return quociente;
}