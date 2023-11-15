#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    unsigned long long factorial = 1; // Usamos unsigned long long para números grandes

    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    // Calcula el factorial de N
    for (i = 1; i <= N; ++i) {
        factorial *= i;
    }

    printf("El factorial de %d es %llu\n", N, factorial);

    return 0;
}
