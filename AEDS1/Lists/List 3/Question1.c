/*
1. Construa um algoritmo que identifique se é um inteiro lido par ou ímpar.
*/
#include <stdio.h>

int main()
{
    int N = 0;
    printf("\ndigite um numero para ser verificado:\n");
    scanf("%d",&N);

    if(N % 2 == 0)
    {
        printf("Esse numero eh par!\n");
    }else{
        printf("Esse numero eh impar!\n");
    }

    return 0;
}