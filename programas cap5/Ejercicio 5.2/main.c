#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int N;
    printf("Introduce el tamaño del arreglo (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tamaño del arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    int VEC[N], result[N];
    int i, j, k = 0;

    printf("Introduce los elementos del arreglo ordenados:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &VEC[i]);
    }

    // Elimina elementos duplicados
    for (i = 0; i < N; i++) {
        int duplicado = 0;
        for (j = 0; j < k; j++) {
            if (VEC[i] == result[j]) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            result[k++] = VEC[i];
        }
    }

    printf("Arreglo sin elementos repetidos:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
