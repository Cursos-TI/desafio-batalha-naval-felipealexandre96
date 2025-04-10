#include <stdio.h>

int main(){
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int navio1_linha_inicial, navio1_coluna_inicial;
    int navio2_linha_inicial, navio2_coluna_inicial;
    int tamanhonavio = 3;

    //inicializar tabuleiro

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Definir posições dos navios
    navio1_linha_inicial = 2;
    navio1_coluna_inicial = 3; //horizontal

    navio2_linha_inicial = 5;
    navio2_coluna_inicial = 1; //vertical

    //validar e posicionar navios
    int sobreposicao, sobreposicao2;
    if(navio1_coluna_inicial + tamanhonavio > 10) {
        printf("Navio 1 excede o tabuleiro.\n");
    } else {
        int sobreposicao = 0;
        for(int j = navio1_coluna_inicial; j < navio1_coluna_inicial + tamanhonavio; j++) {
            if(tabuleiro[navio1_linha_inicial][j] != 0) {
                sobreposicao = 1;
                break;

            }
        }
    }

    if(sobreposicao) {
        printf("Navio 1 sobrepõe outro navio. \n");
    } else {
        for(int j = navio1_coluna_inicial; j < navio1_coluna_inicial + tamanhonavio; j++) {
            tabuleiro[navio1_linha_inicial][j] = 3;
        }
    }

    //validar e posicionar navio 2 (vertical)
    if(navio2_linha_inicial + tamanhonavio > 10) {
        printf("Navio 2 excede tabuleiro.\n");
    } else {
        int sobreposicao2 = 0;
        for(int i = navio2_linha_inicial; i < navio2_linha_inicial + tamanhonavio; i++) {
            if(tabuleiro[i][navio2_coluna_inicial] != 0) {
                sobreposicao2 = 1;
                break;
            }

        }
    }
    if(sobreposicao2) {
        printf("Navio 2 sobrepõe outro navio. \n");
    } else {
        for(int i = navio2_linha_inicial; i < navio2_linha_inicial + tamanhonavio; i++) {
            tabuleiro[i][navio2_coluna_inicial] = 3;
        }
    }

    //Exibir tabuleiro
    printf("\n TABULEIRO DE BATALHA NAVAL \n");
    for(int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}