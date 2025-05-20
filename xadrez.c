#include <stdio.h>

// Funções Recursivas


// Função recursiva para movimentar a Torre
void moverTorreDireita(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreDireita(passos - 1);
}

// Função recursiva para movimentar o Bispo na diagonal (cima-direita)
void moverBispoDiagonal(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoDiagonal(passos - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainhaEsquerda(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(passos - 1);
}

// Função Principal

int main() {

    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre 5 casas para a direita (Recursivo):\n");
    moverTorreDireita(5);
    printf("\n");

    // Movimento do Bispo (Recursivo + Loops aninhados)
    printf("Movimento do Bispo 5 casas na diagonal - Cima Direita (Recursivo):\n");
    moverBispoDiagonal(5);
    printf("\n");

    // Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo com Loops Aninhados (Vertical + Horizontal):\n");
    for (int vertical = 0; vertical < 3; vertical++) {
        for (int horizontal = 0; horizontal < 3; horizontal++) {
            printf("Diagonal Cima Direita\n");
        }
    }
    printf("\n");

    // Movimento da Rainha (Recursivo)
    printf("Movimento da Rainha 8 casas para a esquerda (Recursivo):\n");
    moverRainhaEsquerda(8);
    printf("\n");

    // Movimento do Cavalo com loops complexos
    // Duas casas para cima, uma para a direita (em L)
    printf("Movimento do Cavalo em 'L' (2 casas para cima, 1 para a direita):\n");

    int movimentosRealizados = 0;

    for (int cima = 2; cima > 0; cima--) {
        printf("Cima\n");
        movimentosRealizados++;

        // Verifica se já foram feitas 2 subidas
        if (movimentosRealizados == 2) {
            int direita = 1;
            while (direita > 0) {
                printf("Direita\n");
                direita--;
                // Interrompe o laço externo após movimento completo
                break;
            }
            break;
        }
    }

    printf("\n");

    return 0;
}
