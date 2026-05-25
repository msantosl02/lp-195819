/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 25/05/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int qtd_par = 0, qtd_impar = 0;
    int num;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[qtd_par] = num;
            qtd_par++;
            if (qtd_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0;
            }
        } else {
            impar[qtd_impar] = num;
            qtd_impar++;
            if (qtd_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0;
            }
        }
    }

    for (int j = 0; j < qtd_impar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < qtd_par; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
