/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    
    int X[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    
    int menor = X[0];
    int posicao = 0;
    
    for(i = 1; i < N; i++) {
        if(X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}
