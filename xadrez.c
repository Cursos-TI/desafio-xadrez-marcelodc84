#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//funções recursivas para movimentação 
void moverAcima(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima (%d)\n", casas);
    moverAcima(casas - 1);
} 
void moverDireita(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita (%d)\n", casas);
    moverDireita(casas - 1);
}
void moverEsquerda(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda (%d)\n", casas);
    moverEsquerda(casas - 1);
}
void moverBaixo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Baixo (%d)\n", casas);
    moverBaixo(casas - 1);
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5; // O bispo deve se mover 5 casas para cima e direita
    int movimentoTorre = 5; // A torre deve se mover 5 casas para a direita
    int movimentoRainha = 8; // A rainha deve se mover 8 casas para a esquerda

    // Nível Intermediário - Movimentação do Cavalo
    const int movimentoCavaloV = 2; // O cavalo deve se mover 2 casas para baixo
    const int movimentoCavaloH = 1; // O cavalo deve se mover 1 casa para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    for(int i = 0; i < movimentoBispo; i++) {
        printf("Cima (%d)\n", i + 1);
        printf("Direita (%d)\n", i + 1);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    int movimentoTorreAtual = 0;
    while(movimentoTorreAtual < movimentoTorre) {
        printf("Direita (%d)\n", movimentoTorreAtual + 1);
        movimentoTorreAtual++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    int movimentoRainhaAtual = 0;
    do{
        printf("Esquerda (%d)\n", movimentoRainhaAtual + 1);
        movimentoRainhaAtual++;
    } while(movimentoRainhaAtual < movimentoRainha);
        

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    int movimentoCavaloAtualV = 0;
    for(int i = 0; i < movimentoCavaloH; i++) {
        while(movimentoCavaloAtualV < movimentoCavaloV) {
            printf("Baixo (%d)\n", movimentoCavaloAtualV + 1);
            movimentoCavaloAtualV++;
        }
        printf("Esquerda (%d)\n", i + 1);
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n= = = = = = = = = = = = =");
    printf("\n= = = Nível Mestre: = = =");
    printf("\n= = = = = = = = = = = = =\n");

    printf("\nMovimentação do Bispo:\n");//usar loops aninhados, sendo o loop mais externo o vertical, e o mais interno o horizontal
    for(int v = 0, h = 0; v < movimentoBispo; v++) {
        moverAcima(1);
        do
        {
            moverDireita(1);
            h++;
        } 
        while(h == v);
    }
    // moverAcima(movimentoBispo);
    // moverDireita(movimentoBispo);

    printf("\nMovimentação da Torre:\n");
    moverDireita(movimentoTorre);
    printf("\nMovimentação da Rainha:\n");
    moverEsquerda(movimentoRainha);

    printf("\nMovimentação do Cavalo:\n");
    for(int v = 0, h = 0; v < movimentoCavaloV; v++, h++) {
        printf("Cima (%d)\n", v + 1);
        if (h >= movimentoCavaloH) continue;
        printf("Direita (%d)\n", v + 1);
    }

    return 0;
}
