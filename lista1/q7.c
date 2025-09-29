#include <stdio.h>
// cria uma função vazia com os valores crescentes
void imprime_crescente(int *v1, int *v2) {
    int temp[10];
    // Copia os elementos dos dois vetores para temp
    for (int i = 0; i < 5; i++) {
        temp[i] = *(v1 + i);
        temp[i + 5] = *(v2 + i);
    }
    // Ordena temp usando o tipo bubble sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (temp[j] > temp[j + 1]) {
                int aux = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = aux;
            }
        }
    }
    // Imprime os valores ordenados dentro do laço for
    for (int i = 0; i < 10; i++) {
        printf("%d", temp[i]);
        if (i < 9) printf(", ");
    }
    printf("\n");
}

int main() {
    int vetor1[5] = {2, 5, 9, 8, 3};
    int vetor2[5] = {7, 4, 1, 10, 6};
    imprime_crescente(vetor1, vetor2);
    return 0;

}


