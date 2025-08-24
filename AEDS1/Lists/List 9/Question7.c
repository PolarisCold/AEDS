/*
7. Ler um inteiro qualquer. Calcular e escrever o número de divisores que o número lido possui.
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
        printf("Este numero possui %d divisores\n", divisores);
    else if(divisores == 1)
        printf("Este numero possui 1 divisor\n");
    else
        printf("eh um numero primo!");

    return 0;
}

int leitura()
{
    int N;
    printf("\nQual o numero que deseja verificar a quantidade de divisores?\n");
    scanf("%d", &N);
    return N;
}