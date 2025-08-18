#include <stdio.h>

void maiormenor(int num1, int num2) {
    if(num1 > num2){
        printf("o numero %d e maior\n", num1);
    } else if(num2 > num1){
        printf("o Numero %d e maior\n", num2);
    }
}

int main() {
    int num1, num2;
printf("Digite dois numeros: ");
scanf("%d %d", &num1, &num2);
    maiormenor(num1, num2);
    return 0;
}