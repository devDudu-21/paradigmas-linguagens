#include <stdio.h>
#include <math.h>

int main(void) {
    float r, volume;
    printf("Insira o raio da esfera:\n");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * M_PI * pow(r, 3);
    printf("Volume = %.2f\n", volume);

    return 0;
}
