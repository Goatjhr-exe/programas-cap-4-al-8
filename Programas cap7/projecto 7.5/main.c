#include <stdio.h>
#include <stdlib.h>
int main() {
    char cad[50];
    int i;

    // Solicitar al usuario ingresar la cadena
    printf("Ingresa una cadena de caracteres (máximo 50 caracteres):\n");
    fgets(cad, sizeof(cad), stdin);

    // Convertir el primer carácter de cada palabra a mayúscula
    for (i = 0; cad[i] != '\0'; i++) {
        // Si el carácter actual es una letra y es el primer carácter o está precedido por un espacio
        if ((i == 0 || cad[i - 1] == ' ') && isalpha(cad[i])) {
            cad[i] = toupper(cad[i]); // Convertir a mayúscula
        }
        // Si el carácter actual es una letra y no es el primer carácter y no está precedido por un espacio
        else if (isalpha(cad[i])) {
            cad[i] = tolower(cad[i]); // Convertir a minúscula
        }
    }

    // Imprimir la cadena resultante
    printf("Cadena con primeras letras de palabras en mayúscula:\n%s", cad);

    return 0;
}
