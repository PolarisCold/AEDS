//1. Calcular a área e o perímetro de um quadrado.
#include <stdio.h>

int main()
{
    //Crio 2 variaveis para armazenar os valores de lado e dos resultados das operações.
    int lado = 0;
    int area, perimetro;
    printf("\nCalculador de area e perimetro de quadrados.\nPor favor nos informe o Lado\n");
    scanf("%d",&lado);

    area = lado * lado;
    perimetro = lado * 4;
    //Printo na tela os resultados da operação.
    printf("A area do quadrado eh de: %d\n",lado);
    printf("O perimetro do quadrado eh de: %d\n",lado);
    return 0;
}