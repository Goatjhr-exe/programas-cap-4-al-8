#include <stdio.h>
#include <stdlib.h>

int esPalindromo(int arreglo[], int N) {
    int izquierda = 0;
    int derecha = N - 1;

    while (izquierda < derecha) {
        if (arreglo[izquierda] != arreglo[derecha]) {
            return 0; // No es un palíndromo
        }
        izquierda++;
        derecha--;
    }

    return 1; // Es un palíndromo
}

int main() {
    int N, i;
    int VEC[100];

    // Solicita el tamaño del arreglo
    printf("Introduce el tamaño del arreglo (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tamaño del arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    // Solicita los elementos del arreglo
    printf("Introduce los elementos del arreglo:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &VEC[i]);
    }

    // Verifica si el arreglo es un palíndromo
    if (esPalindromo(VEC, N)) {
        printf("El arreglo es un palíndromo.\n");
    } else {
        printf("El arreglo no es un palíndromo.\n");
    }

    return 0;
}
