#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j, leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, resposta;
	char V[101];

	if (scanf("%d", &n) != 1) return 0;

	for(i = 0; i < n; i++) {
		scanf("%s", V);
		resposta = 0;

		for(j = 0; j < strlen(V); j++) {
			resposta += leds[V[j] - '0'];
		}
		printf("%d leds\n", resposta);
	}

	return 0;
}
