/*
Calcular o índice de massa corporal (IMC) de uma pessoa:
Índice de Massa Corporal: peso / altura2
*/
#include <stdio.h>

int main()
{
    float altura;
    float peso;
    float IMC;
    printf("\nCalculador de IMC: \n");
    printf("Por favor, informe sua altura: \n");
    scanf("%f", &altura);
    printf("Por favor, informe seu peso: \n");
    scanf("%f", &peso);

    IMC = peso / (altura * 2);
    
    printf("O seu IMC eh de: %.2f \n", IMC);
    printf("Compare seu resultado de: %.2f e consulte um proficional\n", IMC);
    printf("______________________________________________\n"
           "|Classificação               | IMC (kg/m²)   |\n"
           "|Abaixo do peso              | Menor que 18,5|\n"
           "|Peso normal                 | 18,5 a 24,9   |\n"
           "|Sobrepeso                   | 25 a 29,9     |\n"
           "|Obesidade grau I            | 30 a 34,9     |\n"
           "|Obesidade grau II           | 35 a 39,9     |\n"   
           "|Obesidade grau III (mórbida)| 40 ou mais    |\n"
           "______________________________________________\n");
    return 0;
}