#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Valor do ponteiro e : %d\n", *ptr);
    printf("Endereço do ponteiro e : %p\n", (void*)ptr);

    return 0;
}