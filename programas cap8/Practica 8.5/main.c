#include <stdio.h>
#include <stdlib.h>

// Definici�n de la estructura Producto
struct Producto {
    int claveProducto;
    char nombre[50];
    int existencia;
};

int main() {
    // Declaraci�n del arreglo de estructuras Producto
    struct Producto TIENDA[100];
    int N; // N�mero actual de productos en la tienda

    // C�digo para ingresar la informaci�n de los productos (n�mero de productos N)
    // ...

    char operacion;
    int clave, cantidad;

    // Leer transacciones hasta que se ingrese '0 0 0'
    while (1) {
        printf("Ingrese operaci�n ('C' para compra, 'V' para venta, '0' para salir): ");
        scanf(" %c", &operacion);

        if (operacion == '0') {
            break;
        }

        printf("Ingrese clave del producto: ");
        scanf("%d", &clave);
        printf("Ingrese cantidad: ");
        scanf("%d", &cantidad);

        // Buscar el producto por clave
        int i;
        for (i = 0; i < N; i++) {
            if (TIENDA[i].claveProducto == clave) {
                if (operacion == 'C') {
                    // Operaci�n de compra
                    TIENDA[i].existencia += cantidad;
                    printf("Compra de %d unidades de %s realizada. Existencia actual: %d\n", cantidad, TIENDA[i].nombre, TIENDA[i].existencia);
                } else if (operacion == 'V') {
                    // Operaci�n de venta
                    if (TIENDA[i].existencia >= cantidad) {
                        TIENDA[i].existencia -= cantidad;
                        printf("Venta de %d unidades de %s realizada. Existencia actual: %d\n", cantidad, TIENDA[i].nombre, TIENDA[i].existencia);
                    } else {
                        printf("No hay suficientes existencias para realizar la venta.\n");
                    }
                }
                break;
            }
        }

        if (i == N) {
            printf("Producto con clave %d no encontrado.\n", clave);
        }
    }

    return 0;
}
