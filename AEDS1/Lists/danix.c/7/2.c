/*
Calcular e escrever a potenciação. A base e o expoente deverão ser valores lidos – rejeitar a leitura de
valores inválidos.
Considere: base um valor real.
Expoente: um número natural: inteiro, positivo ou nulo(zero).
Obs: Não usar a biblioteca math.h. A potenciação deverá ser calculada de forma iterativa.
*/
#include <stdio.h>

int main(){
    int base = 2;
    int expoente = 3;
    int resultado = 1;

    for(int i = 1; i <= expoente; i++){
        resultado = resultado * base;       
    }

    printf("%d", resultado); 

    return 0;
}