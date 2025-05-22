#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5; // O bispo deve se mover 5 casas para cima à direita
    int movimentoTorre = 5; // A torre deve se mover 5 casas para a direita
    int movimentoRainha = 8; // A rainha deve se mover 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Moveimentação do Bispo:\n");
    for(int i = 0; i < movimentoBispo; i++) {
        printf("Cima (%d)\n", i + 1);
        printf("Direita (%d)\n", i + 1);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    int movimentoTorreAtual = 0;
    while(movimentoTorreAtual < movimentoTorre) {
        printf("Direita (%d)\n", movimentoTorreAtual + 1);
        movimentoTorreAtual++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha:\n");
    int movimentoRainhaAtual = 0;
    do{
        printf("Esquerda (%d)\n", movimentoRainhaAtual + 1);
        movimentoRainhaAtual++;
    } while(movimentoRainhaAtual < movimentoRainha);
        

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
