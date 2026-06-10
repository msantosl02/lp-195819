#include <stdio.h>

int sobrevivente(int n, int m) {
    int r = 0;
    for (int i = 2; i < n; i++) {
        r = (r + m) % i;
    }
    return r;
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int m = 1;
        
        while (sobrevivente(n, m) != 11) {
            m++;
        }
        
        printf("%d\n", m);
    }

    return 0;
}
