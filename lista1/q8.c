/*
Resposta:
Se o ponteiro px aponta para a variável x, podemos acessar e modificar o valor de x usando o ponteiro.
Para dividir x por 3 sem usar diretamente x, usamos a expressão: *px = *px / 3;
Logo baixo está um exemplo em código:
*/

#include <stdio.h>

int main() {
    int x = 12;
    int *px = &x;

    // Divide x por 3 usando apenas o ponteiro px
    *px = *px / 3;

    printf("Novo valor de x: %d\n", x); // Saída: Novo valor de x: 4

    return 0;
}