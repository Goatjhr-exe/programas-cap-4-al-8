#include <stdio.h>
#include <stdlib.h>
int main() {
    char cad[50];

    // Solicitar al usuario ingresar la cadena
    printf("Ingresa una cadena de caracteres (m�ximo 50 caracteres): ");
    fgets(cad, sizeof(cad), stdin);

    // Eliminar el car�cter de nueva l�nea de la entrada
    cad[strcspn(cad, "\n")] = '\0';

    int length = strlen(cad);

    if (length == 0) {
        printf("La cadena est� vac�a.\n");
    } else {
        printf("Caracteres en posiciones impares de la cadena:\n");
        for (int i = 1; i < length; i += 2) {
            printf("%c ", cad[i]);
        }
        printf("\n");
    }

    return 0;
}
