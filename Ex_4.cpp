#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int tam, j;


    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    // Alocação dinâmica de memória
    a = (int *)malloc(tam * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (a == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Leitura dos elementos do array
    printf("Digite %d elementos:\n", tam);
    for (j = 0; j < tamanho; j++) {
        printf("Elemento %d: ", j);
        scanf("%d", &a[j]);
    }

    // Imprime os elementos do array
    printf("\nArray original:\n");
    for (j = 0; j < tam; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    // Realocação para metade do tamanho
    int novo_tam = tam / 2;
    a = (int *)realloc(a, novo_tam * sizeof(int));

    // Verifica se a realocação foi bem-sucedida
    if (a == NULL) {
        printf("Erro ao realocar memória!\n");
        return 1;
    }

    // Imprime os elementos restantes do array
    printf("\nArray após realocação (primeira metade):\n");
    for (j = 0; j < novo_tam; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    free(a);

    return 0;
}
