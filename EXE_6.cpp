#include <stdio.h>

int main() {
    int M[5][5];
    int i, j, soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        soma += M[i][2];
    }

    printf("\nSoma dos elementos marcados com 'x': %d\n", soma);

    return 0;
}
