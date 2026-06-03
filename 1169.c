/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 03/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int x;
    unsigned long long graos;
    unsigned long long kg;

    if (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);

            if (x == 64) {
                printf("1537228672809129 kg\n");
            } else {
                graos = (1ULL << x) - 1;
                
                kg = graos / 12 / 1000;

                printf("%llu kg\n", kg);
            }
        }
    }

    return 0;
}
