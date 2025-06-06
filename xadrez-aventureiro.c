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

//Este Desafio re-utilizará os códigos do Novato, e acrescentará ações extras.
void desafioAventureiro() {
    desafioNovato();

    // Nível Aventureiro - Movimentação do Cavalo
    // (como o total de casas não foi definido pelo exercício, somente as direções baixo e esquerda,
    // decidi utilizar 3 para baixo e 3 para a esquerda)
    const int cavaloCasasPorEtapa = 3;

    printf("Movimentação do Cavalo:\n");
    for (int etapaDoMovimento = 0; etapaDoMovimento < 2; etapaDoMovimento++) {
        int casasRestantesParaAndar = cavaloCasasPorEtapa;
        while (casasRestantesParaAndar > 0) {
            casasRestantesParaAndar--;

            if (etapaDoMovimento == 0) {
                printf("Baixo\n");
            }
            else {
                printf("Esquerda\n");
            }
        }
    }
    printf("\n");
}

int main() {
    desafioAventureiro();

    return 0;
}