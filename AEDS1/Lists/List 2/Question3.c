/*
Construa um algoritmo e codifique-o em C para o seguinte problema: calcular e escrever a área e o
perímetro de um círculo.
*/
#include <stdio.h>
#define pi 3.14

int main()
{
    float raio = 0;
    float area = 0;
    float perimetro = 0;
    printf("\nCalculador de Area de circulo\n");
    printf("Por favor, informe o raio: \n");
    scanf("%f",&raio);

    area = pi * (raio * raio);
    printf("a area do circulo eh de: %.2f\n",area);
    perimetro = 2 * pi * raio;
    printf("O perimetro do circulo eh de: %.2f\n",perimetro);
    return 0;
}