#include <stdio.h>

// Função que incrementa usando ponteiro (altera diretamente a variável)
void Mais(int *num) {
    (*num)++;
}

// Função que incrementa sem ponteiro (retorna o novo valor)
int Incrementa(int num) {
    return num + 1;
}

int main() {
    int valor;
    int resultadoIncrementa;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    Mais(&valor);  // Incrementa diretamente
    printf("Resultado apos Mais: %d\n", valor);

    resultadoIncrementa = Incrementa(valor);  // Recebe cópia e retorna novo valor
    printf("Resultado apos Incrementa: %d\n", resultadoIncrementa);

    return 0;
}