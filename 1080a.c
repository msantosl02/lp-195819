/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 17/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int valor, maior, posicao;
    
    maior = -1;
    posicao = 1;
    
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);
        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
