/*
2. Ler um conjunto de números reais. Sabe-se que o valor zero não é um valor válido para o domínio,
indicando, unicamente, a interrupção da leitura. Ao final, informar a amplitude dos valores lidos.
*/
#include <stdio.h>

int main()
{
    float entrada;
    float maior = 0;
    float menor = 0;
    int i = 0;
    do
    {
        scanf("%f", &entrada);
        if (entrada != 0)
        {
            if (i == 0)
            {
                menor = entrada;
                maior = entrada;
            }

            if (entrada > maior)
                maior = entrada;

            if (entrada < menor)
                menor = entrada;

            i++;
        }
    } while (entrada != 0);

    if (i > 0)
    {
        printf("\nA amplitude entre o maior(%.2f) e o menor(%.2f) eh de %.2f\n", maior, menor, maior - menor);
    }
    else
    {
        printf("\nNenhum numero valido foi inserido para calculo.\n");
    }
    return 0;
}