/*
6. Ler três lados de um triângulo e, sendo ele válido, identificar o seu tipo: equilátero, isóscele ou
escaleno
*/
#include <stdio.h>
#include <stdbool.h>

void apresentacao();
bool trianguloValido(float, float, float);
void tipoTriangulo(float, float, float);


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
        tipoTriangulo(L1, L2, L3);
    }else{
        printf("Triangulo invalido\n");
    }
    return 0;
}

void apresentacao()
{
    printf("\nIdentificador de Triangulo.\n");
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

void tipoTriangulo(float L1, float L2, float L3)
{
    if(L1 == L2 && L1 == L3)
    {
        printf("eh um triangulo equilatero\n");
    }else if((L1 == L2) || (L1 == L3) || (L2 == L3))
    {
        printf("eh um triangulo isoceles\n");
    }else{
        printf("eh um triangulo escaleno\n");
    }
}