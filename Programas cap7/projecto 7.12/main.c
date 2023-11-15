#include <stdio.h>
#include <stdlib.h>
int contarMayusculas(char *cadena) {
    int contadorMayusculas = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (isupper(cadena[i])) {
            contadorMayusculas++;
        }
    }
    return contadorMayusculas;
}

int main() {
    char ARC[10][50];
    int maxMayusculas = 0;
    int indiceCadenaMaxMayusculas = -1;

    // Solicitar al usuario ingresar las cadenas en el arreglo
    printf("Ingresa 10 cadenas de caracteres (cada una de hasta 50 caracteres):\n");
    for (int i = 0; i < 10; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(ARC[i], sizeof(ARC[i]), stdin);
        // Eliminar el carácter de nueva línea de la entrada
        ARC[i][strcspn(ARC[i], "\n")] = '\0';

        // Contar las letras mayúsculas en la cadena actual
        int numMayusculas = contarMayusculas(ARC[i]);

        // Actualizar el índice de la cadena con el máximo número de letras mayúsculas
        if (numMayusculas > maxMayusculas) {
            maxMayusculas = numMayusculas;
            indiceCadenaMaxMayusculas = i;
        }
    }

    // Imprimir la cadena con el mayor número de letras mayúsculas
    if (indiceCadenaMaxMayusculas != -1) {
        printf("La cadena con el mayor número de letras mayúsculas es: %s\n", ARC[indiceCadenaMaxMayusculas]);
    } else {
        printf("No se ingresaron cadenas válidas.\n");
    }

    return 0;
}
