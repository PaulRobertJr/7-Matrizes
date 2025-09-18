#include <stdio.h>

int main() {
    int M[2][3], i, j, num, encontrado = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &num);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (M[i][j] == num) {
                printf("\nNumero encontrado na posicao M[%d][%d]\n", i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("\nNumero nao encontrado!\n");
    }

    return 0;
}