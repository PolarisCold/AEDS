/*
Construa uma nova versão para o programa que identifica se é um ano lido
bissexto ou não.
O programa deverá permitir ao usuário testar mais que um ano. Para isto, ao final,
o programa deverá enviar uma mensagem ao usuário questionando seu desejo de
verificar um novo ano e ler a resposta do usuário (S/N). De acordo com a resposta
lida, uma nova iteração deverá ocorrer ou o programa ser finalizado.
O programa deverá rejeitar a leitura de valores diferentes de [S/N]. Caso isto
ocorra, o programa deverá repetir a leitura da resposta do usuário.

Para determinar se um ano é bissexto, você deve verificar se ele é divisível por 4. Se for, então é bissexto
a menos que também seja divisível por 100. Nesse caso, só será bissexto se também for divisível por 400
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int ano();
void verificaAno(int guardaAno);
char desejaContinuar(char resposta);

int main(){
    char resposta;
    int guardaAno = ano();
    verificaAno(guardaAno);

    do{
        resposta = desejaContinuar(resposta);
        switch(resposta){
            case 'S': 
                guardaAno = ano();
                verificaAno(guardaAno);
            break;

            case 'N':
                printf("Fim do programa");
                resposta = false;
            break;
        }

    }while(resposta != false);

    return 0;
}

char desejaContinuar(char resposta){
    printf("\nDeseja continuar? [S/N]\n");
    scanf(" %c", &resposta);
    resposta = toupper(resposta);

    return resposta;
}

int ano(){
    int ano = 0;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    return ano;
}

void verificaAno(int guardaAno){
    if((guardaAno % 4 == 0 && guardaAno % 100 != 0) || guardaAno % 400 == 0){
        printf("Eh bisexo");
    }else{
        printf("Nao Eh bisexo\n");
    }
}