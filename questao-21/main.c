#include <stdio.h>

int main(void) {
    int a, b, soma, subtracao, multiplicacao;
    float divisao;

    printf("Insira o valor A:\n");
    scanf("%d", &a);

    printf("Insira o valor B:\n");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;

    if (b != 0) {
        divisao = (float)a / b;
    } else {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 1;
    }

    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao = %.2f\n", divisao);

    return 0;
}
