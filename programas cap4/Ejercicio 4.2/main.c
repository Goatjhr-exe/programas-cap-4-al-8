#include <stdio.h>
#include <stdlib.h>

int main() {
    int NUM;
    double resultado = 1.0;

    printf("Ingrese un número entero: ");
    scanf("%d", &NUM);

    for (int i = 1; i <= NUM; i++) {
        // Numerador: 2 * i - 1, Denominador: 2 * i
        resultado *= (2.0 * i - 1) / (2.0 * i);
    }

    printf("El resultado de la serie es: %lf\n", resultado);

    return 0;
}
