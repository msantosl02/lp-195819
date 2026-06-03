#include <stdio.h>

int main() {
    int t, n;
    int fib[40];
    int calls[40];

    fib[0] = 0; fib[1] = 1;
    calls[0] = 0; calls[1] = 0;

    for (int i = 2; i <= 39; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        calls[i] = calls[i - 1] + calls[i - 2] + 2;
    }

    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        scanf("%d", &n);
        printf("fib(%d) = %d calls = %d\n", n, calls[n], fib[n]);
    }
    return 0;
}
