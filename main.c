#include <stdio.h>

int main() {
    // Constantes com os movimentos
    const int BISPO = 5;   // 5 casas
    const int TORRE = 5;   // 5 casas
    const int RAINHA = 8;  // 8 casas

    // --- Bispo ---
    printf("Movimentos do Bispo (diagonal superior direita):\n");
    for (int i = 1; i <= BISPO; i++) {
        printf("Cima e Direita (%d)\n", i);
    }

    // --- Torre ---
    printf("\nMovimentos da Torre (para a direita):\n");
    for (int i = 1; i <= TORRE; i++) {
        printf("Direita (%d)\n", i);
    }

    // --- Rainha ---
    printf("\nMovimentos da Rainha (para a esquerda):\n");
    for (int i = 1; i <= RAINHA; i++) {
        printf("Esquerda (%d)\n", i);
    }

    return 0;
}
