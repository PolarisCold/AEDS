/*
4. Construa uma nova versão para o programa que calcula o peso ideal de uma pessoa. Nela, rejeite a
leitura de dados fora do domínio em ambos os casos, altura e sexo. Considere os seguintes domínios:
Sexo: ‘M’, ‘m’, ‘F’, ‘f’
Altura: 0..2,5
*/
#include <stdio.h>
#include <ctype.h>

void apresentacao();
char tipo_sexo();
int ideal_homem();
int ideal_mulher();

int main()
{
    char sexo;
    apresentacao();
    sexo = tipo_sexo();

    if(sexo == 'M')
    {
        ideal_homem();
    }else{
        ideal_mulher();
    }
    return 0;
}

void apresentacao()
{
    printf("\nCalculador de peso ideal.\n");
}

char tipo_sexo()
{
    char sexo;
    printf("Por favor digite seu genero: [F-M]\n");
    do
    {
        scanf(" %c",&sexo);
        sexo = toupper(sexo);
        printf(" %c\n",sexo);
        if (sexo != 'F' && sexo != 'M')
        {
            printf("Genero invalido, por favor digite entre [F-M]\n");
        }
        
    } while (sexo != 'F' && sexo != 'M');
    
    return sexo;
}

int ideal_mulher()
{
    float altura = 0;
    float pesoIdeal = 0;
    do
    {
        printf("Por favor, nos informe a sua altura:[Em metros 0 - 2.5]\n");
        scanf("%f",&altura);
        if(altura > 2.5 || altura < 0)
        {
            printf("altura invalida, por favor, coloque uma altura valida [0 - 2.5]\n");
        }
    }while(altura > 2.5 || altura < 0);
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("o seu peso ideal eh de: %.2f\n",pesoIdeal);

    return 0;
}

int ideal_homem()
{
    float altura = 0;
    float pesoIdeal = 0;
    do
    {
        printf("Por favor, nos informe a sua altura:[Em metros 0 - 2.5]\n");
        scanf("%f",&altura);
        if(altura > 2.5 || altura < 0)
        {
            printf("altura invalida, por favor, coloque uma altura valida [0 - 2.5]\n");
        }
    }while(altura > 2.5 || altura < 0);
    pesoIdeal = (72.7 * altura) - 58;
    printf("o seu peso ideal eh de: %.2f\n",pesoIdeal);

    return 0;
}
