/*
Codifique em C o algoritmo relativo à seguinte questão: calcular o número de dias vividos até o último
aniversário.
*/
#include <stdio.h>

int main()
{
    int idade = 0;
    printf("\nQual eh a sua idade?\n");
    scanf("%d",&idade);

    int dias = 0;
    dias = idade * 365;
    printf("dias vividos ate o ultimo aniversario: %d\n", dias);

    return 0;
}