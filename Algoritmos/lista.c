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

void verificarNumeroPrimo()
{
    int numero;

    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero))
    {
        printf("O número %d é primo.\n", numero);
    }
    else
    {
        printf("O número %d não é primo.\n", numero);
    }
}