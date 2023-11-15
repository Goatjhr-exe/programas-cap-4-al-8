#include <stdio.h>
#include <stdlib.h>

int main() {
    int MES;
    float CAP, TAS, montoFinal;

    // Solicitar datos al usuario
    printf("Ingrese el n�mero de meses: ");
    scanf("%d", &MES);

    printf("Ingrese el monto inicial: $");
    scanf("%f", &CAP);

    printf("Ingrese la tasa de inter�s mensual (porcentaje): ");
    scanf("%f", &TAS);

    // Convertir la tasa de inter�s de porcentaje a decimal
    TAS = TAS / 100;

    // Calcular el monto final usando la f�rmula del inter�s compuesto
    montoFinal = CAP;
    for (int i = 0; i < MES; i++) {
        montoFinal = montoFinal * (1 + TAS);
    }

    // Mostrar el monto final
    printf("El monto final despu�s de %d meses es: $%.2f\n", MES, montoFinal);

    return 0;
}
