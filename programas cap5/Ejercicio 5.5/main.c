#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, VEC[100], ELE, i, j, encontrado = 0;

    // Solicita el tama�o del arreglo
    printf("Introduce el tama�o del arreglo (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tama�o del arreglo debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    // Solicita los elementos del arreglo (se asume que el usuario los ingresa ordenados)
    printf("Introduce los elementos del arreglo ordenados:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &VEC[i]);
    }

    // Solicita el n�mero a insertar o eliminar
    printf("Introduce el n�mero que deseas insertar o eliminar: ");
    scanf("%d", &ELE);

    // Elimina todas las ocurrencias del elemento especificado
    for (i = 0; i < N; i++) {
        if (VEC[i] == ELE) {
            for (j = i; j < N - 1; j++) {
                VEC[j] = VEC[j + 1];
            }
            encontrado = 1;
            N--; // Reduce el tama�o del arreglo despu�s de eliminar un elemento
            i--; // Comprueba el mismo �ndice nuevamente en caso de elementos consecutivos iguales
        }
    }

    // Inserta el elemento si no se encontr� en el arreglo y mantiene el orden
    if (!encontrado) {
        for (i = 0; i < N; i++) {
            if (ELE < VEC[i]) {
                for (j = N; j > i; j--) {
                    VEC[j] = VEC[j - 1];
                }
                VEC[i] = ELE;
                N++; // Aumenta el tama�o del arreglo despu�s de insertar un elemento
                break;
            }
        }
        // Si el elemento es mayor que todos los elementos existentes, se inserta al final del arreglo
        if (i == N) {
            VEC[N] = ELE;
            N++;
        }
    }

    // Imprime el arreglo despu�s de la operaci�n
    printf("Arreglo despu�s de la operaci�n:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", VEC[i]);
    }

    return 0;
}
