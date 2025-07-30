/*
2. Calcular a representação em Farenheit de uma temperatura em graus celsius. Uma medida em celsius
pode ser convertida em Farenheit através da seguinte fórmula:
Fahrenheit = celsius x 1.8 + 32
*/
#include <stdio.h>

int main()
{
    float temperatura;
    float fahrenheit;
    printf("\nDiga a temperatura em C° a ser convertida:\n");
    scanf("%f", &temperatura);

    fahrenheit = temperatura * 1.8 + 32;
    printf("%.2fC° eh %.2f em fahrenheit\n",temperatura, fahrenheit);
    return 0;
}