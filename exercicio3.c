#include <stdio.h>

int main() {
    int maxNumero;

    printf("Digite o número máximo ímpar: ");
    scanf("%d", &maxNumero);

    if (maxNumero % 2 == 0) {
        printf("O número deve ser ímpar.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    for (int i = 1; i <= maxNumero; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ", j);
        }
        printf("\n");
        for (int k = 0; k < ((maxNumero - i) / 2); k++) {
            printf("   ");
        }
    }

    return 0;
}

# SO_exercicios
