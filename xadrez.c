#include <stdio.h>

int main() {

    // Movimento da torre 5 casas para a direita (usando for)
  
    printf("Movimento da torre 5 casas para a direita:\n");
    for (int torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }
    printf("\n");

    
    // Movimento do bispo 5 casas na diagonal cima e direita (usando while)
    
    printf("Movimento do bispo 5 casas na diagonal - Cima Direita:\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }
    printf("\n");

    
    // Movimento da rainha 8 casas para a esquerda (usando do-while)
    
    printf("Movimento da rainha 8 casas para a esquerda:\n");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}

