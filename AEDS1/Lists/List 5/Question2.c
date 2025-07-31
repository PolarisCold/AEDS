/*
Um programa deverá prover ao usuário um menu de opções de conversão para medida, a saber:
1 – De Quilômetros para Milhas
2 – De Metros para Pés
3 – De Célsius para Farenheit
4 – De Quilogramas para Libras
Após escolher a opção do menu, o usuário deverá informar o valor a ser convertido
*/
#include <stdio.h>

void apresentacao();
int opcoes();
float Km_to_Mi();
float M_to_P();
float C_to_F();
float Kg_to_Li();

int main()
{
    int opcao;
    apresentacao();
    do
    {
        opcao = opcoes();
        switch (opcao)
        {
        case 0:
            printf("Finalizando a execucao do programa, obrigado por usar\n");
            break;
        case 1:
            printf("a conversao resultou em %.2f milhas\n", Km_to_Mi());
            printf("deseja utilizar novamente?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|1 – De Quilômetros para Milhas              |\n"
                   "|2 – De Metros para Pés                      |\n"
                   "|3 – De Célsius para Farenheit               |\n"
                   "|4 – De Quilogramas para Libras              |\n"
                   "----------------------------------------------\n");
            break;
        case 2:
            printf("a conversao resultou em %.2f Pes\n", M_to_P());
            printf("deseja utilizar novamente?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|1 – De Quilômetros para Milhas              |\n"
                   "|2 – De Metros para Pés                      |\n"
                   "|3 – De Célsius para Farenheit               |\n"
                   "|4 – De Quilogramas para Libras              |\n"
                   "----------------------------------------------\n");
            break;
        case 3:
            printf("a conversao resultou em %.2f fahrenheit\n", C_to_F());
            printf("deseja utilizar novamente?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|1 – De Quilômetros para Milhas              |\n"
                   "|2 – De Metros para Pés                      |\n"
                   "|3 – De Célsius para Farenheit               |\n"
                   "|4 – De Quilogramas para Libras              |\n"
                   "----------------------------------------------\n");
            break;
        case 4:
            printf("a conversao resultou em %.2f Libras\n", Kg_to_Li());
            printf("deseja utilizar novamente?\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|0 – Fechar o programa                       |\n"
                   "|1 – De Quilômetros para Milhas              |\n"
                   "|2 – De Metros para Pés                      |\n"
                   "|3 – De Célsius para Farenheit               |\n"
                   "|4 – De Quilogramas para Libras              |\n"
                   "----------------------------------------------\n");
            break;
        default:
            printf("valor invalido, por favor inserir entre uma das opcoes validas\n");
            printf("______________________________________________\n"
                   "|Opcoes:                                     |\n"
                   "|1 – De Quilômetros para Milhas              |\n"
                   "|2 – De Metros para Pés                      |\n"
                   "|3 – De Célsius para Farenheit               |\n"
                   "|4 – De Quilogramas para Libras              |\n"
                   "----------------------------------------------\n");
        }
    } while (opcao != 0);
    return 0;
}

void apresentacao()
{
    printf("\nConversor de Medidas\n");
    printf("______________________________________________\n"
           "|Opcoes:                                     |\n"
           "|0 – Fechar o programa                       |\n"
           "|1 – De Quilômetros para Milhas              |\n"
           "|2 – De Metros para Pés                      |\n"
           "|3 – De Célsius para Farenheit               |\n"
           "|4 – De Quilogramas para Libras              |\n"
           "----------------------------------------------\n");
}

int opcoes()
{
    int opcao;
    printf("qual conversor deseja usar?\n");
    scanf("%d", &opcao);
    return opcao;
}

float Km_to_Mi()
{
    float milhas = 0;
    float km = 0;
    printf("Qual valor deseja converter de Km para M?\n");
    scanf("%f", &km);
    milhas = km * 0.6214;

    return milhas;
}

float M_to_P()
{
    float pes = 0;
    float metros = 0;
    printf("Qual valor deseja converter de metros para pes?\n");
    scanf("%f", &metros);
    pes = metros * 3.28084;
    return pes;
}

float C_to_F()
{
    float fahrenheit = 0;
    float celsius;
    printf("Qual valor deseja converter de Ceusius para Fahrenheit?\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

float Kg_to_Li()
{
    float libras = 0;
    float kilograma = 0;
    printf("Qual valor deseja converter de kilogramas para libras?\n");
    scanf("%f", &kilograma);
    libras = kilograma * 2.20462;
    return libras;
}