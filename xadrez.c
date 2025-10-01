#include <stdio.h>

int main() {
    // ---------------------------
    // Declaração das variáveis
    // ---------------------------
    int i; // contador genérico
    
    const int movimentosTorre = 5;   // casas que a Torre vai andar
    const int movimentosBispo = 5;   // casas que o Bispo vai andar
    const int movimentosRainha = 8;  // casas que a Rainha vai andar

    // ---------------------------
    // Movimentação da Torre (FOR)
    // ---------------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------------------
    // Movimentação do Bispo (WHILE)
    // ---------------------------
    printf("Movimento do Bispo:\n");
    i = 1; // reinicia contador
    while (i <= movimentosBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // ---------------------------
    // Movimentação da Rainha (DO-WHILE)
    // ---------------------------
    printf("Movimento da Rainha:\n");
    i = 1; // reinicia contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentosRainha);

    return 0;
}
