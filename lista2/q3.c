#include <stdio.h>

int main()
{
    int *ptr; // ponteiro recém-criado, não inicializado

    printf("Endereço armazenado em ptr: %p\n", (void *)ptr);
    printf("Conteúdo apontado por ptr: %d\n", *ptr); // comportamento indefinido

    return 0;
}