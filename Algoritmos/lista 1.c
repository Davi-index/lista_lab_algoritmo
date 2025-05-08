#include <stdio.h>

int main() {
    // 1º Exiba o nome da comida favorita
    char comida;
    printf("digite o nome da sua comida favorita ");
    scanf(" %c", &comida);
    printf("Minha comida favorita é: \n", comida);

    // 2º Multiplicação entre dois números inteiros
    int n1, n2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("A multiplicação é: %d\n", n1 * n2);

    // 3º Verificar se um número é par ou ímpar
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    // 4º Mostrar o maior entre dois números inteiros
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("O maior número é: %d\n", a);
    } else if (b > a) {
        printf("O maior número é: %d\n", b);
    } else {
        printf("Os números são iguais.\n");
    }

    // 5º Tabuada de um número
    int numero;
    printf("Digite um número inteiro para ver sua tabuada: ");
    scanf("%d", &numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero* i);
    }

    // 6º Média de 3 notas e aprovação
    float nota1, nota2, nota3, media;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7) {
        printf("Aluno aprovado com média %.2f.\n", media);
    } else {
        printf("Aluno reprovado com média %.2f.\n", media);
    }

    // 7º Mensagem de boas-vindas
    char nome[50];
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    printf("Bem-vindo(a), %s!\n", nome);

    // 8º Exibir caractere entre colchetes
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("Caractere entre colchetes: [%c]\n", caractere);

    // 9º Gerar uma senha com símbolo, número e letra
    char simbolo, letra;
    int numero;
    printf("Digite um símbolo, um número e uma letra: ");
    scanf(" %c %d %c", &simbolo, &numero, &letra);
    printf("Sua senha é: %c%d%c\n", simbolo, numero, letra);

    return 0;
}

                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//



                                                
//Davi Alves Maia