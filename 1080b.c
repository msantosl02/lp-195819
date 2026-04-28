/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080b
Data        : 17/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
int main() 
{
	int X[100] , i , maior , ps;
	for(i = 0; i < 100; i++) {
	    scanf("%d", &X[i]);
	    
	    if(i==0){
	        maior = X[i];
	        ps = i;
	    } else {
	        if(X[i] >= maior){
	            maior = X[i];
	            ps = i;
	        }
	    }
	}
    
    printf("%d\n", maior);
    printf("%d\n", ps + 1);
    
    return 0;
}    
