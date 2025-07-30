/*
Codifique em C o algoritmo relativo à seguinte questão: calcular a área e o perímetro de um quadrado
*/
int main()
{

    int lado = 0;
    int area, perimetro;
    printf("\nCalculador de area e perimetro de quadrados.\nPor favor nos informe o Lado\n");
    scanf("%d",&lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("A area do quadrado eh de: %d\n",lado);
    printf("O perimetro do quadrado eh de: %d\n",lado);
    return 0;
}