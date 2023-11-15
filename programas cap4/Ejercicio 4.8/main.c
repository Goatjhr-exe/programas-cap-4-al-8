#include <stdio.h>
#include <stdlib.h>

int main() {
    int NUM;
    bool esPrimo = true;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &NUM);

    // Verificar si NUM es primo
    if (NUM <= 1) {
        esPrimo = false; // Los números menores o iguales a 1 no son primos
    } else {
        for (int i = 2; i*i <= NUM; ++i) {
            if (NUM % i == 0) {
                esPrimo = false; // NUM es divisible por i, por lo tanto no es primo
                break;
            }
        }
    }

    // Mostrar el resultado
    if (esPrimo) {
        printf("%d es un número primo.\n", NUM);
    } else {
        printf("%d no es un número primo.\n", NUM);
    }

    return 0;
}
