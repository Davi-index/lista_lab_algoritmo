#include <stdio.h>
#define LIN 3
#define COL 4

int main()
{
    int matriz[LIN][COL], matriz2[LIN][COL];
    int i, j, contador = 1;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            matriz[i][j] = contador;
            contador++;
        }
    }
contador=1;
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            matriz2[i][j] = contador;
            contador++;
        }
    }
    printf("Soma das matrizes:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", matriz[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
