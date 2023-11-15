#include <stdio.h>
#include <stdlib.h>

// Definici�n de la estructura DOMICILIO
struct DOMICILIO {
    char calleNumero[50];
    char colonia[50];
    char codigoPostal[10];
    char ciudad[50];
};

// Definici�n de la estructura EMPLEADO
struct EMPLEADO {
    int numeroEmpleado;
    char nombre[50];
    char departamento[50];
    struct DOMICILIO domicilio;
    char telefono[15];
    float salarioMensual;
};

int main() {
    // Declaraci�n del arreglo de estructuras EMPLEADO
    struct EMPLEADO EMPLE[100];
    int N = 0; // N�mero actual de empleados

    int opcion, numEmpleado, i;
    char departamentoBuscar[50];

    // Men� de opciones
    do {
        printf("\nMen� de opciones:\n");
        printf("1. Altas\n");
        printf("2. Bajas\n");
        printf("3. Listado\n");
        printf("0. Salir\n");
        printf("Seleccione una opci�n: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                // Altas
                if(N < 100) {
                    printf("Ingrese el n�mero de empleado: ");
                    scanf("%d", &EMPLE[N].numeroEmpleado);
                    printf("Ingrese el nombre y apellido: ");
                    scanf("%s", EMPLE[N].nombre);
                    printf("Ingrese el departamento: ");
                    scanf("%s", EMPLE[N].departamento);
                    printf("Ingrese la calle y n�mero: ");
                    scanf("%s", EMPLE[N].domicilio.calleNumero);
                    printf("Ingrese la colonia: ");
                    scanf("%s", EMPLE[N].domicilio.colonia);
                    printf("Ingrese el c�digo postal: ");
                    scanf("%s", EMPLE[N].domicilio.codigoPostal);
                    printf("Ingrese la ciudad: ");
                    scanf("%s", EMPLE[N].domicilio.ciudad);
                    printf("Ingrese el tel�fono: ");
                    scanf("%s", EMPLE[N].telefono);
                    printf("Ingrese el salario mensual: ");
                    scanf("%f", &EMPLE[N].salarioMensual);
                    N++;
                    printf("Empleado dado de alta correctamente.\n");
                } else {
                    printf("No hay espacio para m�s empleados.\n");
                }
                break;

            case 2:
                // Bajas
                printf("Ingrese el n�mero de empleado a dar de baja: ");
                scanf("%d", &numEmpleado);
                for(i = 0; i < N; i++) {
                    if(EMPLE[i].numeroEmpleado == numEmpleado) {
                        for(int j = i; j < N - 1; j++) {
                            EMPLE[j] = EMPLE[j + 1];
                        }
                        N--;
                        printf("Empleado dado de baja correctamente.\n");
                        break;
                    }
                }
                if(i == N) {
                    printf("Empleado no encontrado.\n");
                }
                break;

            case 3:
                // Listado
                printf("Ingrese el nombre del departamento: ");
                scanf("%s", departamentoBuscar);
                printf("N�mero\tNombre\tSalario\n");
                for(i = 0; i < N; i++) {
                    if(strcmp(EMPLE[i].departamento, departamentoBuscar) == 0) {
                        printf("%d\t%s\t%.2f\n", EMPLE[i].numeroEmpleado, EMPLE[i].nombre, EMPLE[i].salarioMensual);
                    }
                }
                break;

            case 0:
                // Salir del programa
                printf("Saliendo del programa. �Hasta luego!\n");
                break;

            default:
                // Opci�n inv�lida
                printf("Opci�n inv�lida. Por favor, seleccione una opci�n v�lida.\n");
        }
    } while(opcion != 0);

    return 0;
}
