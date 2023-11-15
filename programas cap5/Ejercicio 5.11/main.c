#include <stdio.h>
#include <stdlib.h>

int esNumeroPerfecto(int num) {
    int sumaDivisores = 1; // Comienza con 1 porque todos los números son divisibles por 1

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }

    return sumaDivisores == num;
}

int main() {
    int numerosPerfectos[30];
    int contador = 0;
    int num = 2; // Comienza desde el primer número par

    while (contador < 30) {
        if (esNumeroPerfecto(num)) {
            numerosPerfectos[contador] = num;
            contador++;
        }
        num++;
    }

    // Imprime los primeros 30 números perfectos
    printf("Los primeros 30 números perfectos son:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", numerosPerfectos[i]);
    }

    return 0;
}
