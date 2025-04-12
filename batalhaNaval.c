#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5

void imprimirtabuleiro() {
    char coluna[TAM_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializa o tabuleiro 
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // navio
    tabuleiro[9][9] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[7][7] = 3;

    // cruz (1)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2)
                tabuleiro[i][j] = 1;
        }
    }

    //  cone (2)
    int centro_coluna = 7;
    int altura_cone = 3;

    for (int i = 0; i < altura_cone; i++) {
        int inicio = centro_coluna - i;
        int fim = centro_coluna + i;

        for (int j = inicio; j <= fim; j++) {
            if (j >= 0 && j < TAM_TABULEIRO) {
                tabuleiro[i][j] = 2;
            }
        }
    }

    //octaedro (valor 4) 
    int centro_x = 5;
    int centro_y = 5;
    int tamanho = 2;

    
    for (int i = 0; i <= tamanho; i++) {
        int inicio = centro_y - i;
        int fim = centro_y + i;

        for (int j = inicio; j <= fim; j++) {
            int x = centro_x - i;
            int y = j;

            if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                tabuleiro[x][y] = 4;
            }
        }
    }

    
    for (int i = 1; i <= tamanho; i++) {
        int inicio = centro_y - (tamanho - i);
        int fim = centro_y + (tamanho - i);

        for (int j = inicio; j <= fim; j++) {
            int x = centro_x + i;
            int y = j;

            if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                tabuleiro[x][y] = 4;
            }
        }
    }

    // Impressão do tabuleiro
    printf("   ");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%2c|", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%2d|", i + 1);
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%2d|", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("--------------------------------------------\n");
    printf("BEM VINDO AO BATALHA NAVAL\n\n");

    imprimirtabuleiro();

    printf("--------------------------------------------\n");

    return 0;
}
