#include <stdio.h>

int main() {
    int N, i, j, camada, valor;
    
    while(scanf("%d", &N) && N != 0) {
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                
                int min_i = i < N - 1 - i ? i : N - 1 - i;
                int min_j = j < N - 1 - j ? j : N - 1 - j;
                valor = (min_i < min_j ? min_i : min_j) + 1;
                
                if(j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
