#include <stdio.h>

/*
==========================
MateCheck - Nível Escolhido: Mestre
Autora: Naty Garcia Ramos
Descrição: Este programa simula a movimentação de peças de xadrez:
Torre, Bispo, Rainha e Cavalo.
Os movimentos utilizam loops (for, while, do-while), loops aninhados
e funções recursivas, conforme os requisitos avançados.
==========================
*/

#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// Função recursiva para mover a Torre
void moverTorre(int casas)
{
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Loop aninhado para mover o Bispo
void moverBispo()
{
    for (int i = 0; i < CASAS_BISPO; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Movimento do Cavalo usando loop com continue e break
void moverCavalo()
{
    int vertical = 0, horizontal = 0;
    for (; vertical < 2 || horizontal < 1;)
    {
        if (vertical < 2)
        {
            printf("Cima\n");
            vertical++;
            continue;
        }
        if (horizontal < 1)
        {
            printf("Direita\n");
            horizontal++;
        }
        if (vertical == 2 && horizontal == 1)
            break;
    }
}

int main()
{
    printf("===== MOVIMENTO DO BISPO =====\n");
    moverBispo();
    printf("\n===== MOVIMENTO DA TORRE =====\n");
    moverTorre(CASAS_TORRE);
    printf("\n===== MOVIMENTO DA RAINHA =====\n");
    moverRainha(CASAS_RAINHA);
    printf("\n===== MOVIMENTO DO CAVALO =====\n");
    moverCavalo();
    return 0;
}