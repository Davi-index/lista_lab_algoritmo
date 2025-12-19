#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *prox;
} Node;

typedef struct {
    Node *head;
} Lista;

void iniciar_lista(Lista *l) {
    l->head = NULL;
}

void inserir_no_inicio(Lista *l, int valor) {
    Node *novo = (Node*)malloc(sizeof(Node));
    if (!novo) return;
    novo->valor = valor;
    novo->prox = l->head;
    l->head = novo;
}

void inserir_no_fim(Lista *l, int valor) {
    Node *novo = (Node*)malloc(sizeof(Node));
    if (!novo) return;
    novo->valor = valor;
    novo->prox = NULL;
    if (l->head == NULL) {
        l->head = novo;
        return;
    }
    Node *atual = l->head;
    while (atual->prox != NULL) atual = atual->prox;
    atual->prox = novo;
}

int remover(Lista *l, int valor) {
    Node *atual = l->head;
    Node *ant = NULL;
    while (atual != NULL) {
        if (atual->valor == valor) {
            if (ant == NULL) l->head = atual->prox;
            else ant->prox = atual->prox;
            free(atual);
            return 1; // removido
        }
        ant = atual;
        atual = atual->prox;
    }
    return 0; // não encontrado
}

int buscar(Lista *l, int valor) {
    Node *atual = l->head;
    while (atual != NULL) {
        if (atual->valor == valor) return 1;
        atual = atual->prox;
    }
    return 0;
}

void exibir(Lista *l) {
    Node *atual = l->head;
    printf("[");
    while (atual != NULL) {
        printf("%d", atual->valor);
        if (atual->prox != NULL) printf(", ");
        atual = atual->prox;
    }
    printf("]\n");
}

void liberar_lista(Lista *l) {
    Node *atual = l->head;
    while (atual != NULL) {
        Node *tmp = atual;
        atual = atual->prox;
        free(tmp);
    }
    l->head = NULL;
}

int main(void) {
    Lista l;
    iniciar_lista(&l);

    inserir_no_inicio(&l, 10);
    inserir_no_inicio(&l, 5);
    inserir_no_fim(&l, 20);
    inserir_no_fim(&l, 30);

    printf("Lista inicial: ");
    exibir(&l);

    printf("Buscar 20: %s\n", buscar(&l, 20) ? "presente" : "ausente");
    printf("Remover 5: %s\n", remover(&l, 5) ? "removido" : "nao encontrado");
    printf("Lista apos remocao: ");
    exibir(&l);

    liberar_lista(&l);
    return 0;
}