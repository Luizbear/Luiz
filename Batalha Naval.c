#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8 

void exibir_tabuleiro(char tabuleiro[N][N]) {
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void inicializar_tabuleiro(char tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = '~';
        }
    }
}

void posicionar_navios(char tabuleiro[N][N], int quantidade_navios) {
    srand(time(NULL));
    for (int i = 0; i < quantidade_navios; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (tabuleiro[x][y] == '~') {
            tabuleiro[x][y] = 'N';
        } else {
            i--;
        }
    }
}

void habilidade_especial(char tabuleiro[N][N], int x, int y) {
    printf("Habilidade especial ativada na posição (%d, %d):\n", x, y);
    for (int i = x - 1; i <= x + 1; i++) { 
        for (int j = y - 1; j <= y + 1; j++) {
            if (i >= 0 && i < N && j >= 0 && j < N) {
                if (tabuleiro[i][j] == 'N') {
                    tabuleiro[i][j] = 'X';
                } else {
                    tabuleiro[i][j] = '*';
                }
            }
        }
    }
    exibir_tabuleiro(tabuleiro);
}

int main() {
    char tabuleiro[N][N];
    int quantidade_navios = 5;

    inicializar_tabuleiro(tabuleiro);
    posicionar_navios(tabuleiro, quantidade_navios);
    exibir_tabuleiro(tabuleiro);

   
    habilidade_especial(tabuleiro, 3, 3);

    return 0;
}
