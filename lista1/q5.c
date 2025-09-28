/*
Explicação de como o código vai funcionar:

int x=68, y;
Inicializa x com 68. y ainda não tem valor definido.

int *p;
Declara um ponteiro para inteiro.

p = &x;
p recebe o endereço de x.

y = *p + 200;
*p acessa o valor apontado por p, que é 68.
Então, y = 68 + 200 = 268.
*/
#include <stdio.h>

int main() {
    int x = 68, y;
    int *p;
    p = &x;
    y = *p + 200;

    printf("x = %d\n", x);
    printf("p = %p\n", (void*)p);
    printf("*p = %d\n", *p);
    printf("y = %d\n", y);

    return 0;
}