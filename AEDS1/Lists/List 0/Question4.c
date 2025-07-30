/*
4. Calcular o peso ideal de pessoas do gênero feminino. Para isto, utilize a seguinte fórmula:
(62,1 x altura) – 44,7
*/
#include <stdio.h>

int main()
{
    float altura = 0;
    float pesoIdeal = 0;
    printf("\nCalculador de peso ideal.\n");
    printf("Por favor, nos informe a sua altura:[Em metros]\n");
    scanf("%f",&altura);
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("o seu peso ideal eh de: %.2f\n",pesoIdeal);

    return 0;
}