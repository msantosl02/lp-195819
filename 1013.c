/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 12/04/2026
Objetivo    : Fazer um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
-------------------------------------------------------------------------- */

#include "stdio.h"

int main()
{
    
    int a , b , c , MaiorAB , maior;
    
    scanf("%d %d %d", &a, &b, &c);
    
    MaiorAB=(a+b+abs(a-b))/2;
    
    maior=(MaiorAB+c+abs(MaiorAB-c))/2;
    
    printf("%d eh o maior\n", maior);
    
    return 0;
    
}
