/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Ler dois valores A e B e imprimir se B encaixa em A
Aprendizado : Uso do char, len, strlen, strcmp
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N, i, lenA, lenB;
    char A[1001], B[1001];

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%s %s", A, B);
        
        lenA = strlen(A);
        lenB = strlen(B);

        if(lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(&A[lenA - lenB], B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    return 0;
}
