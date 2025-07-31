/*
1. Construa um algoritmo que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com teste no final.
*/
#include <stdio.h>

int main()
{
    int N = 10;
    do{
        printf("%d\n",N);
        N--;
    } while(N != 0);
    return 0;
}