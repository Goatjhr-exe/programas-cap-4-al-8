#include <stdio.h>
#include <stdlib.h>
int main() {
    char cadena[50];
    char respuesta;
    time_t tiempo;
    struct tm *tmInfo;

    // Obtener la fecha y hora actual
    time(&tiempo);
    tmInfo = localtime(&tiempo);
    int dia = tmInfo->tm_mday;
    int mes = tmInfo->tm_mon + 1;  // Meses en C se almacenan de 0 a 11, por eso se suma 1
    int anno = tmInfo->tm_year + 1900;  // Se suman 1900 al año obtenido

    // Solicitar al usuario ingresar cadenas hasta que decida no ingresar más
    do {
        // Preguntar al usuario si desea ingresar una cadena
        printf("¿Desea ingresar una cadena? (S/N): ");
        scanf(" %c", &respuesta);

        // Limpiar el buffer del teclado
        while ((getchar()) != '\n');

        // Si la respuesta es afirmativa, solicitar la cadena al usuario
        if (respuesta == 'S' || respuesta == 's') {
            printf("Ingresa una cadena de hasta 50 caracteres: ");
            fgets(cadena, sizeof(cadena), stdin);

            // Eliminar el carácter de nueva línea de la entrada
            cadena[strcspn(cadena, "\n")] = '\0';

            // Comparar la fecha de inicio de la cadena con la fecha actual
            int diaCadena, mesCadena, annoCadena;
            sscanf(cadena, "%d/%d/%d", &diaCadena, &mesCadena, &annoCadena);

            // Imprimir la cadena solo si la fecha coincide con la fecha actual
            if (diaCadena == dia && mesCadena == mes && annoCadena == anno) {
                printf("Cadena válida: %s\n", cadena);
            } else {
                printf("Cadena no válida.\n");
            }
        } else {
            // Si la respuesta no es afirmativa, salir del bucle
            break;
        }
    } while (1);

    return 0;
}
