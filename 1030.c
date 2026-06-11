/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int josephus(int n, int k) {
    int sobrevivente = 0;
    for (int i = 2; i <= n; ++i) {
        sobrevivente = (sobrevivente + k) % i;
    }
    return sobrevivente + 1;
}

int main() {
    int nc;
    if (scanf("%d", &nc) == 1) {
        for (int case_num = 1; case_num <= nc; ++case_num) {
            int n, k;
            if (scanf("%d %d", &n, &k) == 2) {
                printf("Case %d: %d\n", case_num, josephus(n, k));
            }
        }
    }
    return 0;
}
