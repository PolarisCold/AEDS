/*
2. Construa um algoritmo que verifique qual o maior valor entre três números reais lidos.
*/
#include <stdio.h>

int main()
{
    int N1 ,N2, N3;
    printf("\ndigite os numeros para comparar:\n");
    printf("digite o primeiro numero\n");
    scanf("%d",&N1);
    printf("digite o segundo numero\n");
    scanf("%d",&N2);
    printf("digite o terceiro numero\n");
    scanf("%d",&N3);

    if(N1 > N2 && N1 > N3)
    {
        printf("%d eh o maior numero\n",N1);
    }else if(N2 > N3)
    {
        printf("%d eh o maior numero\n",N2);
    }else{
        printf("%d eh o maior numero\n",N3);
    }

    return 0;
}