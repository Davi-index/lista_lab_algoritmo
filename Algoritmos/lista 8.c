#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para validar nota entre 0 e 10
int nota_valida(float nota) {
    return nota >= 0 && nota <= 10;
}

// Exercício 1: Calcula média simples
void media_estudante() {
    float n1, n2, n3, media;
    printf("Digite as 3 notas do estudante (0 a 10):\n");
    for (int i = 1; i <= 3; i++) {
        do {
            printf("Nota %d: ", i);
            scanf("%f", (i == 1) ? &n1 : (i == 2) ? &n2 : &n3);
            if (!nota_valida((i == 1) ? n1 : (i == 2) ? n2 : n3))
                printf("Nota invalida! Digite novamente.\n");
        } while (!nota_valida((i == 1) ? n1 : (i == 2) ? n2 : n3));
    }
    media = (n1 + n2 + n3) / 3;
    printf("Media do estudante: %.2f\n", media);
}

// Exercício 2: Tabuada de n até m vezes
void tabuada() {
    int n, m, repetir;
    do {
        printf("Digite o numero para a tabuada: ");
        scanf("%d", &n);
        printf("Digite ate qual multiplicador (m): ");
        scanf("%d", &m);
        for (int i = 1; i <= m; i++)
            printf("%d x %d = %d\n", n, i, n * i);
        printf("Deseja calcular outra tabuada? (1-Sim, 0-Nao): ");
        scanf("%d", &repetir);
    } while (repetir == 1);
}

// Exercício 3: Verifica se número é primo
void verifica_primo() {
    int num, primo = 1;
    printf("Digite um numero para verificar se eh primo: ");
    scanf("%d", &num);
    if (num <= 1) primo = 0;
    for (int i = 2; i <= num / 2 && primo; i++)
        if (num % i == 0) primo = 0;
    if (primo)
        printf("%d eh primo.\n", num);
    else
        printf("%d nao eh primo.\n", num);
}

// Função auxiliar para contar vogais em uma frase
int conta_vogais(const char *frase) {
    int count = 0;
    for (int i = 0; frase[i]; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

// Exercício 4: Conta vogais em frases até digitar "fim"
void conta_vogais_frases() {
    char frase[201];
    printf("Digite frases (digite 'fim' para encerrar):\n");
    while (1) {
        printf("Frase: ");
        getchar(); // Limpa buffer
        fgets(frase, 200, stdin);
        frase[strcspn(frase, "\n")] = 0; // Remove \n
        if (strcmp(frase, "fim") == 0)
            break;
        printf("Numero de vogais: %d\n", conta_vogais(frase));
    }
}

// Exercício 5: Média ponderada com pesos 2, 3, 4
void media_ponderada() {
    float n1, n2, n3, media;
    int pesos[3] = {2, 3, 4};
    printf("Digite as 3 notas do estudante (0 a 10):\n");
    for (int i = 1; i <= 3; i++) {
        do {
            printf("Nota %d: ", i);
            scanf("%f", (i == 1) ? &n1 : (i == 2) ? &n2 : &n3);
            if (!nota_valida((i == 1) ? n1 : (i == 2) ? n2 : n3))
                printf("Nota invalida! Digite novamente.\n");
        } while (!nota_valida((i == 1) ? n1 : (i == 2) ? n2 : n3));
    }
    media = (n1 * pesos[0] + n2 * pesos[1] + n3 * pesos[2]) / (pesos[0] + pesos[1] + pesos[2]);
    printf("Media ponderada: %.2f\n", media);
}

// Exercício 6: Classificação de triângulo
void classifica_triangulo() {
    float a, b, c;
    printf("Digite os lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Triangulo Equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Triangulo Isosceles\n");
        else
            printf("Triangulo Escaleno\n");
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }
}

// Exercício 7: Conversão de temperaturas
void conversor_temperatura() {
    char opcao[10];
    float temp, convertido;
    while (1) {
        printf("Digite 'C' para Celsius->Fahrenheit, 'F' para Fahrenheit->Celsius ou 'sair' para encerrar: ");
        scanf("%s", opcao);
        if (strcmp(opcao, "sair") == 0)
            break;
        if (strcmp(opcao, "C") == 0 || strcmp(opcao, "c") == 0) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            convertido = temp * 9 / 5 + 32;
            printf("Em Fahrenheit: %.2f\n", convertido);
        } else if (strcmp(opcao, "F") == 0 || strcmp(opcao, "f") == 0) {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            convertido = (temp - 32) * 5 / 9;
            printf("Em Celsius: %.2f\n", convertido);
        } else {
            printf("Opcao invalida.\n");
        }
    }
}

// Menu principal para testar os exercícios
int main() {
    int escolha;
    do {
        printf("\n--- Lista de Exercicios ---\n");
        printf("1. Media estudante\n");
        printf("2. Tabuada\n");
        printf("3. Numero primo\n");
        printf("4. Contar vogais em frases\n");
        printf("5. Media ponderada\n");
        printf("6. Classificacao de triangulo\n");
        printf("7. Conversor de temperatura\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1: media_estudante(); break;
            case 2: tabuada(); break;
            case 3: verifica_primo(); break;
            case 4: conta_vogais_frases(); break;
            case 5: media_ponderada(); break;
            case 6: classifica_triangulo(); break;
            case 7: conversor_temperatura(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (escolha != 0);
    return 0;
}