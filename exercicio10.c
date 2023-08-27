#include <stdio.h>

// Função para multiplicar uma linha da matriz por um número
void multiplicarLinha(int matriz[][3], int linha, int colunas, int multiplicador) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

// Função para multiplicar uma coluna da matriz por um número
void multiplicarColuna(int matriz[][3], int linhas, int coluna, int multiplicador) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= multiplicador;
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    multiplicarLinha(matriz, 1, 3, 2);
    multiplicarColuna(matriz, 3, 2, 3);

    printf("Matriz após multiplicar linha 2 por 2 e coluna 3 por 3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# SO_exercicios
