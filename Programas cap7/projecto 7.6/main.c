#include <stdio.h>
#include <stdlib.h>
int main() {
    char cadena[20];  // Variable para almacenar cada cadena ingresada
    char mayorCadena[20];  // Variable para almacenar la cadena de mayor longitud
    int longitudMayor = 0;  // Variable para almacenar la longitud de la cadena de mayor longitud
    char respuesta;  // Variable para almacenar la respuesta del usuario

    do {
        // Preguntar al usuario si desea ingresar una cadena
        printf("¿Desea ingresar una cadena? (S/N): ");
        scanf(" %c", &respuesta);

        // Limpiar el buffer del teclado
        while ((getchar()) != '\n');

        // Si la respuesta es afirmativa, solicitar la cadena al usuario
        if (respuesta == 'S' || respuesta == 's') {
            printf("Ingresa una cadena de hasta 20 caracteres: ");
            fgets(cadena, sizeof(cadena), stdin);

            // Eliminar el carácter de nueva línea de la entrada
            cadena[strcspn(cadena, "\n")] = '\0';

            // Verificar si la cadena ingresada es la de mayor longitud
            if (strlen(cadena) > longitudMayor) {
                longitudMayor = strlen(cadena);
                strcpy(mayorCadena, cadena);
            }
        } else {
            // Si la respuesta no es afirmativa, salir del bucle
            break;
        }
    } while (1);

    // Imprimir la cadena de mayor longitud
    if (longitudMayor > 0) {
        printf("La cadena de mayor longitud es: %s\n", mayorCadena);
    } else {
        printf("No se ingresaron cadenas.\n");
    }

    return 0;
}
