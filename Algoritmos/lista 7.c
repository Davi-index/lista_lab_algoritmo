#include <stdio.h>

int main() {
    // 1. Exibe o nome da comida favorita
    printf("Minha comida favorita: Pizza\n\n");

    // 2. Lê dois números inteiros e exibe a multiplicação entre eles
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Multiplicacao: %d\n\n", n1 * n2);

    // 3. Lê um número inteiro e informa se é par ou ímpar
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("O numero %d e par\n\n", numero);
    else
        printf("O numero %d e impar\n\n", numero);

    // 4. Lê dois números inteiros e mostra qual é o maior (ou se são iguais)
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d e maior que %d\n\n", a, b);
    else if (b > a)
        printf("%d e maior que %d\n\n", b, a);
    else
        printf("Os numeros sao iguais\n\n");

    // 5. Lê um número inteiro e mostra a tabuada desse número (1 a 10)
    int tab;
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &tab);
    printf("Tabuada de %d:\n", tab);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", tab, i, tab * i);
    }
    printf("\n");

    // 6. Lê 3 notas, calcula a média e informa se foi aprovado (média >= 7)
    float n1, n2, n3, media;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);
    if (media >= 7)
        printf("Aluno aprovado!\n\n");
    else
        printf("Aluno reprovado.\n\n");

    // 7. Lê o nome do usuário e exibe mensagem de boas-vindas
    char nome[100];
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome); // Lê até a quebra de linha
    printf("Bem-vindo(a), %s!\n\n", nome);

    // 8. Lê um caractere e exibe entre colchetes
    char simbolo;
    printf("Digite um simbolo qualquer: ");
    scanf(" %c", &simbolo);
    printf("Simbolo entre colchetes: [%c]\n\n", simbolo);

    // 9. Lê um símbolo especial, um número e uma letra, e exibe como senha
    char simb, letra;
    int digito;
    printf("Digite um simbolo especial: ");
    scanf(" %c", &simb);
    printf("Digite um numero: ");
    scanf("%d", &digito);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("Sua senha e: %c%d%c\n", simb, digito, letra);

    return 0;
}