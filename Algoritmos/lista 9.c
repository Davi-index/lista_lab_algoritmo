/*#include <stdio.h>

int main() {
    int n, i;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_soma = arr[0];
    int soma_atual = arr[0];
    int inicio = 0, fim = 0, temp_inicio = 0;

    for (i = 1; i < n; i++) {
        if (soma_atual < 0) {
            soma_atual = arr[i];
            temp_inicio = i;
        } else {
            soma_atual += arr[i];
        }

        if (soma_atual > max_soma) {
            max_soma = soma_atual;
            inicio = temp_inicio;
            fim = i;
        }
    }

    printf("Maior soma: %d\n", max_soma);
    printf("Subarray: ");
    for (i = inicio; i <= fim; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} */

#include <stdio.h>

int main() {
    int n, i, j, max_count = 0, elemento_mais_frequente;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int array[n];
    printf("Digite os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            elemento_mais_frequente = array[i];
        }
    }

    printf("Elemento que aparece mais vezes: %d\n", elemento_mais_frequente);
    printf("Quantidade de vezes: %d\n", max_count);

    return 0;
}