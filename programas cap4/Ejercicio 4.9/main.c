#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, inverso = 0;

    printf("Ingrese un número entero de cuatro dígitos: ");
    scanf("%d", &N);

    // Verificar si el número tiene cuatro dígitos
    if (N < 1000 || N > 9999) {
        printf("Por favor, ingrese un número de cuatro dígitos.\n");
    } else {
        // Invertir el número
        while (N > 0) {
            inverso = inverso * 10 + N % 10;
            N = N / 10;
        }

        // Imprimir el número invertido
        printf("El número invertido es: %d\n", inverso);
    }

    return 0;
}
