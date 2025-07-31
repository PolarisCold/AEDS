/*
2. Construa um algoritmo que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com teste no início.
*/
#include <stdio.h>

int main()
{
    int N = 10;
    while(N != 0)
    {
        printf("%d\n",N);
        N--;
    }
    return 0;
}