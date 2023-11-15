#include <stdio.h>
#include <stdlib.h>
void obtenerNombreMes(char *nombreMes, int numeroMes) {
    char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    strcpy(nombreMes, meses[numeroMes - 1]);
}

int main() {
    char entrada[9]; // Tamaño para dd/mm/aa + '\0'
    char salida[30];
    char nombreMes[20];
    int dia, mes, anno;

    // Solicitar al usuario ingresar la fecha en formato dd/mm/aa
    printf("Ingresa una fecha en formato dd/mm/aa: ");
    fgets(entrada, sizeof(entrada), stdin);

    // Convertir día, mes y año a enteros
    sscanf(entrada, "%d/%d/%d", &dia, &mes, &anno);

    // Obtener el nombre del mes
    obtenerNombreMes(nombreMes, mes);

    // Construir la nueva cadena con el formato requerido
    snprintf(salida, sizeof(salida), "%02d de %s de %04d\n", dia, nombreMes, 2000 + anno);

    printf("Fecha con nuevo formato: %s", salida);

    return 0;
}
