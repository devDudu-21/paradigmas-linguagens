#include <stdio.h>
#include <stdlib.h>


int main(void) {
    float num1, num2;
    float media;


    printf("Digite sua primeira nota: ");
    scanf("%f", &num1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2.0f;
    printf("Media = %.2f\n", media);

    #ifdef _WIN32
        system("pause");
    #else
        printf("Pressione qualquer tecla para continuar...\n");
        system("read -n 1 -s");
    #endif

    return 0;
}
