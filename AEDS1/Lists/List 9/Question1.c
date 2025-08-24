/*
1. Ler um conjunto de 10 números reais. Ao final, informar a amplitude dos valores lidos.
*/
#include <stdio.h>

int main()
{
    float entrada;
    float maior;
    float menor;

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &entrada);

        if (i == 0)
        {
            menor = entrada;
            maior = entrada;
        }

        if (entrada > maior)
            maior = entrada;

        if (entrada < menor)
            menor = entrada;
    }

    printf("\nA amplidutde entre o maior(%.2f) e o menor(%.2f) eh de %.2f\n", maior, menor, maior - menor);
    return 0;
}