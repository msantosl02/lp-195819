/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 23/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int sobrevivente(int n, int m) {
    int r = 0;
    for (int i = 2; i < n; i++) {
        r = (r + m) % i;
    }
    return r;
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int m = 1;
        
        while (sobrevivente(n, m) != 11) {
            m++;
        }
        
        printf("%d\n", m);
    }

    return 0;
}
