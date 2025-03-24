#include <stdio.h>

float convertir_quetzales_a_euros(float cantidad);
float convertir_quetzales_a_dolares(float cantidad);
float convertir_euros_a_quetzales(float cantidad);
float convertir_euros_a_dolares(float cantidad);
float convertir_dolares_a_quetzales(float cantidad);
float convertir_dolares_a_euros(float cantidad);

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Conversor de Monedas:\n");
    printf("1. Quetzales (QTZ) a Euros (EUR)\n");
    printf("2. Quetzales (QTZ) a Dolares (USD)\n");
    printf("3. Euros (EUR) a Quetzales (QTZ)\n");
    printf("4. Euros (EUR) a Dolares (USD)\n");
    printf("5. Dolares (USD) a Quetzales (QTZ)\n");
    printf("6. Dolares (USD) a Euros (EUR)\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 6) {
        printf("Opción inválida. no ves que solo hay 6 opciones -_-\n");
        return 1;
    }

    printf("Ingrese la cantidad que desea convertir: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1:
            resultado = convertir_quetzales_a_euros(cantidad);
            printf("%.2f Quetzales (QTZ) = %.2f Euros (EUR)\n", cantidad, resultado);
            break;
        case 2:
            resultado = convertir_quetzales_a_dolares(cantidad);
            printf("%.2f Quetzales (QTZ) = %.2f Dolares (USD)\n", cantidad, resultado);
            break;
        case 3:
            resultado = convertir_euros_a_quetzales(cantidad);
            printf("%.2f Euros (EUR) = %.2f Quetzales (QTZ)\n", cantidad, resultado);
            break;
        case 4:
            resultado = convertir_euros_a_dolares(cantidad);
            printf("%.2f Euros (EUR) = %.2f Dolares (USD)\n", cantidad, resultado);
            break;
        case 5:
            resultado = convertir_dolares_a_quetzales(cantidad);
            printf("%.2f Dolares (USD) = %.2f Quetzales (QTZ)\n", cantidad, resultado);
            break;
        case 6:
            resultado = convertir_dolares_a_euros(cantidad);
            printf("%.2f Dolares (USD) = %.2f Euros (EUR)\n", cantidad, resultado);
            break;
    }

    return 0;
}

float convertir_quetzales_a_euros(float cantidad) {
    float tasa = 0.085; // Tasa de cambio de QTZ a EUR
    return cantidad * tasa;
}

float convertir_quetzales_a_dolares(float cantidad) {
    float tasa = 0.13; // Tasa de cambio de QTZ a USD
    return cantidad * tasa;
}

float convertir_euros_a_quetzales(float cantidad) {
    float tasa = 11.76; // Tasa de cambio de EUR a QTZ
    return cantidad * tasa;
}

float convertir_euros_a_dolares(float cantidad) {
    float tasa = 1.08; // Tasa de cambio de EUR a USD
    return cantidad * tasa;
}

float convertir_dolares_a_quetzales(float cantidad) {
    float tasa = 7.69; // Tasa de cambio de USD a QTZ
    return cantidad * tasa;
}

float convertir_dolares_a_euros(float cantidad) {
    float tasa = 0.93; // Tasa de cambio de USD a EUR
    return cantidad * tasa;
}
