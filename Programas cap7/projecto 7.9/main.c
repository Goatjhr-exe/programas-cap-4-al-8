#include <stdio.h>
#include <stdlib.h>
void imprimirInversa(char *cadena) {
    char *palabra = strtok(cadena, " "); // Dividir la cadena en palabras
    if (palabra != NULL) {
        imprimirInversa(strtok(NULL, "\n")); // Llamada recursiva con la parte restante de la cadena
        printf("%s ", palabra); // Imprimir la palabra actual después de las palabras restantes
    }
}

int main() {
    char cad[50];

    // Solicitar al usuario ingresar la cadena
    printf("Ingresa una cadena de caracteres (máximo 50 caracteres):\n");
    fgets(cad, sizeof(cad), stdin);

    // Eliminar el carácter de nueva línea de la entrada
    cad[strcspn(cad, "\n")] = '\0';

    printf("Cadena en forma inversa:\n");
    imprimirInversa(cad);
    printf("\n");

    return 0;
}
