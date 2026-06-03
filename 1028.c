/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 03/05/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, f1, f2;
    if (scanf("%d", &n) != 1) return 0;
    while (n--) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }
    return 0;
}
