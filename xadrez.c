#include <stdio.h>

int main() {
    // ---------------------------
    // Declaração das variáveis
    // ---------------------------
    int i, j; // contadores genéricos

    const int movimentosTorre = 5;   // casas que a Torre vai andar
    const int movimentosBispo = 5;   // casas que o Bispo vai andar
    const int movimentosRainha = 8;  // casas que a Rainha vai andar
    const int movimentosBaixo = 2;   // casas que o Cavalo anda para baixo
    const int movimentosEsquerda = 1;// casas que o Cavalo anda para a esquerda

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
    i = 1;
    while (i <= movimentosBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // ---------------------------
    // Movimentação da Rainha (DO-WHILE)
    // ---------------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentosRainha);
    printf("\n");

    // ---------------------------
    // Movimentação do Cavalo (FOR + WHILE aninhados)
    // ---------------------------
    printf("Movimento do Cavalo:\n");

    // Primeiro loop FOR: controla os dois movimentos para baixo
    for (i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop WHILE (aninhado na sequência): controla o movimento para a esquerda
    j = 1;
    while (j <= movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}

