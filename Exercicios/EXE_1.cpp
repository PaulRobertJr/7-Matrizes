#include <stdio.h>

int main() {
    int M[2][3], i, j, soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            soma += M[i][j];
        }
    }

    printf("\nSoma de todos os elementos = %d\n", soma);

    return 0;
}