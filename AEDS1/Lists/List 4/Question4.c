/*
4 - Construa um programa que permita desenvolver a solução para uma equação do segundo grau. Planeje,
cuidadosamente, os dados de entrada e todos os cenários possíveis de saída.
x² + 10x + 25 = 0           x=  (-b +- √delta) / 2a         Δ = b² - 4ac.
remodelar o codigo caso venha valor negativo, precisa aceitar tudo
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leitura(float *, float *, float *);
float calc_delta(float, float, float);
void calc_X_maior(float, float, float);
void calc_X_menor();
void calc_X_zero(float, float, float);

int main()
{
    float a;
    float b;
    float c;

    leitura(&a, &b, &c);
    float delta = calc_delta(a, b, c);
    printf("delta eh :%.2f\n", delta);
    if (delta > 0)
    {
        calc_X_maior(delta, a, b);
    }
    else if (delta == 0)
    {
        calc_X_zero(delta, a, b);
    }
    else
    {
        calc_X_menor();
    }
    return 0;
}

void leitura(float *a, float *b, float *c)
{
    printf("\nPor favor, insira os valores que serão utilizados na equacao\n");
    do
    {
        printf("Digite o valor 'a'\n");
        scanf("%f", a);
        if (a == 0)
        {
            printf("A = 0 nao resulta em uma equacao de segundo grau\n por favor digite um valor valid\n");
        }
    } while (a == 0);
    printf("Digite o valor 'b'\n");
    scanf("%f", b);
    printf("Digite o valor 'c'\n");
    scanf("%f", c);
}
// x =  (-b +- √delta) / 2a

float calc_delta(float a, float b, float c)
{
    float delta = 0;
    delta = (b * b) - (4 * a * c);
    return delta;
}

void calc_X_maior(float delta, float a, float b)
{
    float x1, x2;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("X1 eh:%2.f\nX2 eh: %.2f\n", x1, x2);
}

void calc_X_menor()
{
    printf("Não existem raízes no conjunto dos números reais.\n");
}

void calc_X_zero(float delta, float a, float b)
{
    float x1;
    x1 = (-b + sqrt(delta)) / (2 * a);
    printf("X1 eh:%2.f\n", x1);
}