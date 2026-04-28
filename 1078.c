/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Ler e imprimir a tabuada de um determinado valor N de um número inteiro.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int main() 
{
	int N, i;

	scanf("%d", &N);

	if(N>2 && N< 1000) {
		for(i = 1; i<= 10; i++) {
			printf("%d x %d = %d\n", i, N, i * N);
		}
	}
	return 0;
}
