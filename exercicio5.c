
#include <stdio.h>

int main() {
    int linhas, colunas;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas];
    
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int escolha, indice;
    int multiplicador;
    
    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna: ");
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        printf("Digite o número da linha a ser multiplicada: ");
        scanf("%d", &indice);
        
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);
        
        for (int j = 0; j < colunas; j++) {
            matriz[indice][j] *= multiplicador;
        }
    } else if (escolha == 2) {
        printf("Digite o número da coluna a ser multiplicada: ");
        scanf("%d", &indice);
        
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);
        
        for (int i = 0; i < linhas; i++) {
            matriz[i][indice] *= multiplicador;
        }
    } else {
        printf("Opção inválida.\n");
        return 1;
    }
    
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

# SO_exercicios
