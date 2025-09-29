#include <stdio.h>

int main()
{
    int M[4][4];
    int i, j, soma = 0;

       printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz com elementos marcados:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if ((i == j) || (i + j == 3))
            {
                printf("x\t");
                soma += M[i][j];
            }
            else
            {
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("\nSoma dos elementos marcados com 'x': %d\n", soma);

    return 0;
}