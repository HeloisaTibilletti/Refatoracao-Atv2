#include <stdio.h>

int main() {
    int tentativas = 0;
    int numero;

    while (tentativas < 7) {
        printf("\nDigite um numero entre 12 e 20: ");
        scanf("%d", &numero);

        if (numero > 12 && numero < 20) {
            printf("\nO numero digitado eh: %d\n", numero);
            break;
        } else {
            printf("\nNumero invalido! Digite outro numero.\n");
        }

        tentativas++;
    }

    if (tentativas == 7) {
        printf("\nLimite de tentativas atingido.\n");
    }

    return 0;
}
