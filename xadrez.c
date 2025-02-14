#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Anda para um conjunto de direções definidas por flags:
// 0x01 - Cima;
// 0x02 - Baixo;
// 0x04 - Esquerda;
// 0x08 - Direita
void andarCasa(int direcoes, int quantiaDeCasasRestantes) {
    bool paraCima = (direcoes & 0x01) == 0x01;
    bool paraBaixo = (direcoes & 0x02) == 0x02;
    bool paraEsquerda = (direcoes & 0x04) == 0x04;
    bool paraDireita = (direcoes & 0x08) == 0x08;

    //Caso exista 2 movimentos contrários de mesma direção, anule-os e atualize o estado dos booleanos.
    if (paraCima && paraBaixo)
        direcoes -= 0x01 | 0x02;

    if (paraEsquerda && paraDireita)
        direcoes -= 0x04 | 0x08;

    paraCima = (direcoes & 0x01) == 0x01;
    paraBaixo = (direcoes & 0x02) == 0x02;
    paraEsquerda = (direcoes & 0x04) == 0x04;
    paraDireita = (direcoes & 0x08) == 0x08;

    if (paraEsquerda) {
        if (paraCima)
            printf("Esquerda, Cima\n");
        else if (paraBaixo)
            printf("Esquerda, Baixo\n");
        else
            printf("Esquerda\n");
    }
    else if (paraDireita) {
        if (paraCima)
            printf("Direita, Cima\n");
        else if (paraBaixo)
            printf("Direita, Baixo\n");
        else
            printf("Direita\n");
    }
    else if (paraCima) {
        printf("Cima\n");
    }
    else if (paraBaixo) {
        printf("Baixo\n");
    }
    else {
        //Não está andando para nenhuma direção
        return;
    }

    quantiaDeCasasRestantes--;

    if (quantiaDeCasasRestantes > 0) {
        andarCasa(direcoes, quantiaDeCasasRestantes);
    }
}

void desafioNovatoEAventureiro() {
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

    // Nível Aventureiro - Movimentação do Cavalo
    // (total de casas não definido pelo exercício, somente as direções baixo e esquerda,
    // então decidi utilizar 3 para baixo e 3 para a esquerda)
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

void desafioMestre() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    const int bispoMovimentacaoCasas = 5; //5 casas na diagonal superior direita
    const int torreMovimentacaoCasas = 5; //5 casas para a direita
    const int rainhaMovimentacaoCasas = 8; //8 casas para a esquerda

    // Implementação de Movimentação do Bispo (5 casas na diagonal, direita e cima)
    int quantiaDeCasasRestantesParaOBispoAndar = bispoMovimentacaoCasas;

    printf("Movimentação do Bispo:\n");
    int totalDeCasasAndadasDoBispo = 0;
    while (totalDeCasasAndadasDoBispo < bispoMovimentacaoCasas) {
        for (int casaAtual = 0; casaAtual < bispoMovimentacaoCasas; casaAtual++) {
            andarCasa(1 | 8, 1);

            totalDeCasasAndadasDoBispo++;
        }
    }
    printf("\n");

    // Implementação de Movimentação da Torre (5 casas para a direita)
    int quantiaDeCasasRestantesParaATorreAndar = torreMovimentacaoCasas;

    printf("Movimentação da Torre:\n");
    andarCasa(8, quantiaDeCasasRestantesParaATorreAndar);
    printf("\n");

    // Implementação de Movimentação da Rainha (8 casas para a esquerda)
    int quantiaDeCasasRestantesParaARainhaAndar = rainhaMovimentacaoCasas;

    printf("Movimentação da Rainha:\n");
    andarCasa(4, quantiaDeCasasRestantesParaARainhaAndar);
    printf("\n");

    const int quantiaDeCasasPorEstagioParaOCavaloAndar = 1; //1 casa para cima e direita
    const int totalDeEstagiosDeDirecaoDoCavalo = 2;
    int casasRestantesDoEstagioAtualDoCavalo = quantiaDeCasasPorEstagioParaOCavaloAndar;
    int totalDeCasasAndadasDoCavalo = 0;

    printf("Movimentação do Cavalo:\n");
    while (true) {
        bool concluiuOsEstagios = false;
        for (int estagioAtual = 0; estagioAtual < totalDeEstagiosDeDirecaoDoCavalo; estagioAtual++) {
            for (int casaAtual = 0; casaAtual < quantiaDeCasasPorEstagioParaOCavaloAndar; casaAtual++) {
                if (estagioAtual == 0) {
                    //Estágio 1, somente para cima
                    andarCasa(1, 1);
                }
                else {
                    //Estágio 2, somente para a direita
                    andarCasa(8, 1);
                }

                totalDeCasasAndadasDoCavalo++;
            }
        }

        if (totalDeCasasAndadasDoCavalo >= quantiaDeCasasPorEstagioParaOCavaloAndar * totalDeEstagiosDeDirecaoDoCavalo) {
            break;
        }
    }
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}

int main() {
    //desafioNovatoEAventureiro();
    desafioMestre();

    return 0;
}