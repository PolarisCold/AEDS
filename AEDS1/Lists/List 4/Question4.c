/*
4 - Construa um programa que permita desenvolver a solução para uma equação do segundo grau. Planeje,
cuidadosamente, os dados de entrada e todos os cenários possíveis de saída.
x² + 10x + 25 = 0           x=  (-b +- √delta) / 2a         Δ = b² - 4ac.
remodelar o codigo caso venha valor negativo, precisa aceitar tudo
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leitura(float*, float*, float*);
float calc_delta(float*, float*, float*);
float calc_X(float, float*, float*, float*, float*);


int main()
{
    float* a = malloc(sizeof(float));
    float* b = malloc(sizeof(float));
    float* c = malloc(sizeof(float));
    float* x1 = malloc(sizeof(float));
    float* x2 = malloc(sizeof(float));
    leitura(a, b, c);
    float delta = calc_delta(a, b, c);
    printf("delta eh :%.2f\n",delta);
    calc_X(delta, a, b, x1, x2);
    printf("X1 eh:%2.f\nX2 eh: %.2f\n", *x1, *x2);
    return 0;
}

void leitura(float *a, float *b, float *c)
{
    printf("\nPor favor, insira os valores que serão utilizados na equacao\n");
    printf("Digite o valor 'a'\n");
    scanf("%f", a);
    printf("Digite o valor 'b'\n");
    scanf("%f", b);
    printf("Digite o valor 'c'\n");
    scanf("%f", c);
}
//x =  (-b +- √delta) / 2a

float calc_delta(float* a, float* b, float* c)
{
    float delta = 0;
    delta = (*b * *b) - (4 * *a * *c);
    return delta;
}

float calc_X(float delta, float* a, float* b, float* x1, float* x2)
{
    *x1 = (-*b + sqrt(delta)) / (2 * *a);
    *x2 = (-*b - sqrt(delta)) / (2 * *a);
    return 0;
}
