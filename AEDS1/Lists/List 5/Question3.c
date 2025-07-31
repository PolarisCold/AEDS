/*
O usuário escolhe um prato do menu e o programa exibe o nome e o preço.
Código Prato Preço
1 Hambúrguer R$ 19,00
2 Pizza R$ 40,00
3 Salada R$ 18,00
4 Refrigerante R$ 7,00
Modelo de i/o:
Escolha um item do menu:
1 - Hambúrguer
2 - Pizza
3 - Salada
4 - Refrigerante
Opção: 2
Você escolheu Pizza. Preço: R$ 40,00
*/

#include <stdio.h>

void apresentacao();
int leitura();

int main()
{
    int pedido = 0;
    do{
        apresentacao();
        pedido = leitura();
        switch(pedido)
        {
            case 0:
                printf("Agradeçemos a preferencia! Tenha um bom dia!\n");
                break;
            case 1:
                printf("Voce escolheu Hamburguer, no valor de R$19,00\n");
                break;
            case 2:
                printf("Voce escolheu Pizza, no valor de R$40,00\n");
                break;
            case 3:
                printf("Voce escolheu Salada, no valor de R$18,00\n");
                break;
            case 4:
                printf("Voce escolheu Pasteis, no valor de R$12,00\n");
                break;
            case 5: 
                printf("Voce escolher Refrigerante, no valor de R$7,00\n");
                break;
            default:
                printf("por favor! Digite um valor valido\n");
            }
    }while( pedido != 0);
    return 0;
}

void apresentacao()
{
    printf("\nCardapio:\n");
    printf("______________________________________________\n"
           "|Opcoes:                                     |\n"
           "|0 – Sair do Cardapio                        |\n"
           "|1 – Hamburguer           R$ 19,00           |\n"
           "|2 – Pizza                R$ 40,00           |\n"
           "|3 – Salada               R$ 18,00           |\n"
           "|4 – Pasteis              R$ 12,00           |\n"
           "|5 – Refrigerante         R$ 7,00            |\n"
           "----------------------------------------------\n");
}

int leitura()
{
    int escolha;
    scanf("%d", &escolha);
    return escolha;
}