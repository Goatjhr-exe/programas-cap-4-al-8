#include <stdio.h>
#include <stdlib.h>
int contarPalabras(char *cadena) {
    int palabras = 0;
    int enPalabra = 0;  // Bandera que indica si se está dentro de una palabra

    for (int i = 0; i < strlen(cadena); i++) {
        if (isalpha(cadena[i])) {
            // Si el carácter actual es una letra y no estábamos dentro de una palabra,
            // indicamos que estamos dentro de una palabra y aumentamos el contador de palabras
            if (!enPalabra) {
                enPalabra = 1;
                palabras++;
            }
        } else {
            // Si el carácter actual no es una letra y estábamos dentro de una palabra,
            // indicamos que no estamos dentro de una palabra
            enPalabra = 0;
        }
    }

    return palabras;
}

int main() {
    char ARC[20][80];

    // Solicitar al usuario ingresar las cadenas en el arreglo
    printf("Ingresa 20 cadenas de caracteres (cada una de hasta 80 caracteres):\n");
    for (int i = 0; i < 20; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(ARC[i], sizeof(ARC[i]), stdin);
        // Eliminar el carácter de nueva línea de la entrada
        ARC[i][strcspn(ARC[i], "\n")] = '\0';
    }

    int frecuencia[13] = {0};  // Array para almacenar la frecuencia de palabras de longitud de 1 a 12

    // Contar la frecuencia de las palabras por longitud
    for (int i = 0; i < 20; i++) {
        char *palabra = strtok(ARC[i], " ");
        while (palabra != NULL) {
            int longitud = strlen(palabra);
            if (longitud <= 12) {
                frecuencia[longitud - 1]++;
            }
            palabra = strtok(NULL, " ");
        }
    }

    // Imprimir la frecuencia de las palabras por longitud
    printf("Longitud de la palabra\tFrecuencia\n");
    for (int i = 0; i < 12; i++) {
        printf("%d\t\t\t\t%d\n", i + 1, frecuencia[i]);
    }

    return 0;
}
