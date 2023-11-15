#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, inverso = 0;

    printf("Ingrese un n�mero entero de cuatro d�gitos: ");
    scanf("%d", &N);

    // Verificar si el n�mero tiene cuatro d�gitos
    if (N < 1000 || N > 9999) {
        printf("Por favor, ingrese un n�mero de cuatro d�gitos.\n");
    } else {
        // Invertir el n�mero
        while (N > 0) {
            inverso = inverso * 10 + N % 10;
            N = N / 10;
        }

        // Imprimir el n�mero invertido
        printf("El n�mero invertido es: %d\n", inverso);
    }

    return 0;
}
