/*5. Calcular o valor de H, com precisão de 10 termos, onde:
H = 1/10 + 2/9 + 3/8 + 4/7 , ...
*/
#include <stdio.h>

int main()
{
    float soma = 0;
    for (int i = 1; i <= 10; i++)
    {
        soma += (float)i / (11-i);
    }
    printf("\nO somatorio de H em 10 termos resulta em %.4f\n", soma);
    return 0;
}