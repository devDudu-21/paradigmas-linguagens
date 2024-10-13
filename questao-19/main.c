#include <stdio.h>

int main(void) {
    int A, B, TROCA;

    printf("Insira o valor de A:");
    scanf("%d",&A);

    printf("Insira o valor de B:");
    scanf("%d",&B);

    TROCA = A;
    A = B;
    B = TROCA;

    printf("VALOR A %d\n", A);
    printf("VALOR B %d\n", B);

    return 0;
}
