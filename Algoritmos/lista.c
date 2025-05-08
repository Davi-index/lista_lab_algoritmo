#include <stdio.h>

// Função para calcular a média
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

// não esqueci o "float" dessa vez
int main() {
    float nota1, nota2, nota3, media;

// Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
// Validação da nota
    if (nota1 < 0 || nota1 > 10) {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10) {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    if (nota3 < 0 || nota3 > 10) {
        printf("Nota inválida. Insira um valor entre 0 e 10.\n");
        return 1;
    }

// Cálculo da média
    media = calcularMedia(nota1, nota2, nota3);

// Estrutura condicional para verificar a situação do estudante e retornar a média
    printf("Media: %.2f\n", media);
    if (media >= 7.0) {
        printf("Estudante aprovado.\n");
    } else if (media >= 5.0) {
        printf("Estudante em recuperacao.\n");
    } else {
        printf("Estudante reprovado.\n");
    }

    return 0;
}

                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//



                                                
//Davi Alves Maia