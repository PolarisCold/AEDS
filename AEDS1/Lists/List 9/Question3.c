/*
3. Escrever os 10 primeiros termos da série:
2, 5, 8, ...
*/
#include <stdio.h>

int main()
{
    int termo = 2;
    printf("%d\n", termo);
    for (int i = 1; i < 10; i++)
    {
        termo += 3;
        printf("%d\n", termo);
    }
    return 0;
}