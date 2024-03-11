#include <stdio.h>

int main()
{
    int opcion;
    float cantidad, resultado;
    float tasa_de_cambio = 0.105; // Tasa de cambio de Quetzales a Euros (1 Q = 0.105 EUR)

    printf("Seleccione la operacion que desea realizar:\n");
    printf("1. Convertir de Euros a Quetzales.\n");
    printf("2. Convertir de Quetzales a Euros.\n");
    printf("Ingrese su opcion (1 o 2): ");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        // Convertir de Euros a Quetzales
        printf("Ingrese la cantidad de Euros: ");
        scanf("%f", &cantidad);
        resultado = cantidad / tasa_de_cambio;
        printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
    }
    else if (opcion == 2)
    {
        // Convertir de Quetzales a Euros
        printf("Ingrese la cantidad de Quetzales: ");
        scanf("%f", &cantidad);
        resultado = cantidad * tasa_de_cambio;
        printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
    }
    else
    {
        printf("Opcion invalida. Por favor seleccione 1 o 2.\n");
    }

    return 0;
}
