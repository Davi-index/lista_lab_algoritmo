#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    // Solicita ao usuário a entrada de um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Apresenta o antecessor e o sucessor
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}