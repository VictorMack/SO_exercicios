#include <stdio.h>

int main() {
    int tamanho;
    
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);
    
    int matriz[tamanho][tamanho];
    
    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int menor = matriz[0][0];
    int linhaMenor = 0;
    
    // Encontrando o menor elemento e sua linha correspondente
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
            }
        }
    }
    
    printf("A linha com o menor número é: %d\n", linhaMenor + 1); // Adicionamos 1 para exibir a linha em formato humano (começando de 1)
    
    return 0;
}

# SO_exercicios
