#include <stdio.h>

// Função para somar os elementos das linhas L1 e L2 e colocar o resultado em L2
void somarLinhas(int matriz[][3], int colunas, int L1, int L2) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L2][j] + matriz[L1][j];
    }
}

// Função para multiplicar os elementos das linhas L1 e L2 e colocar o resultado em L2
void multiplicarLinhas(int matriz[][3], int colunas, int L1, int L2) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L2][j] * matriz[L1][j];
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    somarLinhas(matriz, 3, 0, 1); // Soma a linha 0 com a linha 1 e coloca o resultado na linha 1
    multiplicarLinhas(matriz, 3, 1, 2); // Multiplica a linha 1 com a linha 2 e coloca o resultado na linha 2

    printf("Matriz após somar a linha 0 com a linha 1 e multiplicar a linha 1 com a linha 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# SO_exercicios
