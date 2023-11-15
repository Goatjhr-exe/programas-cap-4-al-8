#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int X, n = 0;
    double cosX = 0, termino = 1, precision = 0.001;

    printf("Ingrese un número entero para X: ");
    scanf("%d", &X);

    // Convertir X a radianes
    double radianes = X * (M_PI / 180.0);

    // Calcular coseno usando la serie de Taylor
    do {
        cosX += termino;
        n++;
        termino = pow(-1, n) * pow(radianes, 2 * n) / factorial(2 * n);
    } while (fabs(termino) >= precision);

    printf("El valor de cos(%d) es aproximadamente %.4f con %d términos.\n", X, cosX, n);

    return 0;
}
