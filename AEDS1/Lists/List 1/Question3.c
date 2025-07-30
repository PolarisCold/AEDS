/*
3. Calcular o peso ideal de um homem, sabendo que:
Peso Ideal de pessoas de gênero masculino: (72.7 x altura) – 58
*/
#include <stdio.h>

#include <stdio.h>

int main()
{
    float altura = 0;
    float pesoIdeal = 0;
    printf("\nCalculador de peso ideal.\n");
    printf("Por favor, nos informe a sua altura:[Em metros]\n");
    scanf("%f",&altura);
    pesoIdeal = (72.7 * altura) - 58;
    printf("o seu peso ideal eh de: %.2f\n",pesoIdeal);

    return 0;
}