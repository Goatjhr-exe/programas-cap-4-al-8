#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Introduce el tama�o del arreglo (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tama�o del arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    int VEC[N];
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Introduce los elementos del arreglo:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &VEC[i]);
        if (VEC[i] > 0) {
            positivos++;
        } else if (VEC[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Cantidad de n�meros positivos: %d\n", positivos);
    printf("Cantidad de n�meros negativos: %d\n", negativos);
    printf("Cantidad de n�meros nulos: %d\n", nulos);

    return 0;
}
