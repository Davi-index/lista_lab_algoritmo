#include <stdio.h>

int main(void) {
    char c = 'A';      // variável inicializada com 'A'
    char *p = &c;      // ponteiro que aponta para c

    *p = 'B';          // modifica o conteúdo de c através do ponteiro

    printf("conteudo da variavel: %c\n", c);
    printf("conteudo apontado pelo ponteiro: %c\n", *p);

    return 0;
}