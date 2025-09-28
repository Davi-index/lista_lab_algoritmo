/*
Você deve passar o endereço de x (ou seja, px) para scanf:

Resumo
Errado: scanf("%d", *px); → passa o valor de x, não o endereço.
Certo: scanf("%d", px); ou scanf("%d", &x); → passa o endereço de x.

código exemplificado a seguir:
*/
#include <stdio.h>

int main() {
    int x;
    int *px = &x;

    printf("Digite um número inteiro: ");
    scanf("%d", px); // Correto: passando o endereço de x

    printf("Você digitou: %d\n", x);

    return 0;
}