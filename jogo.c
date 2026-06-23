#include <stdio.h>
#include <stdlib.h>

#define TAM 9

void imprimirTabuleiro(int matriz[TAM][TAM]) {
    printf("\n    ");
    for (int j = 0; j < TAM; j++) printf("%d ", j + 1);
    printf("\n   -------------------\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d | ", i + 1);
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int tabuleiroCompleto(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] == 0) return 0; 
        }
    }
    return 1;
}

int main() {
    int tabuleiro[TAM][TAM];
    int original[TAM][TAM];
    FILE *arquivo;

    arquivo = fopen("input2.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo input2.txt!\n");
        printf("Certifique-se de que o arquivo está na mesma pasta do executável.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(arquivo)) != ']' && ch != EOF); 
    
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (fscanf(arquivo, "%d", &tabuleiro[i][j]) != 1) {
                printf("Erro ao ler os dados do tabuleiro.\n");
                fclose(arquivo);
                return 1;
            }
            original[i][j] = tabuleiro[i][j];
        }
    }
    fclose(arquivo);

    int linha, coluna, valor;

    while (1) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("=========================================\n");
        printf("          JOGO DO TABLEIRO 9x9           \n");
        printf("=========================================\n");
        printf("Preencha as posições vazias (.) com números.\n");

        imprimirTabuleiro(tabuleiro);

        if (tabuleiroCompleto(tabuleiro)) {
            printf("Parabéns! Você completou o tabuleiro!\n");
            break;
        }

        printf("Digite a linha (1-9), coluna (1-9) e o valor (1-9)\n");
        printf("Ou digite '0 0 0' para sair: ");
        
        if (scanf("%d %d %d", &linha, &coluna, &valor) != 3) {
            printf("Entrada inválida! Pressione Enter para tentar novamente.");
            while (getchar() != '\n');
            getchar();
            continue;
        }

        if (linha == 0 && coluna == 0 && valor == 0) {
            printf("Jogo encerrado pelo jogador. Até a próxima!\n");
            break;
        }

        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || valor < 1 || valor > 9) {
            printf("\n[ERRO] Valores fora dos limites (1 a 9)! Pressione Enter...");
            while (getchar() != '\n'); getchar();
            continue;
        }

        linha--; 
        coluna--;

        if (original[linha][coluna] != 0) {
            printf("\n[ERRO] A posição (%d, %d) já veio preenchida originalmente! Pressione Enter...", linha + 1, coluna + 1);
            while (getchar() != '\n'); getchar();
            continue;
        }

        tabuleiro[linha][coluna] = valor;
    }

    return 0;
}
