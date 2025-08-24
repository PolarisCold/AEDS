/*
8. Ler um inteiro qualquer. Informar se é ele um número primo ou não.
*/
#include <stdio.h>

int leitura();

int main()
{
    int N = leitura();
    int divisores = 1;
    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
            divisores++;

    }
    if (divisores > 2)
        printf("Este numero nao eh primo\n");
    else if(divisores == 1)
        printf("Este numero nao eh primo\n");
    else
        printf("eh um numero primo!");

    return 0;
}

int leitura()
{
    int N;
    do
    {
    printf("\nQual o numero que deseja verificar se eh primo ou nao?\n");
    scanf("%d", &N);
    if(N <= 0)
        printf("Por favor, digite um numero inteiro positivo!\n");
    }while(N <= 0);
    return N;
}