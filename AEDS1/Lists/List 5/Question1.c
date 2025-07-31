/*
Utilizando estrutura de repetição múltipla, construir um programa em que o usuário digite um número
entre 1 e 12 e o programa escreve o nome do mês correspondente. Por exemplo, digite 3 e o programa
escreve a palavra “Março”
*/
#include <stdio.h>

int main()
{
    int opcao = 0;
    printf("\nsistema de verificação dos meses\nQual mes deseja consultar?\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
    case 1:
    {
        printf("Janeiro\n");
        break;
    }
    case 2:
    {
        printf("Fevereiro\n");
        break;
    }
    case 3:
    {
        printf("Marco\n");
        break;
    }
    case 4:
    {
        printf("Abril\n");
        break;
    }
    case 5:
    {
        printf("Maio\n");
        break;
    }
    case 6:
    {
        printf("Junho\n");
        break;
    }
    case 7:
    {
        printf("Julho\n");
        break;
    }
    case 8:
    {
        printf("Agosto\n");
        break;
    }
    case 9:
    {
        printf("Setembro\n");
        break;
    }
    case 10:
    {
        printf("Outubro\n");
        break;
    }
    case 11:
    {
        printf("Novembro\n");
        break;
    }
    case 12:
    {
        printf("Dezembro\n");
        break;
    }
    default:
    {
        printf("opcao invalida, finalizando o programa!\n");
    }
    }
    return 0;
}