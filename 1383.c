#include <stdio.h>
#include <stdbool.h>

bool validarSudoku(int matriz[9][9]) {
	for (int i = 0; i < 9; i++) {
		int linha_check[10] = {0};
		int coluna_check[10] = {0};

		for (int j = 0; j < 9; j++) {
			int num_linha = matriz[i][j];
			int num_coluna = matriz[j][i];

			if (linha_check[num_linha] == 1 || coluna_check[num_coluna] == 1) {
				return false;
			}
			linha_check[num_linha] = 1;
			coluna_check[num_coluna] = 1;
		}
	}

	for (int R = 0; R < 9; R += 3) {
		for (int C = 0; C < 9; C += 3) {
			int bloco_check[10] = {0};

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					int num = matriz[R + i][C + j];
					if (bloco_check[num] == 1) {
						return false;
					}
					bloco_check[num] = 1;
				}
			}
		}
	}

	return true;
}

int main() {
	int n;
	if (scanf("%d", &n) != 1) return 0;

	for (int instancia = 1; instancia <= n; instancia++) {
		int matriz[9][9];

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				matriz[i][j] = 1;
			}
		}

		printf("Instancia %d\n", instancia);
		if (validarSudoku(matriz)) {
			printf("SIM\n\n");
		} else {
			printf("NAO\n\n");
		}
	}

	return 0;
}
