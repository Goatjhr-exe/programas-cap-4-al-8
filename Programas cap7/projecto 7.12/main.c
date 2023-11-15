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
        // Eliminar el car�cter de nueva l�nea de la entrada
        ARC[i][strcspn(ARC[i], "\n")] = '\0';

        // Contar las letras may�sculas en la cadena actual
        int numMayusculas = contarMayusculas(ARC[i]);

        // Actualizar el �ndice de la cadena con el m�ximo n�mero de letras may�sculas
        if (numMayusculas > maxMayusculas) {
            maxMayusculas = numMayusculas;
            indiceCadenaMaxMayusculas = i;
        }
    }

    // Imprimir la cadena con el mayor n�mero de letras may�sculas
    if (indiceCadenaMaxMayusculas != -1) {
        printf("La cadena con el mayor n�mero de letras may�sculas es: %s\n", ARC[indiceCadenaMaxMayusculas]);
    } else {
        printf("No se ingresaron cadenas v�lidas.\n");
    }

    return 0;
}
