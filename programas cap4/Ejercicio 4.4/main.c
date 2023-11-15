#include <stdio.h>
#include <stdlib.h>

int main() {
    int MES;
    float CAP, TAS, montoFinal;

    // Solicitar datos al usuario
    printf("Ingrese el número de meses: ");
    scanf("%d", &MES);

    printf("Ingrese el monto inicial: $");
    scanf("%f", &CAP);

    printf("Ingrese la tasa de interés mensual (porcentaje): ");
    scanf("%f", &TAS);

    // Convertir la tasa de interés de porcentaje a decimal
    TAS = TAS / 100;

    // Calcular el monto final usando la fórmula del interés compuesto
    montoFinal = CAP;
    for (int i = 0; i < MES; i++) {
        montoFinal = montoFinal * (1 + TAS);
    }

    // Mostrar el monto final
    printf("El monto final después de %d meses es: $%.2f\n", MES, montoFinal);

    return 0;
}
