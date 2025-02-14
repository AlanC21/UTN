#include <stdio.h>
#include <stdlib.h>

/// Declaramos la tasa de interes (2%)
#define TASA_INTERES 0.02

int main()
{
    float capital, interesGanado;

    /// Entrada de datos
    printf("Ingresar el capital a invertir: ");
    scanf("%f", &capital);

    /// Calculo de interes
    interesGanado = capital * TASA_INTERES;

    /// Muestra el resultado
    printf("El interes ganado despues de un mes sera: $%.2f\n", interesGanado);
    printf("El monto total sera: $%.2f\n", capital + interesGanado);

    return 0;
}
