#include <stdio.h>
#include <math.h>

int main(void) {
   float LADO1, LADO2, HIPOTENUSA;
    printf("Digite a primeira LADO: ");
    scanf("%f", &LADO1);

    printf("Digite a segunda LADO: ");
    scanf("%f", &LADO2);

    HIPOTENUSA = sqrt((LADO1 * LADO1) + (LADO2 * LADO2));
    printf("LADO1 + LADO2 = %.2lf\n", HIPOTENUSA);

    return 0;
}
