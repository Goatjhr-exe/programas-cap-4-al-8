#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, NUM, sumaPares = 0, sumaImpares = 0, cantidadPares = 0, cantidadImpares = 0;

    printf("Ingrese el valor de N (1 <= N <= 500): ");
    scanf("%d", &N);

    // Leer N números e calcular suma de pares e impares
    for (int i = 0; i < N; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &NUM);

        if (NUM % 2 == 0) {
            sumaPares += NUM;
            cantidadPares++;
        } else {
            sumaImpares += NUM;
            cantidadImpares++;
        }
    }

    // Calcular promedio de pares e impares y mostrar resultados
    if (cantidadPares > 0) {
        float promedioPares = (float) sumaPares / cantidadPares;
        printf("Promedio de números pares: %.2f\n", promedioPares);
    } else {
        printf("No se ingresaron números pares.\n");
    }

    if (cantidadImpares > 0) {
        float promedioImpares = (float) sumaImpares / cantidadImpares;
        printf("Promedio de números impares: %.2f\n", promedioImpares);
    } else {
        printf("No se ingresaron números impares.\n");
    }

    return 0;
}
