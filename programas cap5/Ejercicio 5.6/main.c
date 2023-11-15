#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, aprobados = 0, mayores_o_iguales_1500 = 0;
    float ALU[100], suma_calificaciones = 0;

    // Solicita el tamaño del arreglo
    printf("Introduce el número de alumnos (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El número de alumnos debe estar en el rango de 1 a 100.\n");
        return 1;
    }

    // Solicita las calificaciones de los alumnos
    printf("Introduce las calificaciones de los alumnos:\n");
    for (i = 0; i < N; i++) {
        scanf("%f", &ALU[i]);
        suma_calificaciones += ALU[i];

        // Cuenta el número de alumnos aprobados y cuyas calificaciones son mayores o iguales a 1500
        if (ALU[i] > 1300) {
            aprobados++;
        }

        if (ALU[i] >= 1500) {
            mayores_o_iguales_1500++;
        }
    }

    // Calcula el promedio general del grupo
    float promedio_general = suma_calificaciones / N;

    // Calcula el porcentaje de alumnos aprobados
    float porcentaje_aprobados = (float)aprobados / N * 100;

    // Imprime los resultados
    printf("Promedio general del grupo: %.2f\n", promedio_general);
    printf("Porcentaje de alumnos aprobados: %.2f%%\n", porcentaje_aprobados);
    printf("Número de alumnos con calificación mayor o igual a 1500: %d\n", mayores_o_iguales_1500);

    return 0;
}
