#include <stdio.h>

int main() {
    int M[5][5];
    int i, j;
    int menor, maior, soma = 0;
    float media;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    menor = maior = M[0][0];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int valor = M[i][j];
            soma += valor;

            if (valor < menor) {
                menor = valor;
            }
            if (valor > maior) {
                maior = valor;
            }
        }
    }

    media = soma / 25.0; 

    printf("\nMenor valor da matriz: %d\n", menor);
    printf("Maior valor da matriz: %d\n", maior);
    printf("Soma dos valores: %d\n", soma);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
