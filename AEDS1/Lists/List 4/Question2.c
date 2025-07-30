/*
2 - Construa um programa em que o usuário digite uma senha e o programa exibe uma mensagem
informando estar a senha correta ou não. Considere ser a senha correta o seu ano de nascimento.
*/

#include <stdio.h>

int main()
{
    int senha = 2005;
    int tentativa = 0;
    printf("\nPor favor, digite sua senha:\n"
           "(como primeiro acesso use sua senha padrao. [Ano de Nasc.])\n");
    scanf("%d",&tentativa);
    if(tentativa == senha)
    {
        printf("Senha correta:\nAcesso permitido!\n");
    }else{
        printf("Senha incorreta:\nAcesso negado!\n");
    }
    
    return 0;
}