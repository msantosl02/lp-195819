/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 19/04/2026
Objetivo    : Ler 2 valores inteiros X e Y. A seguir, calcular e mostrar a soma dos números impares entre eles.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
int main() {
	int X, Y, soma = 0, maior, menor , i;
	scanf("%d %d", &X, &Y);
	if (X < Y) {
		maior = Y;
		menor = X;
	}
	else
	{
		maior = X;
		menor = Y;
	}
	for (i = menor + 1; i < maior; i++) {
	   if (i % 2 != 0) {
	       soma = soma + i;
	   } 
	}
	
	printf("%d\n", soma);
	
	return 0;
}
