#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, resultado = 0;

    printf("Ingrese un número entero N: ");
    scanf("%d", &N);

    // Calcula el resultado de la serie
    for (i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            resultado -= i * i; // Si i es par, resta i^2
        } else {
            resultado += i * i; // Si i es impar, suma i^2
        }
    }

    printf("El resultado de la serie es: %d\n", resultado);

    return 0;
}
