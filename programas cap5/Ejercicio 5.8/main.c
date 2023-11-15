#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, k;
    int VEC1[100], VEC2[100], VEC3[200]; // VEC3 contendrá la mezcla de VEC1 y VEC2

    // Solicita el tamaño del primer arreglo
    printf("Introduce el tamaño del primer arreglo (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tamaño del primer arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    // Solicita los elementos del primer arreglo
    printf("Introduce los elementos del primer arreglo:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &VEC1[i]);
    }

    // Solicita el tamaño del segundo arreglo
    printf("Introduce el tamaño del segundo arreglo (1 <= M <= 100): ");
    scanf("%d", &M);

    if (M < 1 || M > 100) {
        printf("El tamaño del segundo arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    // Solicita los elementos del segundo arreglo
    printf("Introduce los elementos del segundo arreglo:\n");
    for (i = 0; i < M; i++) {
        scanf("%d", &VEC2[i]);
    }

    // Combina los dos arreglos en un tercer arreglo ordenado de forma descendente
    i = j = k = 0;
    while (i < N && j < M) {
        if (VEC1[i] >= VEC2[j]) {
            VEC3[k++] = VEC1[i++];
        } else {
            VEC3[k++] = VEC2[j++];
        }
    }

    // Agrega los elementos restantes del primer arreglo, si los hay
    while (i < N) {
        VEC3[k++] = VEC1[i++];
    }

    // Agrega los elementos restantes del segundo arreglo, si los hay
    while (j < M) {
        VEC3[k++] = VEC2[j++];
    }

    // Imprime el arreglo combinado en forma descendente
    printf("Arreglo combinado en forma descendente:\n");
    for (i = N + M - 1; i >= 0; i--) {
        printf("%d ", VEC3[i]);
    }

    return 0;
}
