#include <stdio.h>

int main() {
    int arr[8];
    int i, j;
    int maior_soma, cont_soma;
    int inicio = 0, fim = 0, temp_inicio = 0;

    // Leitura dos 8 elementos
    for (i = 0; i < 8; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    maior_soma = arr[0];
    cont_soma = arr[0];

    for (i = 1; i < 8; i++) {
        if (cont_soma < 0) {
            cont_soma = arr[i];
            temp_inicio = i;
        } else {
            cont_soma += arr[i];
        }

        if (cont_soma > maior_soma) {
            maior_soma = cont_soma;
            inicio = temp_inicio;
            fim = i;
        }
    }

    printf("Maior soma: %d\n", maior_soma);
    printf("Subarray: ");
    for (i = inicio; i <= fim; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}