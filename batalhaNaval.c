#include <stdio.h>

int main() {
    // Definicao do tamanho do tabuleiro 5x5
    const int LINHAS = 5;
    const int COLUNAS = 5;
    
    // Matriz que representa o tabuleiro (0 = agua, 1 = navio)
    int tabuleiro[LINHAS][COLUNAS];
    
    // Inicializa o tabuleiro com agua (zeros)
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    printf("=== SISTEMA DE POSICIONAMENTO DE NAVIOS 5x5 ===\n");
    printf("Tamanho do tabuleiro: %dx%d\n\n", LINHAS, COLUNAS);
    
    // Navio 1 - Posicionado verticalmente (tamanho 3)
    printf("NAVIO 1 - VERTICAL (tamanho 3):\n");
    int navio1_x = 1;  // Coordenada X inicial
    int navio1_y = 1;  // Coordenada Y inicial
    int tamanho_navio1 = 3;
    
    // Posiciona o navio verticalmente
    for(int i = 0; i < tamanho_navio1; i++) {
        int linha = navio1_y + i;
        int coluna = navio1_x;
        if(linha < LINHAS && coluna < COLUNAS) {
            tabuleiro[linha][coluna] = 1;
            printf("Parte %d: (%d, %d)\n", i+1, coluna, linha);
        }
    }
    printf("\n");
    
    // Navio 2 - Posicionado horizontalmente (tamanho 2)
    printf("NAVIO 2 - HORIZONTAL (tamanho 2):\n");
    int navio2_x = 3;  // Coordenada X inicial
    int navio2_y = 3;  // Coordenada Y inicial
    int tamanho_navio2 = 2;
    
    // Posiciona o navio horizontalmente
    for(int i = 0; i < tamanho_navio2; i++) {
        int linha = navio2_y;
        int coluna = navio2_x + i;
        if(linha < LINHAS && coluna < COLUNAS) {
            tabuleiro[linha][coluna] = 1;
            printf("Parte %d: (%d, %d)\n", i+1, coluna, linha);
        }
    }
    printf("\n");
    
    // Exibe o tabuleiro completo com os navios posicionados
    printf("TABULEIRO COMPLETO 5x5:\n");
    printf("   ");
    for(int j = 0; j < COLUNAS; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for(int i = 0; i < LINHAS; i++) {
        printf("%d: ", i);
        for(int j = 0; j < COLUNAS; j++) {
            if(tabuleiro[i][j] == 1) {
                printf("N ");  // N representa navio
            } else {
                printf(". ");  // . representa agua
            }
        }
        printf("\n");
    }
    printf("\n");
    
    // Resumo das coordenadas dos navios
    printf("RESUMO DAS COORDENADAS:\n");
    printf("Navio 1 (Vertical): ");
    for(int i = 0; i < tamanho_navio1; i++) {
        printf("(%d, %d) ", navio1_x, navio1_y + i);
    }
    printf("\n");
    
    printf("Navio 2 (Horizontal): ");
    for(int i = 0; i < tamanho_navio2; i++) {
        printf("(%d, %d) ", navio2_x + i, navio2_y);
    }
    printf("\n");
    
    printf("\n=== POSICIONAMENTO CONCLUIDO ===\n");
    
    return 0;
}
