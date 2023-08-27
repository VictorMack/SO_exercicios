#include <stdio.h>
#include <string.h>

// Função para remover um caractere de uma string dada a posição
void removerCaractere(char str[], int posicao) {
    int comprimento = strlen(str);

    if (posicao >= 0 && posicao < comprimento) {
        for (int i = posicao; i < comprimento - 1; i++) {
            str[i] = str[i + 1];
        }
        str[comprimento - 1] = '\0'; // Define o novo final da string
    }
}

int main() {
    char minhaString[100] = "Hello, World!";
    int posicaoParaRemover = 7;

    removerCaractere(minhaString, posicaoParaRemover);

    printf("String após remover o caractere na posição %d: %s\n", posicaoParaRemover, minhaString);

    return 0;
}

# SO_exercicios
