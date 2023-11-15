#include <stdio.h>
#include <stdlib.h>
int contarVocales(char *cadena) {
    int contadorVocales = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        char letra = tolower(cadena[i]);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contadorVocales++;
        }
    }
    return contadorVocales;
}

int main() {
    char ARC[10][50];
    int maxVocales = 0;
    int indiceCadenaMaxVocales = -1;

    // Solicitar al usuario ingresar las cadenas en el arreglo
    printf("Ingresa 10 cadenas de caracteres (cada una de hasta 50 caracteres):\n");
    for (int i = 0; i < 10; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(ARC[i], sizeof(ARC[i]), stdin);
        // Eliminar el carácter de nueva línea de la entrada
        ARC[i][strcspn(ARC[i], "\n")] = '\0';

        // Contar las vocales en la cadena actual
        int numVocales = contarVocales(ARC[i]);

        // Actualizar el índice de la cadena con el máximo número de vocales
        if (numVocales > maxVocales) {
            maxVocales = numVocales;
            indiceCadenaMaxVocales = i;
        }
    }

    // Imprimir la cadena con el mayor número de vocales
    if (indiceCadenaMaxVocales != -1) {
        printf("La cadena con el mayor número de vocales es: %s\n", ARC[indiceCadenaMaxVocales]);
    } else {
        printf("No se ingresaron cadenas válidas.\n");
    }

    return 0;
}
