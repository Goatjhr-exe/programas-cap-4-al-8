#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura CLIENTE
struct CLIENTE {
    long int numCuenta;
    char nombre[50];
    struct {
        char calleNumero[50];
        char codigoPostal[10];
        char colonia[50];
        char ciudad[50];
    } domicilio;
    char telefono[15];
    float saldo;
};

int main() {
    // Declaración del arreglo de estructuras CLIENTE
    struct CLIENTE CLI[100];
    int N = 0; // Número de clientes
    int opcion;
    long int numCuenta;
    float monto;

    // Menú de opciones
    do {
        printf("\nMenú de opciones:\n");
        printf("1. Depósito\n");
        printf("2. Retiro\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                // Depósito
                printf("Ingrese el número de cuenta: ");
                scanf("%ld", &numCuenta);
                printf("Ingrese el monto a depositar: ");
                scanf("%f", &monto);

                // Buscar el cliente por número de cuenta
                int i;
                for(i = 0; i < N; i++) {
                    if(CLI[i].numCuenta == numCuenta) {
                        CLI[i].saldo += monto;
                        printf("Depósito realizado. Nuevo saldo: %.2f\n", CLI[i].saldo);
                        break;
                    }
                }
                if(i == N) {
                    printf("Cliente no encontrado.\n");
                }
                break;

            case 2:
                // Retiro
                printf("Ingrese el número de cuenta: ");
                scanf("%ld", &numCuenta);
                printf("Ingrese el monto a retirar: ");
                scanf("%f", &monto);

                // Buscar el cliente por número de cuenta
                int j;
                for(j = 0; j < N; j++) {
                    if(CLI[j].numCuenta == numCuenta) {
                        if(CLI[j].saldo >= monto) {
                            CLI[j].saldo -= monto;
                            printf("Retiro realizado. Nuevo saldo: %.2f\n", CLI[j].saldo);
                        } else {
                            printf("Saldo insuficiente para realizar el retiro.\n");
                        }
                        break;
                    }
                }
                if(j == N) {
                    printf("Cliente no encontrado.\n");
                }
                break;

            case 0:
                // Salir del programa
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;

            default:
                // Opción inválida
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
        }
    } while(opcion != 0);

    return 0;
}
