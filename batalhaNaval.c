#include <stdio.h>

int main() {

    // 1. Criando o Tabuleiro 10x10 e inicializando com 0 (água)
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Tamanho dos navios
    int tamanhoNavio = 3;

    // 3. Navio horizontal (3 posições)
    // Exemplo: começa na linha 2, coluna 4
    int navioHorizontal[3] = {3, 3, 3};
    int linhaH = 2;
    int colunaH = 4;

    // Validação simples
    if (colunaH + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    // 4. Navio vertical (3 posições)
    // Exemplo: começa na linha 5, coluna 7
    int navioVertical[3] = {3, 3, 3};
    int linhaV = 5;
    int colunaV = 7;

    // Validação simples
    if (linhaV + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    // 5. Exibir o tabuleiro na tela
    printf("\n=== TABULEIRO ===\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
