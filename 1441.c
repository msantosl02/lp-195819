/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 03/05/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int h;
    while (scanf("%d", &h) == 1 && h != 0) {
        int max = h;
        while (h > 1) {
            if (h % 2 == 0) {
                h = h / 2;
            } else {
                h = 3 * h + 1;
            }
            if (h > max) {
                max = h;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
