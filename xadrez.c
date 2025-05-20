#include <stdio.h>

int main() {

    // Movimento da torre 5 casas para a direita (usando for)
	
    printf("Movimento da torre 5 casas para a direita:\n");
    for (int torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do bispo 5 casas na diagonal cima direita (usando while)
	
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
    printf("\n");

    // Movimento do cavalo 2 casas para baixo e 1 para a esquerda
	
    // Utilizando loops aninhados: for externo  while interno
	
    printf("Movimento do cavalo em 'L' (2 casas para baixo, 1 para a esquerda):\n");

    // Movimento vertical (2 passos para baixo) - loop for 
	
    for (int cavalo = 0; cavalo < 2; cavalo++) {
        printf("Baixo\n");
    }

    // Movimento horizontal (1 passo para a esquerda) - loop while
	
    int cavalo2 = 0;
    while (cavalo2 < 1) {
        printf("Esquerda\n");
        cavalo2++;
    }

    return 0;
}
