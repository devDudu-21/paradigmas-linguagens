#include <stdio.h>

int main(void) {
    float result, celsius;
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    result = celsius * 9 / 5 + 32;

    printf("Temperatura em graus Celsius: %.1f\n", result);
    return 0;
}
