#include <stdio.h>

// Função para calcular a média
float calcularMedia(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}

// não esqueci o "float" dessa vez
int main()
{
    float nota1, nota2, nota3, media;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    // Validação da nota
    if (nota1 < 0 || nota1 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    if (nota3 < 0 || nota3 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    // Cálculo da média
    media = calcularMedia(nota1, nota2, nota3);

    // Estrutura condicional para verificar a situação do estudante e retornar a média
    printf("Media: %.2f\n", media);
    if (media >= 7.0)
    {
        printf("Estudante aprovado.\n");
    }
    else if (media >= 5.0)
    {
        printf("Estudante em recuperacao.\n");
    }
    else
    {
        printf("Estudante reprovado.\n");
    }

    return 0;
}

                                                    /* GATINHO DANDO JÓIA */


                                                 
/*
2º Crie um programa que gere a tabuada de um número n até m vezes, onde m é
informado pelo usuário. O programa deve perguntar ao usuário se deseja
calcular outra tabuada ao final.
*/
#include <stdbool.h>
#include <stdio.h>
// Função para gerar a tabuada
void gerarTabuada(int numero, int vezes)
{
    for (int i = 1; i <= vezes; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
void calcularTabuada()
{
    int numero, vezes;
    char resposta;
    bool continuar = true;
// Loop para continuar perguntando ao usuário se deseja calcular outra tabuada
    while (continuar)
    {
        printf("Digite o número para gerar a tabuada: ");
        scanf("%d", &numero);

        printf("Digite até qual número deseja calcular a tabuada: ");
        scanf("%d", &vezes);
// Validação do número de vezes
        if (vezes < 1)
        {
            printf("O valor de vezes deve ser maior ou igual a 1.\n");
            continue;
        }

        gerarTabuada(numero, vezes);

        printf("Deseja calcular outra tabuada? (s/n): ");
        scanf(" %c", &resposta);
//verifica se o usuário quer continuar
        if (resposta != 's' && resposta != 'S')
        {
            continuar = false;
        }
    }
}


                                                    /* GATINHO DANDO JÓIA */
/*
3º Crie um programa que verifique se um número fornecido pelo usuário é
primo.
*/
#include <stdbool.h>
#include <stdio.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Função para solicitar o número e verificar se é primo
// Essa função não tem retorno, apenas imprime o resultado
void verificarNumeroPrimo()
{
    int numero;
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &numero);
// Validação do número
    if (numero < 0)
    {
        printf("Número inválido. Insira um valor maior ou igual a 0.\n");
        return;
    }
// Chama a função para verificar se o número é primo
// e imprime o resultado
    if (ehPrimo(numero))
    {
        printf("O número %d é primo.\n", numero);
    }
    else
    {
        printf("O número %d não é primo.\n", numero);
    }
}

                                                    /* GATINHO DANDO JÓIA */
/* 4º Crie um programa que leia frases do usuário até que ele digite "fim". Para
cada frase, informe o número de vogais presentes.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para contar o número de vogais em uma frase
int contarVogais(const char *frase)
{
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++)
    {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            contador++;
        }
    }
    return contador;
}

// Função para ler frases até que o usuário digite "fim"
void contarVogaisFrases()
{
    char frase[256];
    while (1)
    {
        printf("Digite uma frase (ou 'fim' para encerrar): ");
        fgets(frase, sizeof(frase), stdin);

        // Remove o caractere de nova linha, se presente
        frase[strcspn(frase, "\n")] = '\0';

        if (strcmp(frase, "fim") == 0)
        {
            break;
        }
// Chama a função para contar as vogais na frase
// e imprime o resultado
        int numeroVogais = contarVogais(frase);
        printf("A frase contém %d vogais.\n", numeroVogais);
    }
}

                                                    /* GATINHO DANDO JÓIA */
/*
5º Aproveite o código da questão 01 e adapte para que agora ele trabalhe
aplicando pesos às notas, exemplo: pesos (2, 3, 4)
*/
#include <stdio.h>
#include <stdbool.h>
// Função para calcular a média ponderada
float calcularMediaPonderada(float nota1, float nota2, float nota3, int peso1, int peso2, int peso3)
{
    return (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
}

int main()
{
    float nota1, nota2, nota3, media;
    int peso1 = 2, peso2 = 3, peso3 = 4;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if (nota1 < 0 || nota1 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }
// Validação da nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    if (nota3 < 0 || nota3 > 10)
    {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    // Cálculo da média ponderada
    media = calcularMediaPonderada(nota1, nota2, nota3, peso1, peso2, peso3);

    // Estrutura condicional para verificar a situação do estudante e retornar a média
    printf("Media Ponderada: %.2f\n", media);
    if (media >= 7.0)
    {
        printf("Estudante aprovado.\n");
    }
    else if (media >= 5.0)
    {
        printf("Estudante em recuperacao.\n");
    }
    else
    {
        printf("Estudante reprovado.\n");
    }

    return 0;
}

                                                    /* GATINHO DANDO JÓIA */
/*
6º Crie um programa que receba o valor dos lados de um triângulo fornecidos
pelo usuário e retorna qual a classificação desse triângulo(Equilátero, Isósceles
e Escaleno)
*/

#include <stdio.h>

// Função para classificar o triângulo
void classificarTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
    {
        printf("Os lados devem ser valores positivos.\n");
        return;
    }
// Verifica se os lados formam um triângulo
    // A soma de dois lados deve ser maior que o terceiro lado
    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1)
    {
        printf("Os valores fornecidos não formam um triângulo.\n");
        return;
    }
// Classificação do triângulo
    // Equilátero: todos os lados iguais
    // Isósceles: dois lados iguais
    // Escaleno: todos os lados diferentes
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("O triângulo é Equilátero.\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("O triângulo é Isósceles.\n");
    }
    else
    {
        printf("O triângulo é Escaleno.\n");
    }
}
// Função principal
int main()
{
    float lado1, lado2, lado3;

    // Entrada de dados
    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    // Chama a função para classificar o triângulo
    classificarTriangulo(lado1, lado2, lado3);

    return 0;
}
                                                    /* GATINHO DANDO JÓIA */
/*
7º Implemente um programa que permita ao usuário converter várias
temperaturas entre Celsius e Fahrenheit, escolhendo a direção da conversão em
cada iteração. O programa termina quando o usuário digita “sair”.
*/
#include <stdio.h>
#include <string.h>
void converterTemperaturas() {
    char entrada[16];
    float temperatura;
// Loop para continuar perguntando ao usuário se deseja converter temperaturas
    // até que o usuário digite "sair"
    while (1) {
        printf("Digite 'C' para Celsius->Fahrenheit, 'F' para Fahrenheit->Celsius ou 'sair' para encerrar: ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Remove o '\n'
        if (strcmp(entrada, "sair") == 0) {
            break;
        }
// Verifica se a entrada é válida
        // Converte Celsius para Fahrenheit
        // ou Fahrenheit para Celsius
        // ou encerra o programa dependend da entrada que for escrita
        if (strcmp(entrada, "C") == 0 || strcmp(entrada, "c") == 0) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            getchar(); // Limpa o '\n' do buffer
            float fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperatura, fahrenheit);
        } else if (strcmp(entrada, "F") == 0 || strcmp(entrada, "f") == 0) {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            getchar(); // Limpa o '\n' do buffer
            float celsius = (temperatura - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperatura, celsius);
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }
}
int main() {
    converterTemperaturas();
    return 0;
}
                                                    /* GATINHO DANDO JÓIA */


                                                    //Davi Alvez Maia//