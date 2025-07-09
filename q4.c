/*#include <stdio.h>

int main() {
    float array[9] = {2,6,7,9,11,24,10,32,15};
    int n = 9;

    float maior = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    printf("Maior valor: %.2f\n", maior);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    float array[9] = {2, 6, 7, 9, 11, 24, 10, 32, 15};

    float mediana;
    for (int i = 0; i < 9; i++) {
        int menor = 0, maior = 0;
        for (int j = 0; j < 9; j++) {
            if (array[j] < array[i]) menor++;
            if (array[j] > array[i]) maior++;
        }
        if (menor == 4 && maior == 4) {
            mediana = array[i];
            break;
        }
    }
    printf("A mediana do array e: %.2f\n", mediana);
    float maior = array[0], menor = array[0], media = 0;
    for (int i = 0; i < 9; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
        media += array[i];
    }
    printf("O maior elemento do array e: %.2f\n", maior);
    printf("O menor elemento do array e: %.2f\n", menor);
    media = media / 9;
    printf("A media dos elementos do array e: %.2f\n", media);
    return 0;
}
