#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void desafioNovato() {
    // Nível Novato - Movimentação das Peças
    const int bispoMovimentacaoCasas = 5; //5 casas na diagonal superior direita
    const int torreMovimentacaoCasas = 5; //5 casas para a direita
    const int rainhaMovimentacaoCasas = 8; //8 casas para a esquerda

    // Implementação de Movimentação do Bispo (5 casas na diagonal, direita e cima)
    int quantiaDeCasasRestantesParaOBispoAndar = bispoMovimentacaoCasas;

    printf("Movimentação do Bispo:\n");
    while (quantiaDeCasasRestantesParaOBispoAndar > 0) {
        quantiaDeCasasRestantesParaOBispoAndar--;

        printf("Direita, Cima\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre (5 casas para a direita)
    int quantiaDeCasasRestantesParaATorreAndar = torreMovimentacaoCasas;

    printf("Movimentação da Torre:\n");
    do {
        quantiaDeCasasRestantesParaATorreAndar--;

        printf("Direita\n");
    } while (quantiaDeCasasRestantesParaATorreAndar > 0);
    printf("\n");

    // Implementação de Movimentação da Rainha (8 casas para a esquerda)
    int quantiaDeCasasRestantesParaARainhaAndar = rainhaMovimentacaoCasas;

    printf("Movimentação da Rainha:\n");
    for (int indiceDoMovimento = 0; indiceDoMovimento < quantiaDeCasasRestantesParaARainhaAndar; indiceDoMovimento++) {
        printf("Esquerda\n");
    }
    printf("\n");
}

int main() {
    desafioNovato();

    return 0;
}