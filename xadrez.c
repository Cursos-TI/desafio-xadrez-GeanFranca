#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// movimento da Torre
void moverTorre(int casas, char direcao[]) {
    // se casas for maior que zero, continua movendo
    if (casas > 0) {
        printf("%s\n", direcao); // mostra a direção
        moverTorre(casas - 1, direcao); // chama de novo
    }
}

// movimento do Bispo (diagonal)
void moverBispo(int casas) {
    // se casas for maior que zero, continua
    if (casas > 0) {
        printf("Diagonal cima-direita\n");
        moverBispo(casas - 1);
    }
}

// movimento da Rainha
void moverRainha(int casas, char direcao[]) {
    // igual a torre, mas pode ser qualquer direção
    if (casas > 0) {
        printf("%s\n", direcao);
        moverRainha(casas - 1, direcao);
    }
}

// Movimento do Cavalo usando loops aninhadosw
void moverCavalo(int linhas, int colunas) {
    // o cavalo anda em L: 2 pra cima, 1 pra direita
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (i == j) {
                // se for diagonal, ignora
                continue;
            }
            if (i + j > linhas) {
                // se passar do limite, para
                break;
            }
            printf("Cavalo move 2 pra cima e 1 pra direita\n");
        }
    }
}

// Bispo com loops aninhados (vertical e horizontal)
void bispoLoops(int casas) {
    int i, j;
    for (i = 1; i <= casas; i++) {
        for (j = 1; j <= casas; j++) {
            if (i == j) {
                printf("Bispo diagonal: sobe %d, direita %d\n", i, j);
            }
        }
    }
}

int main() {
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    // Movimentos da Torre
    printf("Movimento da Torre para cima:\n");
    moverTorre(3, "Cima");
    printf("\n");
    printf("Movimento da Torre para direita:\n");
    moverTorre(2, "Direita");
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(3);
    printf("\n");

    // Movimento do Bispo (loops aninhados)
    printf("Movimento do Bispo (loops aninhados):\n");
    bispoLoops(3);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha para baixo:\n");
    moverRainha(2, "Baixo");
    printf("\n");
    printf("Movimento da Rainha para esquerda:\n");
    moverRainha(2, "Esquerda");
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo (L):\n");
    moverCavalo(3, 3);
    printf("\n");

    return 0;
}