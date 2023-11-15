#include <stdio.h>
#include <stdlib.h>

// Definici�n de la estructura DOMICILIO
struct DOMICILIO {
    char calleNumero[50];
    int codigoPostal;
    char colonia[50];
    char ciudad[50];
    char telefono[15];
};

// Definici�n de la estructura NIVEL_ESTUDIOS
struct NIVEL_ESTUDIOS {
    char nivel[20];
    int grado;
    char salon[10];
};

// Definici�n de la estructura CALIFICACIONES
struct CALIFICACIONES {
    char materia[20];
    float promedio;
};

// Definici�n de la estructura ALUMNO
struct ALUMNO {
    int matricula;
    char nombre[50];
    struct DOMICILIO domicilio;
    struct NIVEL_ESTUDIOS nivelEstudios;
    struct CALIFICACIONES calificaciones[7];
};

int main() {
    // Declaraci�n del arreglo de estructuras ALUMNO
    struct ALUMNO ESCUELA[1000];
    int N; // N�mero actual de alumnos

    // C�digo para ingresar la informaci�n de los alumnos (n�mero de alumnos N)
    // ...

    // a) Calcular e imprimir el promedio general de un alumno por matr�cula
    int matriculaBuscada;
    printf("Ingrese la matr�cula del alumno para calcular el promedio general: ");
    scanf("%d", &matriculaBuscada);
    float promedioGeneral = 0;
    int contadorMaterias = 0;

    for (int i = 0; i < N; i++) {
        if (ESCUELA[i].matricula == matriculaBuscada) {
            for (int j = 0; j < 7; j++) {
                promedioGeneral += ESCUELA[i].calificaciones[j].promedio;
                contadorMaterias++;
            }
            if (contadorMaterias > 0) {
                promedioGeneral /= contadorMaterias;
                printf("Promedio general del alumno: %.2f\n", promedioGeneral);
            } else {
                printf("El alumno no tiene calificaciones registradas.\n");
            }
            break;
        }
    }

    // b) Listar matr�cula, nombre y promedio de alumnos por nivel, grado y sal�n
    char nivelEstudiosBuscado[20];
    int gradoBuscado;
    char salonBuscado[10];
    printf("Ingrese el nivel de estudios (primaria, secundaria o preparatoria): ");
    scanf("%s", nivelEstudiosBuscado);
    printf("Ingrese el grado: ");
    scanf("%d", &gradoBuscado);
    printf("Ingrese el sal�n: ");
    scanf("%s", salonBuscado);

    printf("Alumnos en el nivel %s, grado %d, sal�n %s:\n", nivelEstudiosBuscado, gradoBuscado, salonBuscado);
    for (int i = 0; i < N; i++) {
        if (strcmp(ESCUELA[i].nivelEstudios.nivel, nivelEstudiosBuscado) == 0 &&
            ESCUELA[i].nivelEstudios.grado == gradoBuscado &&
            strcmp(ESCUELA[i].nivelEstudios.salon, salonBuscado) == 0) {
            printf("Matr�cula: %d, Nombre: %s, Promedio: %.2f\n", ESCUELA[i].matricula, ESCUELA[i].nombre, promedioGeneral);
        }
    }

    // c) Encontrar el alumno con el mayor promedio en un nivel, grado y sal�n
    float maxPromedio = 0;
    int matriculaMaxPromedio = 0;
    char nombreMaxPromedio[50];
    printf("Alumno con el mayor promedio en el nivel %s, grado %d, sal�n %s:\n", nivelEstudiosBuscado, gradoBuscado, salonBuscado);

    for (int i = 0; i < N; i++) {
        if (strcmp(ESCUELA[i].nivelEstudios.nivel, nivelEstudiosBuscado) == 0 &&
            ESCUELA[i].nivelEstudios.grado == gradoBuscado &&
            strcmp(ESCUELA[i].nivelEstudios.salon, salonBuscado) == 0) {
            for (int j = 0; j < 7; j++) {
                if (ESCUELA[i].calificaciones[j].promedio > maxPromedio) {
                    maxPromedio = ESCUELA[i].calificaciones[j].promedio;
                    matriculaMaxPromedio = ESCUELA[i].matricula;
                    strcpy(nombreMaxPromedio, ESCUELA[i].nombre);
                }
            }
        }
    }

    if (maxPromedio > 0) {
        printf("Matr�cula: %d, Nombre: %s, Promedio: %.2f\n", matriculaMaxPromedio, nombreMaxPromedio, maxPromedio);
    } else {
        printf("No se encontr� ning�n alumno en el nivel, grado y sal�n especificados.\n");
    }

    return 0;
}
