#include <stdio.h>

#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    printf("==========================================\n");
    printf("   Desafio de Xadrez - Nivel Novato\n");
    printf("==========================================\n\n");

    printf("--- Movimentacao do Bispo (5 casas na Diagonal Superior Direita) ---\n");
    for (int i = 1; i <= CASAS_BISPO; i++) {
        printf("%d. Cima e Direita\n", i);
    }
    printf("Bispo completou sua movimentacao.\n\n");

    int contador_torre = 1;
    printf("--- Movimentacao da Torre (5 casas para a Direita) ---\n");
    while (contador_torre <= CASAS_TORRE) {
        printf("%d. Direita\n", contador_torre);
        contador_torre++;
    }
    printf("Torre completou sua movimentacao.\n\n");

    int contador_rainha = 1;
    printf("--- Movimentacao da Rainha (8 casas para a Esquerda) ---\n");
    do {
        printf("%d. Esquerda\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= CASAS_RAINHA);
    printf("Rainha completou sua movimentacao.\n\n");

    printf("==========================================\n");

    return 0;
}
