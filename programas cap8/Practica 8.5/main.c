#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura Producto
struct Producto {
    int claveProducto;
    char nombre[50];
    int existencia;
};

int main() {
    // Declaración del arreglo de estructuras Producto
    struct Producto TIENDA[100];
    int N; // Número actual de productos en la tienda

    // Código para ingresar la información de los productos (número de productos N)
    // ...

    char operacion;
    int clave, cantidad;

    // Leer transacciones hasta que se ingrese '0 0 0'
    while (1) {
        printf("Ingrese operación ('C' para compra, 'V' para venta, '0' para salir): ");
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
                    // Operación de compra
                    TIENDA[i].existencia += cantidad;
                    printf("Compra de %d unidades de %s realizada. Existencia actual: %d\n", cantidad, TIENDA[i].nombre, TIENDA[i].existencia);
                } else if (operacion == 'V') {
                    // Operación de venta
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
