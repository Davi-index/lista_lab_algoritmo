#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converte para Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    // Exibe o resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}