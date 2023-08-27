#include <stdio.h>

// Função para encontrar a posição de um caractere dentro de uma string
int encontrarPosicaoCaractere(const char *string, char caractere) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            return i; // Retorna a posição se o caractere for encontrado
        }
    }
    return -1; // Retorna -1 se o caractere não for encontrado
}

int main() {
    char minhaString[] = "Hello, World!";
    char meuCaractere = 'W';

    int posicao = encontrarPosicaoCaractere(minhaString, meuCaractere);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", meuCaractere, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", meuCaractere);
    }

    return 0;
}

# SO_exercicios
