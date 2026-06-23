#include <stdio.h>

int main() {
    int N, M;
    int i, j;
    int tabuleiro[100][100];
    
    while(scanf("%d %d", &N, &M) != EOF) {
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                scanf("%d", &tabuleiro[i][j]);
            }
        }
        
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                if(tabuleiro[i][j] == 1) {
                    printf("9");
                } else {
                    int paes = 0;
                    if(i > 0 && tabuleiro[i-1][j] == 1) paes++;
                    if(i < N - 1 && tabuleiro[i+1][j] == 1) paes++;
                    if(j > 0 && tabuleiro[i][j-1] == 1) paes++;
                    if(j < M - 1 && tabuleiro[i][j+1] == 1) paes++;
                    printf("%d", paes);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
