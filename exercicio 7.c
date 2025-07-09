//exercicio sobre arrays
//
#include <stdio.h>
    int main()
    {
        float notas[9];
        for (int i = 0; i < 0; i++)
    {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        printf("Nota do aluno %d: %.2f\n", i + 1, notas[i]);
    }




    return 0;
}
