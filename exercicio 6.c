#include <stdio.h>

int main() {
    int idade, diasDeVida;

    // Solicita a idade do usuário
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Calcula o número aproximado de dias de vida
    diasDeVida = idade * 365;

    // Informa ao usuário que o resultado é aproximado
    printf("Você já viveu aproximadamente %d dias.\n", diasDeVida);
    printf("Nota: Este valor é aproximado e não considera anos bissextos.\n");

    return 0;
}