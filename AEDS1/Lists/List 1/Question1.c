/*
Planeje-as em função do conceito de entrada, processamento e saída de dados
1. Calcular a área de um círculo. Planeje qual(is) dado(s) precisa(m) ser lido(s), qual dado resulta de um
cálculo e qual dado precisa ser escrito.
A = π * r²
*/
#include <stdio.h>
#define pi 3.14

int main()
{
    float r = 0;
    float area = 0;
    printf("\nCalculador de Area de circulo\n");
    printf("Por favor, informe o raio: \n");
    scanf("%f",&r);

    area = pi * (r * r);
    printf("a area do circulo eh de: %.2f\n",area);

    return 0;
}