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
