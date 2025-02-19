// Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.
#include <stdio.h>

int main() {
    float num, cubo;
    
    printf("Digite um número: ");
    scanf("%f", &num);
    
    cubo = num * num * num;
    
    printf("O cubo de %.2f é %.2f\n", num, cubo);
    
    return 0;
}