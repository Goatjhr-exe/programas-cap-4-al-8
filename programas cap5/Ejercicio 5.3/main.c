#include <stdio.h>
#include <stdlib.h>

int main() {
    int fibonacci[100];
    int i;

    // Calcula y almacena los primeros 100 números de Fibonacci en el arreglo
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (i = 2; i < 100; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Imprime el arreglo de Fibonacci
    printf("Los primeros 100 números de Fibonacci son:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", fibonacci[i]);
    }

    return 0;
}
