#include <stdio.h>

int main() {
    int M[4][5], V[4], i, j, menor;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        menor = M[i][0];
        for (j = 1; j < 5; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
            }
        }
        V[i] = menor;
    }

    for (i = 0; i < 4; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
