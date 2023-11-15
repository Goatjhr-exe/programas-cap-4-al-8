#include <stdio.h>
#include <stdlib.h>

int main() {
    float COS[12], suma_cosechas = 0, promedio_anual;
    int i, meses_superiores_al_promedio = 0, mes_con_mayor_cosecha = 1;
    float mayor_cosecha = 0;

    // Solicita las toneladas mensuales cosechadas
    printf("Introduce las toneladas mensuales cosechadas durante el año:\n");
    for (i = 0; i < 12; i++) {
        scanf("%f", &COS[i]);
        suma_cosechas += COS[i];

        // Encuentra el mes con la mayor cantidad de toneladas cosechadas
        if (COS[i] > mayor_cosecha) {
            mayor_cosecha = COS[i];
            mes_con_mayor_cosecha = i + 1; // Sumamos 1 porque los meses son del 1 al 12
        }
    }

    // Calcula el promedio anual de toneladas cosechadas
    promedio_anual = suma_cosechas / 12;

    // Determina cuántos meses tuvieron una cosecha superior al promedio anual
    for (i = 0; i < 12; i++) {
        if (COS[i] > promedio_anual) {
            meses_superiores_al_promedio++;
        }
    }

    // Imprime los resultados
    printf("Promedio anual de toneladas cosechadas: %.2f\n", promedio_anual);
    printf("Meses con cosecha superior al promedio anual: %d\n", meses_superiores_al_promedio);
    printf("El mes con la mayor cantidad de toneladas fue el mes %d con %.2f toneladas cosechadas.\n", mes_con_mayor_cosecha, mayor_cosecha);

    return 0;
}
