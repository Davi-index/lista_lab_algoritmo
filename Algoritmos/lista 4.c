#include <stdio.h>

void calcularparidade(int num) {
    if(num % 2 == 0){
        printf("o numero %d e par\n", num);
    } else {
        printf("o Numero %d e impar\n", num);
    }
}

int main() {
    int num;
printf("Digite um numero: ");
scanf("%d", &num);
    calcularparidade(num);
    return 0;
}