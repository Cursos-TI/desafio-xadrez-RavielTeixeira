#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    // Implementação de Movimentação da torre 5 casas para direita
for (int i = 0; i < 5; i++) {
        printf("Direita\n");
}

    // Implementação de Movimentação do Bispo 5 casas na diagonal 
for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n"); 
}

    // Implementação de Movimentação da Rainha 8 casas para esquerda 
for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
}


    // Implementação de Movimentação do cavalo 2 casas para cima e uma casa para direita 
for (int i = 0; i < 2; i++) {
    printf("Cima\n");
}
for (int i = 0; i < 1; i++) {
    printf("Direita\n");
}
    
    return 0;
}
