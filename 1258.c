#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

int compara(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    int comp_cor = strcmp(c1->cor, c2->cor);
    if (comp_cor != 0) {
        return comp_cor;
    }

    if (c1->tamanho != c2->tamanho) {
        return c2->tamanho - c1->tamanho; 
    }

    return strcmp(c1->nome, c2->nome);
}

int main() {
    int n;
    int primeiro_caso = 1;
    Camiseta camisetas[65];

    while (scanf("%d", &n) && n != 0) {
        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", camisetas[i].nome);
            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
        }

        qsort(camisetas, n, sizeof(Camiseta), compara);

        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tamanho, camisetas[i].nome);
        }
    }

    return 0;
}
