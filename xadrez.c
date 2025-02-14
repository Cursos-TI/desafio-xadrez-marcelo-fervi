#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int bispoMovimentacaoCasas = 5; //5 casas na diagonal superior direita
    const int torreMovimentacaoCasas = 5; //5 casas para a direita
    const int rainhaMovimentacaoCasas = 8; //8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int quantiaDeCasasRestantesParaOBispoAndar = bispoMovimentacaoCasas;
    
    printf("Movimentação do Bispo:\n");
    while (quantiaDeCasasRestantesParaOBispoAndar > 0) {
        quantiaDeCasasRestantesParaOBispoAndar--;

        printf("Direita, Cima\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int quantiaDeCasasRestantesParaATorreAndar = torreMovimentacaoCasas;

    printf("Movimentação da Torre:\n");
    do {
        quantiaDeCasasRestantesParaATorreAndar--;

        printf("Direita\n");
    }
    while (quantiaDeCasasRestantesParaATorreAndar > 0);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int quantiaDeCasasRestantesParaARainhaAndar = rainhaMovimentacaoCasas;

    printf("Movimentação da Rainha:\n");
    for (int indiceDoMovimento = 0; indiceDoMovimento < quantiaDeCasasRestantesParaARainhaAndar; indiceDoMovimento++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}