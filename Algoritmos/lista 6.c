#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int n) {
    if (n < 2) return 0; // Números menores que 2 não são primos
    for (int i = 2; i * i <= n; i++) { // Testa divisores até a raiz quadrada de n
        if (n % i == 0)
            return 0; // Encontrou um divisor, não é primo
    }
    return 1; // Não encontrou divisores, é primo
}

// Função para exibir todos os primos menores que n
void exibir_primos_menores(int n) {
    printf("Números primos menores que %d:\n", n);
    for (int i = 2; i < n; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Função para ler e validar a entrada do usuário
int ler_numero_positivo() {
    int numero;
    do {
        printf("Digite um número inteiro positivo maior que 1: ");
        scanf("%d", &numero);
        if (numero < 2) {
            printf("Entrada inválida! Tente novamente.\n");
        }
    } while (numero < 2);
    return numero;
}

int main() {
    int numero = ler_numero_positivo();
    exibir_primos_menores(numero);
    return 0;
}