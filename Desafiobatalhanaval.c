#include <stdio.h>
#define linhas 10
#define colunas 10

int main (){
    printf("\n BATALHA NAVAL \n");

    //coordenadas das letras das colunas
    char letras [colunas] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //imprime as letras das colunas
    printf("  ");
    for(int j = 0; j < colunas; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    //declaração do tabuleiro
    int tabuleiro[10][10];

    //inicialização do tabuleiro com água
    for(int i = 1; i < linhas; i++) {
        for(int j = 1; j < colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //define as coordenadas de inicio e os tamanhos dos navios
    int naviohorizontallinha = 8;
    int naviohorizontalcoluna = 6;
    int navioverticallinha = 2;
    int navioverticalcoluna = 3;
    int tamanhonavio = 3;

    //adiciona os navios ao tabuleiro
    //validação do navio horizontal
    if(naviohorizontalcoluna + tamanhonavio > colunas) {
        printf("Navio sai do tabuleiro\n");
    } else {
        for(int j = naviohorizontalcoluna; j < naviohorizontalcoluna + tamanhonavio; j++)
        tabuleiro[naviohorizontallinha][j] = 3;
    }

    //validação do navio vertical
    if(navioverticallinha + tamanhonavio > linhas) {
        printf("Navio sai do tabuleiro\n");
    } else {
        for(int i = navioverticallinha; i < navioverticallinha + tamanhonavio; i++)
        tabuleiro[i][navioverticalcoluna] = 3;
    }

    //imprime o tabuleiro
    for(int i = 1; i < linhas; i++) {
        printf("%2d ", i);
        for(int j = 1; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}