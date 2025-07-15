#include <stdio.h>
#include <math.h>
#include <float.h>
#define N 10

typedef struct {
    double x, y;
} Cidade;

// Lista de cidades com suas coordenadas
Cidade cidades[N] = {
    {0, 0},
    {2, 3},
    {5, 4},
    {1, 1},
    {6, 2},
    {8, 4},
    {4, 7},
    {3, 5},
    {7, 1},
    {9, 6}
};

// Matriz para armazenar as distâncias entre as cidades
double distancias[N][N];

// Calcula a distância euclidiana entre duas cidades
double distancia(Cidade a, Cidade b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

// Preenche a matriz de distâncias entre todas as cidades
void calcular_distancias() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            distancias[i][j] = distancia(cidades[i], cidades[j]);
}

// dp[mask][i]: menor custo para visitar cidades em 'mask', terminando em 'i'
double dp[1<<N][N];
int parent[1<<N][N];

// Função principal do TSP usando programação dinâmica com bitmask
void tsp() {
    int full = (1<<N) - 1; // Máscara com todas as cidades visitadas
    // Inicializa a tabela dp com infinito
    for (int mask = 0; mask < (1<<N); mask++)
        for (int i = 0; i < N; i++)
            dp[mask][i] = DBL_MAX;

    dp[1][0] = 0; // Começa na cidade 0

    // Preenche a tabela dp
    for (int mask = 1; mask < (1<<N); mask++) {
        for (int u = 0; u < N; u++) {
            if (!(mask & (1<<u))) continue; // Se a cidade u não está no conjunto, pula
            for (int v = 0; v < N; v++) {
                if (mask & (1<<v)) continue; // Se a cidade v já foi visitada, pula
                int next = mask | (1<<v); // Adiciona v ao conjunto
                double cand = dp[mask][u] + distancias[u][v]; // Custo candidato
                if (cand < dp[next][v]) {
                    dp[next][v] = cand; // Atualiza menor custo
                    parent[next][v] = u; // Guarda o caminho
                }
            }
        }
    }

    // Reconstrução da rota ótima
    double min_dist = DBL_MAX;
    int last = -1;
    for (int i = 1; i < N; i++) {
        double cand = dp[full][i] + distancias[i][0]; // Retorna à cidade inicial
        if (cand < min_dist) {
            min_dist = cand;
            last = i;
        }
    }

    // Imprime a rota ótima
    int rota[N+1], mask = full;
    rota[N] = 0; // Volta para a cidade inicial
    for (int i = N-1; i >= 1; i--) {
        rota[i] = last;
        int temp = parent[mask][last];
        mask ^= (1<<last); // Remove a cidade da máscara
        last = temp;
    }
    rota[0] = 0;

    printf("Menor rota: ");
    for (int i = 0; i <= N; i++)
        printf("%d ", rota[i]);
    printf("\nDistancia total: %.2lf\n", min_dist);
}

int main() {
    calcular_distancias(); // Calcula todas as distâncias
    tsp(); // Resolve o TSP
    return 0;
}

/*
Esta solução é mais otimizada porque utiliza programação dinâmica com bitmasking (Held-Karp),
reduzindo a complexidade de O(n!) para O(n^2 * 2^n).
Isso permite resolver o problema do Caixeiro Viajante de forma eficiente para um número moderado de cidades.
A abordagem evita a explosão combinatória de permutações, utilizando uma tabela para armazenar
Evita recalcular subproblemas já resolvidos, ao contrário da abordagem de permutação.
*/