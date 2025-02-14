#include <stdio.h>
#include <stdlib.h>

const float TASA_DESCUENTO = 0.15;

int main()
{
    float totalCompra, descuento, precioFinal;

    /// Entrada de datos
    printf("Ingresar el total de la compra: ");
    scanf("%f", &totalCompra);

    /// Calculo del descuento y precio final
    descuento = totalCompra * TASA_DESCUENTO;
    precioFinal = totalCompra - descuento;

    /// Muestra los resultados
    printf("El descuento aplicado del (15%%): $%.2f\n", descuento);
    printf("El precio final con descuento es: $%.2f\n", precioFinal);

    return 0;
}
