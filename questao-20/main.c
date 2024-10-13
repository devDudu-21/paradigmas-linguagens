#include <stdio.h>

int main(void) {
    float TEMPO, VELOCIDADE_MEDIA, DISTANCIA, LITROS;
    printf("Insira o tempo gasto na viagem:\n");
    scanf("%f",&TEMPO);

    printf("Insira a velocidade media:\n");
    scanf("%f",&VELOCIDADE_MEDIA);

    DISTANCIA = TEMPO * VELOCIDADE_MEDIA;

    LITROS = DISTANCIA / 12;

    printf("VELOCIDADE MEDIA: %.2f\n", VELOCIDADE_MEDIA);
    printf("TEMPO GASTO: %.2f\n", TEMPO);
    printf("DISTANCIA PERCORRIDA: %.2f\n", DISTANCIA);
    printf("LITROS: %.2f\n", LITROS);

    return 0;
}
