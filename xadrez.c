#include <stdio.h>

// -------------------------------------------
// Funções Recursivas para Torre, Bispo e Rainha
// -------------------------------------------

// Torre - Move-se em linha reta (Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
}

// Bispo - Move-se em diagonal (Cima, Direita)
// Aqui, além da recursão, usaremos loops aninhados
// Loop externo = movimento vertical
// Loop interno = movimento horizontal
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop aninhado para simular "Cima, Direita"
        for (int v = 1; v <= 1; v++) { // movimento vertical (Cima)
            for (int h = 1; h <= 1; h++) { // movimento horizontal (Direita)
                printf("Cima, Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva
    }
}

// Rainha - Move-se em linha reta (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
}

// -------------------------------------------
// Cavalo com loops aninhados complexos
// Movimento em "L": duas casas para cima e uma para direita
// -------------------------------------------
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo para movimentos verticais
    for (int i = 1, j = movimentosCima; i <= movimentosCima; i++, j--) {
        if (j < 0) continue; // controle extra
        printf("Cima\n");

        // Loop interno para movimento horizontal
        for (int k = 1; k <= movimentosDireita; k++) {
            if (i == movimentosCima) { // só move para direita no final
                printf("Direita\n");
                break; // finaliza após o movimento correto
            }
        }
    }
}

// -------------------------------------------
// Função principal
// -------------------------------------------
int main() {
    // Quantidade de casas fixadas
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // ---------------------------
    // Torre (Recursão)
    // ---------------------------
    printf("Movimento da Torre:\n");
    moverTorre(movimentosTorre);
    printf("\n");

    // ---------------------------
    // Bispo (Recursão + Loops aninhados)
    // ---------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(movimentosBispo);
    printf("\n");

    // ---------------------------
    // Rainha (Recursão)
    // ---------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(movimentosRainha);
    printf("\n");

    // ---------------------------
    // Cavalo (Loops complexos)
    // ---------------------------
    moverCavalo();

    return 0;
}


