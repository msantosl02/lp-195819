/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 21/05/2026
Objetivo    : Receber valores e com base neles calcular a quantidade de litros para fazer uma viagem.
Aprendizado : Uso de %d\n%d
-------------------------------------------------------------------------- */
#include <stdio.h>
int main() {
	int tempo, velocidade, distancia;
	float litros;

	scanf("%d\n%d", &tempo, &velocidade);

	distancia = velocidade * tempo;
	litros = (float)distancia/12;

	printf("%.3lf\n", litros);

	return 0;
}
