/*
Uma família desejar planejar sua viagem. A partir da distância a ser percorrida (em Km) e da velocidade
média que tipicamente praticam em suas viagens, calcule o tempo que gastarão na viagem. Lembre-se
que:
Distância = Tempo x Velocidade
*/
#include <stdio.h>

int main()
{
    float velo_media;
    float distancia;
    float tempo = 0;
    printf("\nCalculador economico!\nVeremos o tempo gasto na viagem para que voce"
            " possa planejar suas paradas e abastecimento.\n");

    printf("Por favor, Qual eh a distancia total do trajeto?\n");
    scanf("%f", &distancia);

    printf("E qual eh a Velocidade media do trajeto?\n");
    scanf("%f", &velo_media);

    tempo = distancia / velo_media;

    printf("O tempo de viagem sera de %.2fh\n", tempo);

    return 0;
}