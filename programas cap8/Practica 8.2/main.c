#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura EQUIPO
struct EQUIPO {
    char nombre[50];
    int partidosJugados;
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos;
    int golesFavor;
    int golesContra;
    int diferenciaGoles;
    int puntos;
};

int main() {
    // Declaración del arreglo de estructuras EQUIPO
    struct EQUIPO FUTBOL[20];

    // Inicializar los datos de los equipos
    // ...

    // Código para leer los resultados de cada partido y actualizar la información
    // Suponiendo que se lee la información de los partidos y se actualiza la tabla de posiciones

    // Código para ordenar el arreglo FUTBOL en función de los puntos de los equipos
    // Puedes usar un algoritmo de ordenamiento, como el método de burbuja, para ordenar el arreglo

    // Código para imprimir la nueva tabla de posiciones
    printf("Tabla de posiciones:\n");
    printf("Equipo\tPJ\tPG\tPE\tPP\tGF\tGC\tDG\tPuntos\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", FUTBOL[i].nombre, FUTBOL[i].partidosJugados,
               FUTBOL[i].partidosGanados, FUTBOL[i].partidosEmpatados, FUTBOL[i].partidosPerdidos,
               FUTBOL[i].golesFavor, FUTBOL[i].golesContra, FUTBOL[i].diferenciaGoles, FUTBOL[i].puntos);
    }

    return 0;
}
