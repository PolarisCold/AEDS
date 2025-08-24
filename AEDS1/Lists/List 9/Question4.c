/*
4. Escrever os 10 primeiros termos da série:
1/1 , 1/2 , 1/4 , 1/8 , ...
*/
#include <stdio.h>

int main()
{
    int denominador = 1;
    for(int i = 1; i <= 10; i++)
    {
        printf("1/%d\n", denominador);
        denominador *= 2;
    }
    return 0;
}