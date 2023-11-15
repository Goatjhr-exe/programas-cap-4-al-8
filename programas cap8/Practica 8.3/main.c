#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura PROFESOR
struct PROFESOR {
    int numeroEmpleado;
    char nombre[50];
    char departamento[20];
    char puesto[20];
    char gradoAcademico[20];
    char nacionalidad[20];
    float salario[12];
};

int main() {
    // Declaración del arreglo de estructuras PROFESOR
    struct PROFESOR EMPLE[200];
    int N; // Número de profesores
    int i;
    float maxSalario = 0;
    int indiceMaxSalario = -1;
    float totalIngresos = 0;
    float totalExtranjeros = 0;
    float totalEgresosEconomia = 0;
    float totalEgresosDerecho = 0;
    float totalEgresosComputacion = 0;
    float totalEgresosAdministracion = 0;

    // Código para ingresar la información de los profesores (número de profesores N)
    // ...

    // Encontrar al profesor que más ganó y calcular el ingreso total
    for(i = 0; i < N; i++) {
        float ingresoAnual = 0;
        for(int j = 0; j < 12; j++) {
            ingresoAnual += EMPLE[i].salario[j];
        }
        totalIngresos += ingresoAnual;
        if (ingresoAnual > maxSalario) {
            maxSalario = ingresoAnual;
            indiceMaxSalario = i;
        }

        // Calcular el total de egresos por departamento
        if(strcmp(EMPLE[i].departamento, "Economía") == 0) {
            totalEgresosEconomia += ingresoAnual;
        } else if(strcmp(EMPLE[i].departamento, "Derecho") == 0) {
            totalEgresosDerecho += ingresoAnual;
        } else if(strcmp(EMPLE[i].departamento, "Computación") == 0) {
            totalEgresosComputacion += ingresoAnual;
        } else if(strcmp(EMPLE[i].departamento, "Administración") == 0) {
            totalEgresosAdministracion += ingresoAnual;
        }

        // Calcular el monto total pagado a profesores extranjeros
        if(strcmp(EMPLE[i].nacionalidad, "Colombia") != 0) {
            totalExtranjeros += ingresoAnual;
        }
    }

    // Mostrar los resultados
    printf("Profesor que más ganó el año anterior:\n");
    printf("Nombre: %s\n", EMPLE[indiceMaxSalario].nombre);
    printf("Departamento: %s\n", EMPLE[indiceMaxSalario].departamento);
    printf("Nacionalidad: %s\n", EMPLE[indiceMaxSalario].nacionalidad);
    printf("Ingreso total: %.2f\n", maxSalario);

    float porcentajeExtranjeros = (totalExtranjeros / totalIngresos) * 100;
    printf("\nMonto total pagado a profesores extranjeros: %.2f\n", totalExtranjeros);
    printf("Porcentaje respecto al monto total erogado por la universidad: %.2f%%\n", porcentajeExtranjeros);

    printf("\nDepartamento que más egresos tuvo el año anterior:\n");
    if(totalEgresosEconomia >= totalEgresosDerecho && totalEgresosEconomia >= totalEgresosComputacion && totalEgresosEconomia >= totalEgresosAdministracion) {
        printf("Economía\n");
    } else if(totalEgresosDerecho >= totalEgresosComputacion && totalEgresosDerecho >= totalEgresosAdministracion) {
        printf("Derecho\n");
    } else if(totalEgresosComputacion >= totalEgresosAdministracion) {
        printf("Computación\n");
    } else {
        printf("Administración\n");
    }

    return 0;
}
