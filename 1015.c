/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Ler 4 valores x1, y1, x2, y2 e calcular a distância entre eles, mostrando 4 casas decimais.
Aprendizado : Como calcular a distância entre dois pontos em C.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, distancia;
	
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f\n", distancia);

    return 0;
}
