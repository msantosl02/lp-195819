/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 21/05/2026
Objetivo    : Receber valores e com base neles calcular a duração de um jogo.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    
 int hi,hf,tempo;
 
scanf("%d %d",&hi,&hf);

tempo=24-hi+hf;
  
 if (tempo >24)
 printf("O JOGO DUROU %d HORA(S)\n",tempo-24);
 else
 printf("O JOGO DUROU %d HORA(S)\n",tempo);

    return 0;
}
