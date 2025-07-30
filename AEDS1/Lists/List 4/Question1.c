/*
Questões:
Planeje-as em função do conceito de entrada, processamento e saída de dados. Construa uma estrutura
condicional que conduza o processamento à solução esperada para o problema. Elabore um modelo de
solução e expresse o algoritmo em um texto estruturado. Codifique-o em C.
1 - Construa um programa em que o usuário digite uma idade e o programa informe tratar-se de uma pessoa
maior de idade ou não. Note ser classificado como maior de idade as pessoas com idade a partir de 18
anos.
*/
#include <stdio.h>

int main()
{
    int idade = 0;
    
    printf("\nPor favor, nos diga sua idade para confirmar as credenciais\n");
    scanf("%d",&idade);

    if(idade < 18)
    {
        printf("acesso negado! Consulte pais ou responsaveis.\n");
    }else{
        printf("acesso permitido:\ninfo:\netc...\n");
    }

    return 0;
}