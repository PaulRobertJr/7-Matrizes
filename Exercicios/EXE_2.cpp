#include <stdio.h>

int main() {
    int M[2][3], i, j;
    int produto = 1;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            produto *= M[i][j];
        }
    }

    printf("\nProduto de todos os elementos = %d\n", produto);

    return 0;
}