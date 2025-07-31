/*
3. Construa um programa que escreva os números inteiros de dez até um (ordem decrescente). Utilize
estrutura de repetição com variável de controle.
*/
#include <stdio.h>

int main()
{
    int N = 10;
    for(int i = 0; N > 0; N--)
    {
        printf("%d\n",N);
    }
    return 0;
}