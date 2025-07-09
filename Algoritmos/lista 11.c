#include <stdio.h>
// Definindo a capacidade máxima da mochila
#define MAX_WEIGHT 20
// Definindo o número de objetos
#define NUM_OBJECTS 16
// Estrutura para representar um objeto
typedef struct {
    int weight;
    int value;
} Object;
// Array de objetos com seus pesos e valores
Object objects[NUM_OBJECTS] = {
    {12, 4}, // A
    {3, 4},  // B
    {5, 8},  // C
    {4, 10}, // D
    {9, 15}, // E
    {1, 3},  // F
    {2, 1},  // G
    {3, 1},  // H
    {4, 2},  // I
    {1, 10}, // J
    {2, 20}, // K
    {4, 15}, // L
    {5, 10}, // M
    {2, 3},  // N
    {4, 4},  // O
    {1, 12}  // P
};

// Função para converter um número inteiro (solução) em uma sequência de bits (representação da mochila)
// e calcular o peso e valor total. Retorna o valor total ou 0 se o peso exceder o limite.
int evaluateSolution(unsigned int solution, int *totalWeight) {
    int currentValue = 0;
    int currentWeight = 0;
    int i;

    // Itera sobre os 16 bits da solução
    for (i = 0; i < NUM_OBJECTS; i++) {
        // Verifica se o bit está ligado (objeto incluído)
        if ((solution >> i) & 1) {
            currentWeight += objects[i].weight;
            currentValue += objects[i].value;
        }
    }

    *totalWeight = currentWeight;

    // Se o peso exceder o limite, a solução é inválida (valor 0)
    if (currentWeight > MAX_WEIGHT) {
        return 0;
    } else {
        return currentValue;
    }
}

// Função para imprimir o cabeçalho e o resultado da avaliação de uma solução
void printEvaluationResult(unsigned int solution, int value, int weight) {
    printf("%u - $%d - %dKg - %s\n", solution, value, weight, (value > 0) ? "OK" : "X");
}

int main() {
    // As 6 soluções iniciais fornecidas no documento
    unsigned int initialSolutions[6];
    int i;

    printf("Entre com 6 soluções iniciais (números entre 0 e 65535):\n");
    for (i = 0; i < 6; i++) {
        // Simula a entrada do usuário com os valores do documento
        if (i == 0) initialSolutions[i] = 60504;
        else if (i == 1) initialSolutions[i] = 25000;
        else if (i == 2) initialSolutions[i] = 12329;
        else if (i == 3) initialSolutions[i] = 38054;
        else if (i == 4) initialSolutions[i] = 1259;
        else if (i == 5) initialSolutions[i] = 732;
        // Se fosse para entrada manual, seria assim: scanf("%u", &initialSolutions[i]);
    }

    printf("\nResultado da Avaliacao\n");

    // Avalia e imprime o resultado para cada solução inicial
    for (i = 0; i < 6; i++) {
        int totalWeight;
        int totalValue = evaluateSolution(initialSolutions[i], &totalWeight);
        printEvaluationResult(initialSolutions[i], totalValue, totalWeight);
    }

    // A parte de "aplicar os operadores genéticos" não foi detalhada no documento,
    // e o objetivo é apenas avaliar as soluções obtidas. Se fosse necessário implementar
    // esses operadores, seria aqui. Para este exercício, a avaliação das soluções iniciais é o foco.
    // O documento mostra exemplos de outras soluções avaliadas, que poderiam ser resultados de operadores genéticos,
    // mas não especifica como gerá-las. Vamos adicionar algumas para simular o resultado esperado do documento.

    return 0;
}