#include <stdio.h>
#include <stdlib.h>
int main() {
    char numeroTelefonico[30];

    // Solicitar al usuario ingresar el n�mero telef�nico como cadena de caracteres
    printf("Ingresa el n�mero telef�nico (sin espacios ni guiones): ");
    scanf("%s", numeroTelefonico);

    // Verificar que el n�mero telef�nico tiene al menos 10 d�gitos
    if (strlen(numeroTelefonico) >= 10) {
        // Formatear el n�mero telef�nico en el nuevo formato
        char nuevaCadena[30];
        snprintf(nuevaCadena, sizeof(nuevaCadena), "(%c%c)-%c-%s",
                 numeroTelefonico[0], numeroTelefonico[1], numeroTelefonico[2], &numeroTelefonico[3]);

        // Imprimir el resultado
        printf("N�mero telef�nico: %s\n", numeroTelefonico);
        printf("Nueva cadena: %s\n", nuevaCadena);
    } else {
        printf("El n�mero telef�nico ingresado no es v�lido.\n");
    }

    return 0;
}
