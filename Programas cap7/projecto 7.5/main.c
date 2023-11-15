#include <stdio.h>
#include <stdlib.h>
int main() {
    char cad[50];
    int i;

    // Solicitar al usuario ingresar la cadena
    printf("Ingresa una cadena de caracteres (m�ximo 50 caracteres):\n");
    fgets(cad, sizeof(cad), stdin);

    // Convertir el primer car�cter de cada palabra a may�scula
    for (i = 0; cad[i] != '\0'; i++) {
        // Si el car�cter actual es una letra y es el primer car�cter o est� precedido por un espacio
        if ((i == 0 || cad[i - 1] == ' ') && isalpha(cad[i])) {
            cad[i] = toupper(cad[i]); // Convertir a may�scula
        }
        // Si el car�cter actual es una letra y no es el primer car�cter y no est� precedido por un espacio
        else if (isalpha(cad[i])) {
            cad[i] = tolower(cad[i]); // Convertir a min�scula
        }
    }

    // Imprimir la cadena resultante
    printf("Cadena con primeras letras de palabras en may�scula:\n%s", cad);

    return 0;
}
