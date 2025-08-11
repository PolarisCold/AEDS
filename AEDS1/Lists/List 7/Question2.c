/*
Calcular e escrever a potenciação. A base e o expoente deverão ser valores lidos – rejeitar a leitura de
valores inválidos.
Considere: base um valor real.
Expoente: um número natural: inteiro, positivo ou nulo(zero).
Obs: Não usar a biblioteca math.h. A potenciação deverá ser calculada de forma iterativa.
*/
#include <stdio.h>

void apresentacao();
float leitura();
float potenciacao(float, int);

int main()
{
    float base;
    int expoente;
    apresentacao();

    printf("Por favor, nos diga a base da operacao:\n");
    base = leitura();

    printf("E agora, o expoente:\n");

    do
    {
        scanf("%d", &expoente);
        if(expoente < 0)
        {
            printf("por favor, digite um expoente valido [exp > 0]\n");
        }
    }while(expoente < 0);
    
    printf("O resultado eh %.1f\n", potenciacao(base, expoente));
    return 0;
}

void apresentacao()
{
    printf("\nCalculador de potenciacao\n");
}

float leitura()
{
    float N;
    scanf("%f", &N);
    return N;
}

float potenciacao(float base, int expoente)
{
    float result = 1;
    for(float i = 0; i < expoente; i++)
    {
        result *= base;
    }
    return result;
}