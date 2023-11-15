#include <stdio.h>
#include <stdlib.h>
int main() {
    char cad1[50], cad2[50], resultado[100];
    int i, j, k;

    // Solicitar al usuario ingresar las dos cadenas
    printf("Ingresa la primera cadena (máximo 50 caracteres): ");
    fgets(cad1, sizeof(cad1), stdin);
    printf("Ingresa la segunda cadena (máximo 50 caracteres): ");
    fgets(cad2, sizeof(cad2), stdin);

    // Eliminar el carácter de nueva línea de las entradas
    cad1[strcspn(cad1, "\n")] = '\0';
    cad2[strcspn(cad2, "\n")] = '\0';

    // Inicializar índices para las cadenas y la cadena resultado
    i = j = k = 0;

    // Intercalar las palabras de las cadenas en la cadena resultado
    while (cad1[i] != '\0' || cad2[j] != '\0') {
        // Copiar palabra de la primera cadena si existe
        while (cad1[i] != ' ' && cad1[i] != '\0') {
            resultado[k++] = cad1[i++];
        }
        // Agregar un espacio entre las palabras de las cadenas
        resultado[k++] = ' ';

        // Copiar palabra de la segunda cadena si existe
        while (cad2[j] != ' ' && cad2[j] != '\0') {
            resultado[k++] = cad2[j++];
        }
        // Agregar un espacio entre las palabras de las cadenas
        resultado[k++] = ' ';

        // Avanzar a la siguiente palabra en ambas cadenas
        if (cad1[i] == ' ') {
            i++;
        }
        if (cad2[j] == ' ') {
            j++;
        }
    }

    // Agregar el carácter nulo al final de la cadena resultado
    resultado[k] = '\0';

    // Imprimir la cadena resultado
    printf("Cadena intercalada: %s\n", resultado);

    return 0;
}
