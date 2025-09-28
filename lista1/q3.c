/*
ch acessa diretamente a variável.
indica acessa o valor de ch indiretamente, via ponteiro.
Não é bom usar apenas indica, pois isso retorna o endereço da memória, não o valor armazenado.

exemplo abaixo:
*/
#include <stdio.h>

int main() {
    char ch = 'A';
    char *indica = &ch;

    // Referenciando ch diretamente
    printf("Valor de ch: %c\n", ch);

    // Referenciando ch através do ponteiro
    printf("Valor de ch via ponteiro: %c\n", *indica);

    return 0;
}