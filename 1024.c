
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
