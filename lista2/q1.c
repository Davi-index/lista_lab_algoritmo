#include <stdio.h>
#include <string.h>

typedef struct {
    char tipo[50];
    float peso;
    int comprimento;
} Peixe;

int main() {
    Peixe peixe1;
    Peixe *pPeixe; // Ponteiro para Peixe

    pPeixe = &peixe1; // Aponta para peixe1

    strcpy(pPeixe->tipo, "Tucunare");
    pPeixe->peso = 1.2;
    pPeixe->comprimento = 30;

    printf("Tipo: %s\nPeso: %.2f kg\nComprimento: %d cm\n", pPeixe->tipo, pPeixe->peso, pPeixe->comprimento);
    return 0;
}