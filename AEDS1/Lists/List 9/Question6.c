/*
6. Escrever os dez primeiros termos Fibonacci.
*/
#include <stdio.h>

int main()
{
    int fibonacci = 1;
    int termo_anterior = 1;
    printf("\n%d\n%d\n", termo_anterior, fibonacci);
    for(int i = 0; i < 8; i++)
    {
        int temp = fibonacci;
        fibonacci += termo_anterior;
        termo_anterior = temp;

        printf("%d\n", fibonacci);
    }
    return 0;
}