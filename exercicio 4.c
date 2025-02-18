#include <stdio.h>

int main() {
    int num1, num2;
    
    // Solicita e lê dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Calcula o dobro do primeiro e o triplo do segundo
    int dobro_num1 = num1 * 2;
    int triplo_num2 = num2 * 3;
    
    // Exibe os resultados
    printf("O dobro do primeiro número é: %d\n", dobro_num1);
    printf("O triplo do segundo número é: %d\n", triplo_num2);
    
    return 0;
}