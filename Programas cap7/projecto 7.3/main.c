#include <stdio.h>
#include <stdlib.h>
int main() {
    char cad[31]; // Tamaño máximo de la cadena es 30 + 1 para el carácter nulo '\0'

    // Solicitar al usuario ingresar la cadena
    printf("Ingresa una cadena de caracteres (máximo 30 caracteres): ");
    fgets(cad, sizeof(cad), stdin);

    // Eliminar el carácter de nueva línea de la entrada
    cad[strcspn(cad, "\n")] = '\0';

    int length = strlen(cad);

    // Comprobar si la longitud de la cadena es menor que 30
    if (length < 30) {
        // Completar la cadena con caracteres '-'
        for (int i = length; i < 30; ++i) {
            cad[i] = '-';
        }
        cad[30] = '\0'; // Asegurar que la cadena esté terminada correctamente
    }

    printf("Cadena completada: %s\n", cad);

    return 0;
}
