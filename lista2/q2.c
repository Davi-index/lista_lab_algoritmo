#include <stdio.h>
typedef struct
{
    char nome[50];
    float peso;
    int idade;
} Peixe;
// a) Versão com parâmetro tipo peixe
void exibePeixe(Peixe p)
{
    printf("Nome: %s\n", p.nome);
    printf("Peso: %.2f kg\n", p.peso);
    printf("Idade: %d anos\n", p.idade);
}
// b) Versão com parâmetro tipo ponteiro para peixe
void exibePeixePtr(const Peixe *p)
{
    printf("Nome: %s\n", p->nome);
    printf("Peso: %.2f kg\n", p->peso);
    printf("Idade: %d anos\n", p->idade);
}
// Exemplo de uso
int main()
{
    Peixe peixe1 = {"tucunare", 2.5, 3};

    printf("Usando parâmetro tipo peixe:\n");
    exibePeixe(peixe1);

    printf("\nUsando parâmetro tipo ponteiro para peixe:\n");
    exibePeixePtr(&peixe1);

    return 0;
}
