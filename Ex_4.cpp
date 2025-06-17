#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho, i;

    // Solicita o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Aloca��o din�mica de mem�ria
    array = (int *)malloc(tamanho * sizeof(int));

    // Verifica se a aloca��o foi bem-sucedida
    if (array == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        return 1;
    }

    // Leitura dos elementos do array
    printf("Digite %d elementos:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &array[i]);
    }

    // Imprime os elementos do array
    printf("\nArray original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Realoca��o para metade do tamanho
    int novo_tamanho = tamanho / 2;
    array = (int *)realloc(array, novo_tamanho * sizeof(int));

    // Verifica se a realoca��o foi bem-sucedida
    if (array == NULL) {
        printf("Erro ao realocar mem�ria!\n");
        return 1;
    }

    // Imprime os elementos restantes do array
    printf("\nArray ap�s realoca��o (primeira metade):\n");
    for (i = 0; i < novo_tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Libera��o da mem�ria
    free(array);

    return 0;
}
