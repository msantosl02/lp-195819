/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 14/05/2026
Objetivo    : Ler um valor inteiro N que é o tamanho da matriz que deve ser impressa.
Aprendizado : Uso do comando while.
-------------------------------------------------------------------------- */
#include <stdio.h>
int main () {
	int N, i, j;

	while (scanf("%d", &N) != EOF) {
		for(i=0; i < N; i++) {
			for( j=0; j< N; j++) {
				if(i + j == N - 1) {
					printf("2");
				}
				else if (i == j) {
					printf("1");
				}
				else {
					printf("3");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
