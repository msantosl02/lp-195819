/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 08/05/2026
Objetivo    : Alternar letras do texto para criptografá-lo.
Aprendizado : Uso de stringlen, while e outros comandos.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void resolver() {
    char s[1001];
    scanf(" %[^\n]", s);
    int tam = strlen(s);

    for (int i = 0; i < tam; i++) {
        if (isalpha(s[i])) {
            s[i] = s[i] + 3;
        }
    }

    for (int i = 0; i < tam / 2; i++) {
        char temp = s[i];
        s[i] = s[tam - 1 - i];
        s[tam - 1 - i] = temp;
    }

    for (int i = tam / 2; i < tam; i++) {
        s[i] = s[i] - 1;
    }

    printf("%s\n", s);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        while (n--) {
            resolver();
        }
    }
    return 0;
}
