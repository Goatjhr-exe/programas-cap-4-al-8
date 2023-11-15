#include <stdio.h>
#include <stdlib.h>
int contarPalabras(char *cadena) {
    int palabras = 0;
    int enPalabra = 0;  // Bandera que indica si se está dentro de una palabra

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == ' ' || cadena[i] == '\t' || cadena[i] == '\n') {
            // Si el carácter actual es espacio en blanco, tabulación o nueva línea,
            // y estábamos dentro de una palabra, incrementamos el contador de palabras
            if (enPalabra) {
                palabras++;
                enPalabra = 0;
            }
        } else {
            // Si el carácter actual no es espacio en blanco, tabulación o nueva línea,
            // y no estábamos dentro de una palabra, indicamos que estamos dentro de una palabra
            if (!enPalabra) {
                enPalabra = 1;
            }
        }
    }

    // Contar la última palabra si la cadena no termina con espacio en blanco, tabulación o nueva línea
    if (enPalabra) {
        palabras++;
    }

    return palabras;
}

int main() {
    char ARC[10][50];

    // Solicitar al usuario ingresar las cadenas en el arreglo
    printf("Ingresa 10 cadenas de caracteres (cada una de hasta 50 caracteres):\n");
    for (int i = 0; i < 10; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(ARC[i], sizeof(ARC[i]), stdin);
        // Eliminar el carácter de nueva línea de la entrada
        ARC[i][strcspn(ARC[i], "\n")] = '\0';

        // Contar palabras en la cadena actual
        int numPalabras = contarPalabras(ARC[i]);

        // Imprimir el número de palabras en la cadena
        printf("Número de palabras en la cadena %d: %d\n", i + 1, numPalabras);
    }

    return 0;
}
