#include <stdio.h>
#include <string.h>

// Função para inserir um caractere em uma string dada a posição
void inserirCaractere(char str[], int posicao, char caractere) {
    int comprimento = strlen(str);

    if (posicao >= 0 && posicao <= comprimento) {
        for (int i = comprimento; i >= posicao; i--) {
            str[i + 1] = str[i];
        }
        str[posicao] = caractere;
    }
}

int main() {
    char minhaString[100] = "Hello, World!";
    int posicaoParaInserir = 5;
    char caractereParaInserir = '-';

    inserirCaractere(minhaString, posicaoParaInserir, caractereParaInserir);

    printf("String após inserir o caractere '%c' na posição %d: %s\n", caractereParaInserir, posicaoParaInserir, minhaString);

    return 0;
}

# SO_exercicios
