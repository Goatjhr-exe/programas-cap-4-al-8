#include <stdio.h>
#include <stdlib.h>
int main() {
    char numeroTelefonico[30];

    // Solicitar al usuario ingresar el número telefónico como cadena de caracteres
    printf("Ingresa el número telefónico (sin espacios ni guiones): ");
    scanf("%s", numeroTelefonico);

    // Verificar que el número telefónico tiene al menos 10 dígitos
    if (strlen(numeroTelefonico) >= 10) {
        // Formatear el número telefónico en el nuevo formato
        char nuevaCadena[30];
        snprintf(nuevaCadena, sizeof(nuevaCadena), "(%c%c)-%c-%s",
                 numeroTelefonico[0], numeroTelefonico[1], numeroTelefonico[2], &numeroTelefonico[3]);

        // Imprimir el resultado
        printf("Número telefónico: %s\n", numeroTelefonico);
        printf("Nueva cadena: %s\n", nuevaCadena);
    } else {
        printf("El número telefónico ingresado no es válido.\n");
    }

    return 0;
}
