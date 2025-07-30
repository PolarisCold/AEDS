/*
5. Ler três lados e verificar se eles atendem aos critérios para formação de um triângulo.
*/
#include <stdio.h>
#include <stdbool.h>

void apresentacao();
bool trianguloValido(float, float, float);


int main()
{
    float L1, L2, L3;
    apresentacao();

    printf("por favor digite o primeiro lado: \n");
    scanf("%f",&L1);
    printf("por favor digite o segundo lado: \n");
    scanf("%f",&L2);
    printf("por favor digite o terceiro lado: \n");
    scanf("%f",&L3);
    if(trianguloValido(L1, L2, L3))
    {
        printf("Eh um triangulo valido\n");
    }else{
        printf("Nao eh um triangulo valido\n");
    }
    return 0;
}

void apresentacao()
{
    printf("\nVerificador de triangulos validos.\n");
}

bool trianguloValido(float L1, float L2, float L3)
{
    bool valido = false;
    if (L1 + L2 > L3 && L1 + L3 > L2 && L2 + L3 > L1)
    {
        valido = true;
    }
    return valido;
}