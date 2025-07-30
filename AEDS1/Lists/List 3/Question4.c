/*
4. Identificar se um ano lido é bissexto ou não. Pesquise o que deve ser observado para verificar se um ano
é bissexto.
*/
#include <stdio.h>

int main()
{
    int ano;
    printf("\nVerificador de ano bissexto\n");
    printf("Por favor digite um ano para realizar a verificacao\n");
    scanf("%d",&ano);
    if((ano % 4 == 0 && ano %100 != 0) || ano % 400 == 0)
    {
        printf("%d eh um ano bissexto\n",ano);
    }else
    {
        printf("%d Nao eh um ano bissexto\n",ano);
    }
    
    return 0;
}
