#include <stdio.h>

int main() {
    // Forma 1: Usando printf
    printf("Hello World\n");

    // Forma 2: Usando puts
    puts("Hello World");

    // Forma 3: Usando um loop for
    for (int i = 0; i < 1; i++) {
        printf("Hello World\n");
    }

    // Forma 4: Usando um loop while
    int count = 0;
    while (count < 1) {
        printf("Hello World\n");
        count++;
    }

    return 0;
}